`include "defines.vh"

module cpu (
  input clock,
  input reset,
  input [XLEN - 1:0] load_data,
  input [31:0] inst,
  output mem_load,
  output mem_store,
  output [XLEN - 1:0] store_data,
  output [XLEN - 1:0] address,
  output [XLEN - 1:0] pc
);

  wire [2:0] ins_type;
  wire [2:0] funct3;
  wire [6:0] funct7;
  wire [6:0] opcode;

  // IF_ID
  wire [XLEN - 1:0] id_pc, ex_pc, mem_pc;				// for alu
  wire [XLEN - 1:0] if_inst, id_inst;						// for decode

  // ID_EX
  wire [4:0] rd, ex_rd, mem_rd, wb_rd;				      // for stage WB
  wire [4:0] rs1, rs2;							              	// for gpr
  wire [XLEN - 1:0] id_rs1, ex_rs1, id_rs2, ex_rs2;	// for forward
  wire [XLEN - 1:0] id_imm, ex_imm, mem_imm;			  // for alu
  wire [4:0] ex_rs1_fwd, ex_rs2_fwd;					      // for alu, csr, forward

  // EX_MEM
  wire [XLEN - 1:0] mem_rs1, mem_rs2;	  // st data
  wire [XLEN - 1:0] mem_alu;						// st/ld address

  // MEM_WB
  wire [XLEN - 1:0] wb_alu;							// write back to gpr

  // control EX
  wire [4:0] id_alu_op, ex_alu_op;					          // for alu
  wire s_pc, ex_s_pc, s_imm, ex_s_imm, s_32, ex_s_32; // for alu
  wire s_jalr, s_jump, s_branch, s_branch_zero;		    // for addr_gen
  wire ex_jalr, ex_jump, ex_branch, ex_branch_zero;	  // for addr_gen
  wire s_rvc, ex_s_rvc;

  // control csr
  wire s_csr, s_csrw, s_csri;
  wire ex_csr, ex_csrw, ex_csri;
  wire s_ecall, s_ebreak, s_mret, s_illegal;
  wire ex_ecall, ex_ebreak, ex_mret, ex_illegal;

  // control MEM
  wire s_store, ex_store, s_load, ex_load;
  wire [2:0] ex_funct3, mem_funct3;

  // control pipeline
  wire if_id_pause, id_ex_pause, ex_mem_pause, mem_wb_pause; 
  wire if_id_pause, id_ex_pause, ex_mem_pause, mem_wb_pause; 
  wire if_id_pause, id_ex_pause, ex_mem_pause, mem_wb_pause; 
  wire if_id_bubble, id_ex_bubble, ex_mem_bubble, mem_wb_bubble;
  wire s_flush, ex_flush, mem_flush;

  // stage IF
  wire pc_pause, s_exception;
  wire [XLEN - 1:0] npc, csr_pc;

  pc #(
    .XLEN(XLEN)
  ) pc_inst(
    .clock(clock),
    .reset(reset),
    .pause(pc_pause),
    .npc((s_exception | ex_mret) ? csr_pc : npc),
    .pc(pc)
  );

  if_id #(
    .XLEN(XLEN)
  ) if_id_inst (
    .clock(clock),
    .pause(if_id_pause),
    .bubble(if_id_bubble),
    .pc_in(pc),
    .inst_in(inst),
    .pc_out(id_pc),
    .inst_out(if_inst)
  );

  // stage ID
  wire branch_take;

  hazard hazard_inst(
    .ex_jump(ex_mret | branch_take | ex_jump),
    .ex_load(ex_load),
    .id_flush(s_flush),
    .ex_flush(ex_flush),
    .mem_flush(mem_flush),
    .s_exception(s_exception),
    .ex_rd(ex_rd),
    .rs1(rs1),
    .rs2(rs2),
    .pc_pause(pc_pause),
    .pause({if_id_pause, id_ex_pause, ex_mem_pause, mem_wb_pause}),
    .bubble({if_id_bubble, id_ex_bubble, ex_mem_bubble, mem_wb_bubble})
  );

  generate
    if (RVC_ENA) begin
      wire [31:0] c_inst;
      rvc #(
        .XLEN(XLEN)
      ) rvc_inst (
        .clock(clock),
        .pc(id_pc),
        .inst_in(if_inst),
        .inst_out(c_inst)
      );
      assign s_rvc = if_inst[1:0] != 2'b11;
      assign id_inst = s_rvc ? c_inst : if_inst;
    end 
    else begin
      assign s_rvc = 0;
      assign id_inst = if_inst;
    end 
  endgenerate

  decoder #(
    .XLEN(XLEN)
  ) decoder_inst (
    .clock(clock),
    .pc(id_pc),
    .inst(id_inst),
    .opcode(opcode),
    .ins_type(ins_type),
    .funct3(funct3),
    .funct7(funct7),
    .rs1(rs1),
    .rs2(rs2),
    .rd(rd),
    .imm(id_imm),
    .alu_op(id_alu_op),
    .s_pc(s_pc),
    .s_imm(s_imm),
    .s_jump(s_jump),
    .s_jalr(s_jalr),
    .s_branch(s_branch),
    .s_branch_zero(s_branch_zero),
    .s_load(s_load),
    .s_store(s_store),
    .s_csr(s_csr),
    .s_csri(s_csri),
    .s_csrw(s_csrw),
    .s_32(s_32),
    .s_flush(s_flush),
    .s_ecall(s_ecall),
    .s_ebreak(s_ebreak),
    .s_mret(s_mret),
    .s_illegal(s_illegal)
  );

  id_ex #(
    .XLEN(XLEN)
  ) id_ex_inst (
    .clock(clock),
    .pause(id_ex_pause),
    .bubble(id_ex_bubble),
    .rd_in(rd),
    .rs1_fwd_in(rs1),
    .rs2_fwd_in(rs2),
    .pc_in(id_pc),
    .rs1_in(id_rs1),
    .rs2_in(id_rs2),
    .imm_in(id_imm),
    .ctrl_in({id_alu_op, s_pc, s_imm, s_32, s_jalr, s_branch, s_branch_zero, s_csr, s_csri, s_csrw, s_jump, s_store, s_load, s_flush, s_ecall, s_ebreak, s_mret, s_illegal, funct3, s_rvc}),
    .rd_out(ex_rd),
    .rs1_fwd_out(ex_rs1_fwd),
    .rs2_fwd_out(ex_rs2_fwd),
    .pc_out(ex_pc),
    .rs1_out(ex_rs1),
    .rs2_out(ex_rs2),	
	  .rs2_out(ex_rs2),	
    .rs2_out(ex_rs2),	
    .imm_out(ex_imm),
    .ctrl_out({ex_alu_op, ex_s_pc, ex_s_imm, ex_s_32, ex_jalr, ex_branch, ex_branch_zero, ex_csr, ex_csri, ex_csrw, ex_jump, ex_store, ex_load, ex_flush, ex_ecall, ex_ebreak, ex_mret, ex_illegal, ex_funct3, ex_s_rvc})
  );

  // stage EX
  wire [XLEN - 1:0] fwd_rs1, fwd_rs2;

  forward #(
    .XLEN(XLEN)
  ) forward_inst (
    .mem_rd(mem_rd),
    .wb_rd(wb_rd),
    .rs1(ex_rs1_fwd),
    .rs2(ex_rs2_fwd),
    .ex_rs1(ex_rs1),
    .ex_rs2(ex_rs2),
    .mem_rd_reg(mem_alu),
    .wb_rd_reg(wb_alu),
    .rs1_reg(fwd_rs1),
    .rs2_reg(fwd_rs2)
  );

  wire alu_zero;
  wire [XLEN - 1:0] alu_o, csr_o;
  wire [XLEN - 1:0] mul_o, div_o;

  alu #(
    .XLEN(XLEN)
  ) alu_inst(
    .s_32(ex_s_32),
    .opcode(ex_alu_op),
    .rs1(ex_s_pc? ex_pc : fwd_rs1),
    .rs2(ex_s_imm ? ex_imm : fwd_rs2),
    .rd(alu_o),
    .zero(alu_zero)
  );

  generate if (MUL_ENA)
  mul #(
    .XLEN(XLEN)
  ) mul_inst(
    .opcode(ex_alu_op),
    .rs1(fwd_rs1),
    .rs2(fwd_rs2),
    .rd(mul_o)	
	  .rd(mul_o)	
    .rd(mul_o)	
  );
  endgenerate

  generate if (DIV_ENA)
  div #(
    .XLEN(XLEN)
  ) div_inst(
    .s_32(ex_s_32),	
	  .s_32(ex_s_32),	
    .s_32(ex_s_32),	
    .opcode(ex_alu_op),
    .rs1(fwd_rs1),
    .rs2(fwd_rs2),
    .rd(div_o)	
	  .rd(div_o)	
    .rd(div_o)	
  );
  endgenerate

  wire [XLEN - 1:0] ex_alu, alu_mux;

  generate 
    if (DIV_ENA)
      assign alu_mux = ex_alu_op[4:2] == 3'b101 ? div_o : ex_alu_op[4:2] == 3'b100 ? mul_o : alu_o;
    else if (MUL_ENA)
      assign alu_mux = ex_alu_op[4:2] == 3'b100 ? mul_o : alu_o;
    else assign alu_mux = alu_o;
  endgenerate

  assign ex_alu = ex_csr ? csr_o : ex_jump ? ex_pc + (ex_s_rvc ? 2 : 4) : alu_mux;

  addr_gen #(
    .XLEN(XLEN)
  ) addr_gen_inst (
    .alu_zero(alu_zero),
    .s_jump(ex_jump),
    .s_jalr(ex_jalr),
    .s_branch(ex_branch),
    .s_branch_zero(ex_branch_zero),
    .s_rvc(RVC_ENA && inst[1:0] != 2'b11),
    .pc(pc),
    .ex_pc(ex_pc),
    .imm(ex_imm),
    .alu_o(alu_o),
    .branch_take(branch_take),
    .npc(npc)
  );

  csr #(
    .XLEN(XLEN)
  ) csr_inst(
    .clock(clock),
    .reset(reset),
    .s_csr(ex_csr),
    .s_csrw(ex_csrw),
    .s_ecall(ex_ecall),
    .s_ebreak(ex_ebreak),
    .s_mret(ex_mret),
    .s_illegal(ex_illegal),
    .s_load(ex_load),
    .s_store(ex_store),
    .i_misalign(!RVC_ENA && npc[1:0] != 2'b00),
    .funct3(ex_funct3),
    .addr(ex_imm),
    .mem_addr(ex_alu),
    .pc_in(ex_pc),
    .data_in(ex_csri ? ex_rs1_fwd : fwd_rs1),
    .s_exception(s_exception),
    .pc_out(csr_pc),
    .data_out(csr_o),
  );

  ex_mem #(
    .XLEN(XLEN)
  ) ex_mem_inst (
    .clock(clock),
    .pause(ex_mem_pause),
    .bubble(ex_mem_bubble),
    .rd_in(ex_rd),
    .rs2_in(fwd_rs2),
    .alu_in(ex_alu),
    .ctrl_in({ex_store, ex_load, ex_flush, ex_funct3}),
    .rd_out(mem_rd),
    .rs2_out(mem_rs2),
    .alu_out(mem_alu),
    .ctrl_out({mem_store, mem_load, mem_flush, mem_funct3})
  );

  // stage MEM
  assign address = mem_alu;

  wire [XLEN - 1:0] mem_data;

  ld_gen #(
    .XLEN(XLEN)
  ) ld_inst(
    .clock(clock),
    .s_byte(address[0]),
    .funct3(mem_funct3),
    .data_in(load_data),
    .data_out(mem_data)
  );

  st_gen #(
    .XLEN(XLEN)
  ) st_inst(
    .clock(clock),
    .s_byte(address[0]),
    .funct3(mem_funct3),
    .data_l(load_data),
    .data_in(mem_rs2),
    .data_out(store_data)
  );

  wire [XLEN - 1:0] mem_rd_reg = mem_load ? mem_data : mem_alu;

  mem_wb #(
    .XLEN(XLEN)
  ) mem_wb_inst (
    .clock(clock),
    .pause(mem_wb_pause),
    .bubble(mem_wb_bubble),
    .rd_in(mem_rd),
    .alu_in(mem_rd_reg),
    .rd_out(wb_rd),
    .alu_out(wb_alu)
  );

  // stage WB
  gpr #(
    .XLEN(XLEN)
  ) gpr_inst (
    .clock(clock),
    .addr_w(wb_rd),
    .addr_r1(rs1),
    .addr_r2(rs2),
    .data_w(wb_alu),
    .data_r1(id_rs1),
    .data_r2(id_rs2)
  );

endmodule
