// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+198,"clock", false,-1);
        tracep->declBit(c+199,"reset", false,-1);
        tracep->declBit(c+198,"top clock", false,-1);
        tracep->declBit(c+199,"top reset", false,-1);
        tracep->declBus(c+204,"top XLEN", false,-1, 31,0);
        tracep->declBit(c+3,"top load", false,-1);
        tracep->declBit(c+4,"top store", false,-1);
        tracep->declBus(c+192,"top load_data", false,-1, 31,0);
        tracep->declBus(c+157,"top store_data", false,-1, 31,0);
        tracep->declBus(c+193,"top inst", false,-1, 31,0);
        tracep->declBus(c+5,"top address", false,-1, 31,0);
        tracep->declBus(c+6,"top pc", false,-1, 31,0);
        tracep->declBus(c+205,"top ADDR_HALT", false,-1, 31,0);
        tracep->declBus(c+206,"top ADDR_SIG_BEGIN", false,-1, 31,0);
        tracep->declBus(c+207,"top ADDR_SIG_END", false,-1, 31,0);
        tracep->declBus(c+7,"top sig_begin", false,-1, 31,0);
        tracep->declBus(c+8,"top sig_end", false,-1, 31,0);
        tracep->declBus(c+204,"top cpu_inst XLEN", false,-1, 31,0);
        tracep->declBus(c+208,"top cpu_inst MUL_DIV_ENA", false,-1, 31,0);
        tracep->declBus(c+208,"top cpu_inst RVC_ENA", false,-1, 31,0);
        tracep->declBit(c+198,"top cpu_inst clock", false,-1);
        tracep->declBit(c+199,"top cpu_inst reset", false,-1);
        tracep->declBus(c+192,"top cpu_inst load_data", false,-1, 31,0);
        tracep->declBus(c+193,"top cpu_inst inst", false,-1, 31,0);
        tracep->declBit(c+3,"top cpu_inst mem_load", false,-1);
        tracep->declBit(c+4,"top cpu_inst mem_store", false,-1);
        tracep->declBus(c+157,"top cpu_inst store_data", false,-1, 31,0);
        tracep->declBus(c+5,"top cpu_inst address", false,-1, 31,0);
        tracep->declBus(c+6,"top cpu_inst pc", false,-1, 31,0);
        tracep->declBus(c+9,"top cpu_inst ins_type", false,-1, 2,0);
        tracep->declBus(c+10,"top cpu_inst funct3", false,-1, 2,0);
        tracep->declBus(c+11,"top cpu_inst funct7", false,-1, 6,0);
        tracep->declBus(c+12,"top cpu_inst opcode", false,-1, 6,0);
        tracep->declBus(c+13,"top cpu_inst id_pc", false,-1, 31,0);
        tracep->declBus(c+14,"top cpu_inst ex_pc", false,-1, 31,0);
        tracep->declBus(c+209,"top cpu_inst mem_pc", false,-1, 31,0);
        tracep->declBus(c+15,"top cpu_inst if_inst", false,-1, 31,0);
        tracep->declBus(c+16,"top cpu_inst id_inst", false,-1, 31,0);
        tracep->declBus(c+17,"top cpu_inst rd", false,-1, 4,0);
        tracep->declBus(c+18,"top cpu_inst ex_rd", false,-1, 4,0);
        tracep->declBus(c+19,"top cpu_inst mem_rd", false,-1, 4,0);
        tracep->declBus(c+20,"top cpu_inst wb_rd", false,-1, 4,0);
        tracep->declBus(c+21,"top cpu_inst rs1", false,-1, 4,0);
        tracep->declBus(c+22,"top cpu_inst rs2", false,-1, 4,0);
        tracep->declBus(c+194,"top cpu_inst id_rs1", false,-1, 31,0);
        tracep->declBus(c+23,"top cpu_inst ex_rs1", false,-1, 31,0);
        tracep->declBus(c+195,"top cpu_inst id_rs2", false,-1, 31,0);
        tracep->declBus(c+24,"top cpu_inst ex_rs2", false,-1, 31,0);
        tracep->declBus(c+25,"top cpu_inst id_imm", false,-1, 31,0);
        tracep->declBus(c+26,"top cpu_inst ex_imm", false,-1, 31,0);
        tracep->declBus(c+210,"top cpu_inst mem_imm", false,-1, 31,0);
        tracep->declBus(c+27,"top cpu_inst ex_rs1_fwd", false,-1, 4,0);
        tracep->declBus(c+28,"top cpu_inst ex_rs2_fwd", false,-1, 4,0);
        tracep->declBus(c+211,"top cpu_inst mem_rs1", false,-1, 31,0);
        tracep->declBus(c+29,"top cpu_inst mem_rs2", false,-1, 31,0);
        tracep->declBus(c+5,"top cpu_inst mem_alu", false,-1, 31,0);
        tracep->declBus(c+30,"top cpu_inst wb_alu", false,-1, 31,0);
        tracep->declBus(c+31,"top cpu_inst id_alu_op", false,-1, 4,0);
        tracep->declBus(c+32,"top cpu_inst ex_alu_op", false,-1, 4,0);
        tracep->declBit(c+33,"top cpu_inst s_pc", false,-1);
        tracep->declBit(c+34,"top cpu_inst ex_s_pc", false,-1);
        tracep->declBit(c+35,"top cpu_inst s_imm", false,-1);
        tracep->declBit(c+36,"top cpu_inst ex_s_imm", false,-1);
        tracep->declBit(c+37,"top cpu_inst s_32", false,-1);
        tracep->declBit(c+38,"top cpu_inst ex_s_32", false,-1);
        tracep->declBit(c+39,"top cpu_inst s_jalr", false,-1);
        tracep->declBit(c+40,"top cpu_inst s_jump", false,-1);
        tracep->declBit(c+41,"top cpu_inst s_branch", false,-1);
        tracep->declBit(c+42,"top cpu_inst s_branch_zero", false,-1);
        tracep->declBit(c+43,"top cpu_inst ex_jalr", false,-1);
        tracep->declBit(c+44,"top cpu_inst ex_jump", false,-1);
        tracep->declBit(c+45,"top cpu_inst ex_branch", false,-1);
        tracep->declBit(c+46,"top cpu_inst ex_branch_zero", false,-1);
        tracep->declBit(c+47,"top cpu_inst s_rvc", false,-1);
        tracep->declBit(c+48,"top cpu_inst ex_s_rvc", false,-1);
        tracep->declBit(c+49,"top cpu_inst s_csr", false,-1);
        tracep->declBit(c+50,"top cpu_inst s_csrw", false,-1);
        tracep->declBit(c+51,"top cpu_inst s_csri", false,-1);
        tracep->declBit(c+52,"top cpu_inst ex_csr", false,-1);
        tracep->declBit(c+53,"top cpu_inst ex_csrw", false,-1);
        tracep->declBit(c+54,"top cpu_inst ex_csri", false,-1);
        tracep->declBit(c+55,"top cpu_inst s_ecall", false,-1);
        tracep->declBit(c+56,"top cpu_inst s_ebreak", false,-1);
        tracep->declBit(c+57,"top cpu_inst s_mret", false,-1);
        tracep->declBit(c+58,"top cpu_inst s_illegal", false,-1);
        tracep->declBit(c+59,"top cpu_inst ex_ecall", false,-1);
        tracep->declBit(c+60,"top cpu_inst ex_ebreak", false,-1);
        tracep->declBit(c+61,"top cpu_inst ex_mret", false,-1);
        tracep->declBit(c+62,"top cpu_inst ex_illegal", false,-1);
        tracep->declBit(c+63,"top cpu_inst s_store", false,-1);
        tracep->declBit(c+64,"top cpu_inst ex_store", false,-1);
        tracep->declBit(c+65,"top cpu_inst s_load", false,-1);
        tracep->declBit(c+66,"top cpu_inst ex_load", false,-1);
        tracep->declBus(c+67,"top cpu_inst ex_funct3", false,-1, 2,0);
        tracep->declBus(c+68,"top cpu_inst mem_funct3", false,-1, 2,0);
        tracep->declBit(c+69,"top cpu_inst if_id_pause", false,-1);
        tracep->declBit(c+70,"top cpu_inst id_ex_pause", false,-1);
        tracep->declBit(c+71,"top cpu_inst ex_mem_pause", false,-1);
        tracep->declBit(c+72,"top cpu_inst mem_wb_pause", false,-1);
        tracep->declBit(c+73,"top cpu_inst if_id_bubble", false,-1);
        tracep->declBit(c+74,"top cpu_inst id_ex_bubble", false,-1);
        tracep->declBit(c+75,"top cpu_inst ex_mem_bubble", false,-1);
        tracep->declBit(c+76,"top cpu_inst mem_wb_bubble", false,-1);
        tracep->declBit(c+77,"top cpu_inst s_flush", false,-1);
        tracep->declBit(c+78,"top cpu_inst ex_flush", false,-1);
        tracep->declBit(c+79,"top cpu_inst mem_flush", false,-1);
        tracep->declBit(c+80,"top cpu_inst pc_pause", false,-1);
        tracep->declBit(c+81,"top cpu_inst s_exception", false,-1);
        tracep->declBus(c+200,"top cpu_inst npc", false,-1, 31,0);
        tracep->declBus(c+82,"top cpu_inst csr_pc", false,-1, 31,0);
        tracep->declBit(c+83,"top cpu_inst branch_take", false,-1);
        tracep->declBus(c+84,"top cpu_inst fwd_rs1", false,-1, 31,0);
        tracep->declBus(c+85,"top cpu_inst fwd_rs2", false,-1, 31,0);
        tracep->declBit(c+86,"top cpu_inst alu_zero", false,-1);
        tracep->declBus(c+87,"top cpu_inst alu_o", false,-1, 31,0);
        tracep->declBus(c+88,"top cpu_inst csr_o", false,-1, 31,0);
        tracep->declBus(c+89,"top cpu_inst mul_o", false,-1, 31,0);
        tracep->declBus(c+90,"top cpu_inst div_o", false,-1, 31,0);
        tracep->declBus(c+91,"top cpu_inst ex_alu", false,-1, 31,0);
        tracep->declBus(c+92,"top cpu_inst alu_mux", false,-1, 31,0);
        tracep->declBus(c+158,"top cpu_inst mem_data", false,-1, 31,0);
        tracep->declBus(c+196,"top cpu_inst mem_data_reg", false,-1, 31,0);
        tracep->declBus(c+93,"top cpu_inst genblk1 c_inst", false,-1, 31,0);
        tracep->declBus(c+204,"top cpu_inst pc_inst XLEN", false,-1, 31,0);
        tracep->declBus(c+212,"top cpu_inst pc_inst RESET", false,-1, 31,0);
        tracep->declBit(c+198,"top cpu_inst pc_inst clock", false,-1);
        tracep->declBit(c+199,"top cpu_inst pc_inst reset", false,-1);
        tracep->declBit(c+80,"top cpu_inst pc_inst pause", false,-1);
        tracep->declBus(c+201,"top cpu_inst pc_inst npc", false,-1, 31,0);
        tracep->declBus(c+6,"top cpu_inst pc_inst pc", false,-1, 31,0);
        tracep->declBus(c+204,"top cpu_inst if_id_inst XLEN", false,-1, 31,0);
        tracep->declBit(c+198,"top cpu_inst if_id_inst clock", false,-1);
        tracep->declBit(c+69,"top cpu_inst if_id_inst pause", false,-1);
        tracep->declBit(c+73,"top cpu_inst if_id_inst bubble", false,-1);
        tracep->declBus(c+6,"top cpu_inst if_id_inst pc_in", false,-1, 31,0);
        tracep->declBus(c+193,"top cpu_inst if_id_inst inst_in", false,-1, 31,0);
        tracep->declBus(c+13,"top cpu_inst if_id_inst pc_out", false,-1, 31,0);
        tracep->declBus(c+15,"top cpu_inst if_id_inst inst_out", false,-1, 31,0);
        tracep->declBus(c+13,"top cpu_inst if_id_inst genblk1 pc_reg", false,-1, 31,0);
        tracep->declBus(c+15,"top cpu_inst if_id_inst genblk1 inst_reg", false,-1, 31,0);
        tracep->declBit(c+94,"top cpu_inst hazard_inst ex_jump", false,-1);
        tracep->declBit(c+66,"top cpu_inst hazard_inst ex_load", false,-1);
        tracep->declBit(c+77,"top cpu_inst hazard_inst id_flush", false,-1);
        tracep->declBit(c+78,"top cpu_inst hazard_inst ex_flush", false,-1);
        tracep->declBit(c+79,"top cpu_inst hazard_inst mem_flush", false,-1);
        tracep->declBit(c+81,"top cpu_inst hazard_inst s_exception", false,-1);
        tracep->declBus(c+18,"top cpu_inst hazard_inst ex_rd", false,-1, 4,0);
        tracep->declBus(c+21,"top cpu_inst hazard_inst rs1", false,-1, 4,0);
        tracep->declBus(c+22,"top cpu_inst hazard_inst rs2", false,-1, 4,0);
        tracep->declBit(c+80,"top cpu_inst hazard_inst pc_pause", false,-1);
        tracep->declBus(c+95,"top cpu_inst hazard_inst pause", false,-1, 3,0);
        tracep->declBus(c+96,"top cpu_inst hazard_inst bubble", false,-1, 3,0);
        tracep->declBus(c+213,"top cpu_inst hazard_inst PIPE_ID", false,-1, 3,0);
        tracep->declBus(c+214,"top cpu_inst hazard_inst PIPE_EX", false,-1, 3,0);
        tracep->declBus(c+215,"top cpu_inst hazard_inst PIPE_MEM", false,-1, 3,0);
        tracep->declBit(c+97,"top cpu_inst hazard_inst load_hazard", false,-1);
        tracep->declBus(c+204,"top cpu_inst decoder_inst XLEN", false,-1, 31,0);
        tracep->declBit(c+198,"top cpu_inst decoder_inst clock", false,-1);
        tracep->declBus(c+13,"top cpu_inst decoder_inst pc", false,-1, 31,0);
        tracep->declBus(c+16,"top cpu_inst decoder_inst inst", false,-1, 31,0);
        tracep->declBus(c+12,"top cpu_inst decoder_inst opcode", false,-1, 6,0);
        tracep->declBus(c+9,"top cpu_inst decoder_inst ins_type", false,-1, 2,0);
        tracep->declBus(c+10,"top cpu_inst decoder_inst funct3", false,-1, 2,0);
        tracep->declBus(c+11,"top cpu_inst decoder_inst funct7", false,-1, 6,0);
        tracep->declBus(c+21,"top cpu_inst decoder_inst rs1", false,-1, 4,0);
        tracep->declBus(c+22,"top cpu_inst decoder_inst rs2", false,-1, 4,0);
        tracep->declBus(c+17,"top cpu_inst decoder_inst rd", false,-1, 4,0);
        tracep->declBus(c+25,"top cpu_inst decoder_inst imm", false,-1, 31,0);
        tracep->declBus(c+31,"top cpu_inst decoder_inst alu_op", false,-1, 4,0);
        tracep->declBit(c+33,"top cpu_inst decoder_inst s_pc", false,-1);
        tracep->declBit(c+35,"top cpu_inst decoder_inst s_imm", false,-1);
        tracep->declBit(c+39,"top cpu_inst decoder_inst s_jalr", false,-1);
        tracep->declBit(c+40,"top cpu_inst decoder_inst s_jump", false,-1);
        tracep->declBit(c+41,"top cpu_inst decoder_inst s_branch", false,-1);
        tracep->declBit(c+42,"top cpu_inst decoder_inst s_branch_zero", false,-1);
        tracep->declBit(c+65,"top cpu_inst decoder_inst s_load", false,-1);
        tracep->declBit(c+63,"top cpu_inst decoder_inst s_store", false,-1);
        tracep->declBit(c+49,"top cpu_inst decoder_inst s_csr", false,-1);
        tracep->declBit(c+51,"top cpu_inst decoder_inst s_csri", false,-1);
        tracep->declBit(c+50,"top cpu_inst decoder_inst s_csrw", false,-1);
        tracep->declBit(c+37,"top cpu_inst decoder_inst s_32", false,-1);
        tracep->declBit(c+77,"top cpu_inst decoder_inst s_flush", false,-1);
        tracep->declBit(c+55,"top cpu_inst decoder_inst s_ecall", false,-1);
        tracep->declBit(c+56,"top cpu_inst decoder_inst s_ebreak", false,-1);
        tracep->declBit(c+57,"top cpu_inst decoder_inst s_mret", false,-1);
        tracep->declBit(c+58,"top cpu_inst decoder_inst s_illegal", false,-1);
        tracep->declBit(c+98,"top cpu_inst decoder_inst s_fence_tso", false,-1);
        tracep->declBit(c+99,"top cpu_inst decoder_inst s_fence", false,-1);
        tracep->declBus(c+12,"top cpu_inst decoder_inst inst_type_inst opcode", false,-1, 6,0);
        tracep->declBus(c+9,"top cpu_inst decoder_inst inst_type_inst ins_type", false,-1, 2,0);
        tracep->declBus(c+204,"top cpu_inst decoder_inst imm_gen_inst XLEN", false,-1, 31,0);
        tracep->declBus(c+16,"top cpu_inst decoder_inst imm_gen_inst inst", false,-1, 31,0);
        tracep->declBus(c+9,"top cpu_inst decoder_inst imm_gen_inst ins_type", false,-1, 2,0);
        tracep->declBus(c+25,"top cpu_inst decoder_inst imm_gen_inst imm", false,-1, 31,0);
        tracep->declBus(c+204,"top cpu_inst id_ex_inst XLEN", false,-1, 31,0);
        tracep->declBit(c+198,"top cpu_inst id_ex_inst clock", false,-1);
        tracep->declBit(c+70,"top cpu_inst id_ex_inst pause", false,-1);
        tracep->declBit(c+74,"top cpu_inst id_ex_inst bubble", false,-1);
        tracep->declBus(c+17,"top cpu_inst id_ex_inst rd_in", false,-1, 4,0);
        tracep->declBus(c+21,"top cpu_inst id_ex_inst rs1_fwd_in", false,-1, 4,0);
        tracep->declBus(c+22,"top cpu_inst id_ex_inst rs2_fwd_in", false,-1, 4,0);
        tracep->declBus(c+13,"top cpu_inst id_ex_inst pc_in", false,-1, 31,0);
        tracep->declBus(c+194,"top cpu_inst id_ex_inst rs1_in", false,-1, 31,0);
        tracep->declBus(c+195,"top cpu_inst id_ex_inst rs2_in", false,-1, 31,0);
        tracep->declBus(c+25,"top cpu_inst id_ex_inst imm_in", false,-1, 31,0);
        tracep->declBus(c+100,"top cpu_inst id_ex_inst ctrl_in", false,-1, 25,0);
        tracep->declBus(c+18,"top cpu_inst id_ex_inst rd_out", false,-1, 4,0);
        tracep->declBus(c+27,"top cpu_inst id_ex_inst rs1_fwd_out", false,-1, 4,0);
        tracep->declBus(c+28,"top cpu_inst id_ex_inst rs2_fwd_out", false,-1, 4,0);
        tracep->declBus(c+14,"top cpu_inst id_ex_inst pc_out", false,-1, 31,0);
        tracep->declBus(c+23,"top cpu_inst id_ex_inst rs1_out", false,-1, 31,0);
        tracep->declBus(c+24,"top cpu_inst id_ex_inst rs2_out", false,-1, 31,0);
        tracep->declBus(c+26,"top cpu_inst id_ex_inst imm_out", false,-1, 31,0);
        tracep->declBus(c+101,"top cpu_inst id_ex_inst ctrl_out", false,-1, 25,0);
        tracep->declBus(c+18,"top cpu_inst id_ex_inst genblk1 rd_reg", false,-1, 4,0);
        tracep->declBus(c+27,"top cpu_inst id_ex_inst genblk1 rs1_fwd_reg", false,-1, 4,0);
        tracep->declBus(c+28,"top cpu_inst id_ex_inst genblk1 rs2_fwd_reg", false,-1, 4,0);
        tracep->declBus(c+101,"top cpu_inst id_ex_inst genblk1 ctrl_reg", false,-1, 25,0);
        tracep->declBus(c+14,"top cpu_inst id_ex_inst genblk1 pc_reg", false,-1, 31,0);
        tracep->declBus(c+23,"top cpu_inst id_ex_inst genblk1 rs1_reg", false,-1, 31,0);
        tracep->declBus(c+24,"top cpu_inst id_ex_inst genblk1 rs2_reg", false,-1, 31,0);
        tracep->declBus(c+26,"top cpu_inst id_ex_inst genblk1 imm_reg", false,-1, 31,0);
        tracep->declBus(c+204,"top cpu_inst forward_inst XLEN", false,-1, 31,0);
        tracep->declBus(c+19,"top cpu_inst forward_inst mem_rd", false,-1, 4,0);
        tracep->declBus(c+20,"top cpu_inst forward_inst wb_rd", false,-1, 4,0);
        tracep->declBus(c+27,"top cpu_inst forward_inst rs1", false,-1, 4,0);
        tracep->declBus(c+28,"top cpu_inst forward_inst rs2", false,-1, 4,0);
        tracep->declBus(c+23,"top cpu_inst forward_inst ex_rs1", false,-1, 31,0);
        tracep->declBus(c+24,"top cpu_inst forward_inst ex_rs2", false,-1, 31,0);
        tracep->declBus(c+5,"top cpu_inst forward_inst mem_rd_reg", false,-1, 31,0);
        tracep->declBus(c+30,"top cpu_inst forward_inst wb_rd_reg", false,-1, 31,0);
        tracep->declBus(c+84,"top cpu_inst forward_inst rs1_reg", false,-1, 31,0);
        tracep->declBus(c+85,"top cpu_inst forward_inst rs2_reg", false,-1, 31,0);
        tracep->declBit(c+102,"top cpu_inst forward_inst forward1_mem", false,-1);
        tracep->declBit(c+103,"top cpu_inst forward_inst forward2_mem", false,-1);
        tracep->declBit(c+104,"top cpu_inst forward_inst forward1_wb", false,-1);
        tracep->declBit(c+105,"top cpu_inst forward_inst forward2_wb", false,-1);
        tracep->declBus(c+19,"top cpu_inst forward_inst forward_control_inst mem_rd", false,-1, 4,0);
        tracep->declBus(c+20,"top cpu_inst forward_inst forward_control_inst wb_rd", false,-1, 4,0);
        tracep->declBus(c+27,"top cpu_inst forward_inst forward_control_inst rs1", false,-1, 4,0);
        tracep->declBus(c+28,"top cpu_inst forward_inst forward_control_inst rs2", false,-1, 4,0);
        tracep->declBit(c+102,"top cpu_inst forward_inst forward_control_inst forward1_mem", false,-1);
        tracep->declBit(c+103,"top cpu_inst forward_inst forward_control_inst forward2_mem", false,-1);
        tracep->declBit(c+104,"top cpu_inst forward_inst forward_control_inst forward1_wb", false,-1);
        tracep->declBit(c+105,"top cpu_inst forward_inst forward_control_inst forward2_wb", false,-1);
        tracep->declBus(c+204,"top cpu_inst alu_inst XLEN", false,-1, 31,0);
        tracep->declBit(c+38,"top cpu_inst alu_inst s_32", false,-1);
        tracep->declBus(c+32,"top cpu_inst alu_inst opcode", false,-1, 4,0);
        tracep->declBus(c+106,"top cpu_inst alu_inst rs1", false,-1, 31,0);
        tracep->declBus(c+107,"top cpu_inst alu_inst rs2", false,-1, 31,0);
        tracep->declBus(c+87,"top cpu_inst alu_inst rd", false,-1, 31,0);
        tracep->declBit(c+86,"top cpu_inst alu_inst zero", false,-1);
        tracep->declBus(c+204,"top cpu_inst div_inst XLEN", false,-1, 31,0);
        tracep->declBit(c+38,"top cpu_inst div_inst s_32", false,-1);
        tracep->declBus(c+32,"top cpu_inst div_inst opcode", false,-1, 4,0);
        tracep->declBus(c+84,"top cpu_inst div_inst rs1", false,-1, 31,0);
        tracep->declBus(c+85,"top cpu_inst div_inst rs2", false,-1, 31,0);
        tracep->declBus(c+90,"top cpu_inst div_inst rd", false,-1, 31,0);
        tracep->declBus(c+216,"top cpu_inst div_inst MNI", false,-1, 31,0);
        tracep->declBus(c+216,"top cpu_inst div_inst MNIW", false,-1, 31,0);
        tracep->declBus(c+216,"top cpu_inst div_inst xmni", false,-1, 31,0);
        tracep->declBus(c+84,"top cpu_inst div_inst rs1w", false,-1, 31,0);
        tracep->declBus(c+85,"top cpu_inst div_inst rs2w", false,-1, 31,0);
        tracep->declBus(c+84,"top cpu_inst div_inst xrs1", false,-1, 31,0);
        tracep->declBus(c+85,"top cpu_inst div_inst xrs2", false,-1, 31,0);
        tracep->declBus(c+84,"top cpu_inst div_inst xrs1u", false,-1, 31,0);
        tracep->declBus(c+85,"top cpu_inst div_inst xrs2u", false,-1, 31,0);
        tracep->declBus(c+204,"top cpu_inst addr_gen_inst XLEN", false,-1, 31,0);
        tracep->declBit(c+86,"top cpu_inst addr_gen_inst alu_zero", false,-1);
        tracep->declBit(c+44,"top cpu_inst addr_gen_inst s_jump", false,-1);
        tracep->declBit(c+43,"top cpu_inst addr_gen_inst s_jalr", false,-1);
        tracep->declBit(c+45,"top cpu_inst addr_gen_inst s_branch", false,-1);
        tracep->declBit(c+46,"top cpu_inst addr_gen_inst s_branch_zero", false,-1);
        tracep->declBit(c+197,"top cpu_inst addr_gen_inst s_rvc", false,-1);
        tracep->declBus(c+6,"top cpu_inst addr_gen_inst pc", false,-1, 31,0);
        tracep->declBus(c+14,"top cpu_inst addr_gen_inst ex_pc", false,-1, 31,0);
        tracep->declBus(c+26,"top cpu_inst addr_gen_inst imm", false,-1, 31,0);
        tracep->declBus(c+87,"top cpu_inst addr_gen_inst alu_o", false,-1, 31,0);
        tracep->declBit(c+83,"top cpu_inst addr_gen_inst branch_take", false,-1);
        tracep->declBus(c+200,"top cpu_inst addr_gen_inst npc", false,-1, 31,0);
        tracep->declBus(c+204,"top cpu_inst csr_inst XLEN", false,-1, 31,0);
        tracep->declBit(c+198,"top cpu_inst csr_inst clock", false,-1);
        tracep->declBit(c+199,"top cpu_inst csr_inst reset", false,-1);
        tracep->declBit(c+52,"top cpu_inst csr_inst s_csr", false,-1);
        tracep->declBit(c+53,"top cpu_inst csr_inst s_csrw", false,-1);
        tracep->declBit(c+59,"top cpu_inst csr_inst s_ecall", false,-1);
        tracep->declBit(c+60,"top cpu_inst csr_inst s_ebreak", false,-1);
        tracep->declBit(c+61,"top cpu_inst csr_inst s_mret", false,-1);
        tracep->declBit(c+62,"top cpu_inst csr_inst s_illegal", false,-1);
        tracep->declBit(c+66,"top cpu_inst csr_inst s_load", false,-1);
        tracep->declBit(c+64,"top cpu_inst csr_inst s_store", false,-1);
        tracep->declBit(c+217,"top cpu_inst csr_inst i_misalign", false,-1);
        tracep->declBus(c+67,"top cpu_inst csr_inst funct3", false,-1, 2,0);
        tracep->declBus(c+108,"top cpu_inst csr_inst addr", false,-1, 11,0);
        tracep->declBus(c+91,"top cpu_inst csr_inst mem_addr", false,-1, 31,0);
        tracep->declBus(c+14,"top cpu_inst csr_inst pc_in", false,-1, 31,0);
        tracep->declBus(c+109,"top cpu_inst csr_inst data_in", false,-1, 31,0);
        tracep->declBit(c+81,"top cpu_inst csr_inst s_exception", false,-1);
        tracep->declBus(c+82,"top cpu_inst csr_inst pc_out", false,-1, 31,0);
        tracep->declBus(c+88,"top cpu_inst csr_inst data_out", false,-1, 31,0);
        tracep->declBit(c+110,"top cpu_inst csr_inst l_misalign", false,-1);
        tracep->declBit(c+111,"top cpu_inst csr_inst s_misalign", false,-1);
        tracep->declBus(c+112,"top cpu_inst csr_inst mtvec", false,-1, 31,0);
        tracep->declBus(c+113,"top cpu_inst csr_inst mepc", false,-1, 31,0);
        tracep->declBus(c+114,"top cpu_inst csr_inst mcause", false,-1, 31,0);
        tracep->declBus(c+115,"top cpu_inst csr_inst mtval", false,-1, 31,0);
        tracep->declBus(c+116,"top cpu_inst csr_inst mstatus", false,-1, 31,0);
        tracep->declBus(c+117,"top cpu_inst csr_inst mepc_next", false,-1, 31,0);
        tracep->declBus(c+118,"top cpu_inst csr_inst mcause_next", false,-1, 31,0);
        tracep->declBus(c+119,"top cpu_inst csr_inst mtval_next", false,-1, 31,0);
        tracep->declBus(c+120,"top cpu_inst csr_inst mstatus_next", false,-1, 31,0);
        tracep->declBus(c+121,"top cpu_inst csr_inst data_w", false,-1, 31,0);
        tracep->declBus(c+204,"top cpu_inst csr_inst misalign_access_inst XLEN", false,-1, 31,0);
        tracep->declBit(c+66,"top cpu_inst csr_inst misalign_access_inst s_load", false,-1);
        tracep->declBit(c+64,"top cpu_inst csr_inst misalign_access_inst s_store", false,-1);
        tracep->declBus(c+67,"top cpu_inst csr_inst misalign_access_inst funct3", false,-1, 2,0);
        tracep->declBus(c+122,"top cpu_inst csr_inst misalign_access_inst addr", false,-1, 2,0);
        tracep->declBit(c+110,"top cpu_inst csr_inst misalign_access_inst l_misalign", false,-1);
        tracep->declBit(c+111,"top cpu_inst csr_inst misalign_access_inst s_misalign", false,-1);
        tracep->declBit(c+123,"top cpu_inst csr_inst misalign_access_inst mis_lh", false,-1);
        tracep->declBit(c+124,"top cpu_inst csr_inst misalign_access_inst mis_lw", false,-1);
        tracep->declBit(c+125,"top cpu_inst csr_inst misalign_access_inst mis_sh", false,-1);
        tracep->declBit(c+126,"top cpu_inst csr_inst misalign_access_inst mis_sw", false,-1);
        tracep->declBus(c+204,"top cpu_inst csr_inst csr_op_inst XLEN", false,-1, 31,0);
        tracep->declBus(c+67,"top cpu_inst csr_inst csr_op_inst funct3", false,-1, 2,0);
        tracep->declBus(c+109,"top cpu_inst csr_inst csr_op_inst data_in", false,-1, 31,0);
        tracep->declBus(c+88,"top cpu_inst csr_inst csr_op_inst data_out", false,-1, 31,0);
        tracep->declBus(c+121,"top cpu_inst csr_inst csr_op_inst data_w", false,-1, 31,0);
        tracep->declBus(c+204,"top cpu_inst csr_inst csr_reg_inst XLEN", false,-1, 31,0);
        tracep->declBit(c+198,"top cpu_inst csr_inst csr_reg_inst clock", false,-1);
        tracep->declBit(c+199,"top cpu_inst csr_inst csr_reg_inst reset", false,-1);
        tracep->declBit(c+52,"top cpu_inst csr_inst csr_reg_inst s_csr", false,-1);
        tracep->declBit(c+53,"top cpu_inst csr_inst csr_reg_inst s_csrw", false,-1);
        tracep->declBus(c+108,"top cpu_inst csr_inst csr_reg_inst addr", false,-1, 11,0);
        tracep->declBus(c+14,"top cpu_inst csr_inst csr_reg_inst pc_in", false,-1, 31,0);
        tracep->declBus(c+121,"top cpu_inst csr_inst csr_reg_inst data_w", false,-1, 31,0);
        tracep->declBus(c+117,"top cpu_inst csr_inst csr_reg_inst mepc_next", false,-1, 31,0);
        tracep->declBus(c+118,"top cpu_inst csr_inst csr_reg_inst mcause_next", false,-1, 31,0);
        tracep->declBus(c+119,"top cpu_inst csr_inst csr_reg_inst mtval_next", false,-1, 31,0);
        tracep->declBus(c+120,"top cpu_inst csr_inst csr_reg_inst mstatus_next", false,-1, 31,0);
        tracep->declBus(c+88,"top cpu_inst csr_inst csr_reg_inst data_out", false,-1, 31,0);
        tracep->declBus(c+112,"top cpu_inst csr_inst csr_reg_inst mtvec", false,-1, 31,0);
        tracep->declBus(c+113,"top cpu_inst csr_inst csr_reg_inst mepc", false,-1, 31,0);
        tracep->declBus(c+114,"top cpu_inst csr_inst csr_reg_inst mcause", false,-1, 31,0);
        tracep->declBus(c+115,"top cpu_inst csr_inst csr_reg_inst mtval", false,-1, 31,0);
        tracep->declBus(c+116,"top cpu_inst csr_inst csr_reg_inst mstatus", false,-1, 31,0);
        tracep->declBus(c+127,"top cpu_inst csr_inst csr_reg_inst mie", false,-1, 31,0);
        tracep->declBus(c+128,"top cpu_inst csr_inst csr_reg_inst mip", false,-1, 31,0);
        tracep->declBus(c+129,"top cpu_inst csr_inst csr_reg_inst mscratch", false,-1, 31,0);
        tracep->declBus(c+204,"top cpu_inst ex_mem_inst XLEN", false,-1, 31,0);
        tracep->declBit(c+198,"top cpu_inst ex_mem_inst clock", false,-1);
        tracep->declBit(c+71,"top cpu_inst ex_mem_inst pause", false,-1);
        tracep->declBit(c+75,"top cpu_inst ex_mem_inst bubble", false,-1);
        tracep->declBus(c+18,"top cpu_inst ex_mem_inst rd_in", false,-1, 4,0);
        tracep->declBus(c+85,"top cpu_inst ex_mem_inst rs2_in", false,-1, 31,0);
        tracep->declBus(c+91,"top cpu_inst ex_mem_inst alu_in", false,-1, 31,0);
        tracep->declBus(c+130,"top cpu_inst ex_mem_inst ctrl_in", false,-1, 5,0);
        tracep->declBus(c+19,"top cpu_inst ex_mem_inst rd_out", false,-1, 4,0);
        tracep->declBus(c+29,"top cpu_inst ex_mem_inst rs2_out", false,-1, 31,0);
        tracep->declBus(c+5,"top cpu_inst ex_mem_inst alu_out", false,-1, 31,0);
        tracep->declBus(c+131,"top cpu_inst ex_mem_inst ctrl_out", false,-1, 5,0);
        tracep->declBus(c+131,"top cpu_inst ex_mem_inst genblk1 ctrl_reg", false,-1, 5,0);
        tracep->declBus(c+19,"top cpu_inst ex_mem_inst genblk1 rd_reg", false,-1, 4,0);
        tracep->declBus(c+29,"top cpu_inst ex_mem_inst genblk1 rs2_reg", false,-1, 31,0);
        tracep->declBus(c+5,"top cpu_inst ex_mem_inst genblk1 alu_reg", false,-1, 31,0);
        tracep->declBus(c+204,"top cpu_inst ld_inst XLEN", false,-1, 31,0);
        tracep->declBit(c+198,"top cpu_inst ld_inst clock", false,-1);
        tracep->declBit(c+132,"top cpu_inst ld_inst s_byte", false,-1);
        tracep->declBus(c+68,"top cpu_inst ld_inst funct3", false,-1, 2,0);
        tracep->declBus(c+192,"top cpu_inst ld_inst data_in", false,-1, 31,0);
        tracep->declBus(c+158,"top cpu_inst ld_inst data_out", false,-1, 31,0);
        tracep->declBus(c+204,"top cpu_inst st_inst XLEN", false,-1, 31,0);
        tracep->declBit(c+198,"top cpu_inst st_inst clock", false,-1);
        tracep->declBit(c+132,"top cpu_inst st_inst s_byte", false,-1);
        tracep->declBus(c+68,"top cpu_inst st_inst funct3", false,-1, 2,0);
        tracep->declBus(c+192,"top cpu_inst st_inst data_l", false,-1, 31,0);
        tracep->declBus(c+29,"top cpu_inst st_inst data_in", false,-1, 31,0);
        tracep->declBus(c+157,"top cpu_inst st_inst data_out", false,-1, 31,0);
        tracep->declBus(c+204,"top cpu_inst mem_wb_inst XLEN", false,-1, 31,0);
        tracep->declBit(c+198,"top cpu_inst mem_wb_inst clock", false,-1);
        tracep->declBit(c+72,"top cpu_inst mem_wb_inst pause", false,-1);
        tracep->declBit(c+76,"top cpu_inst mem_wb_inst bubble", false,-1);
        tracep->declBus(c+19,"top cpu_inst mem_wb_inst rd_in", false,-1, 4,0);
        tracep->declBus(c+196,"top cpu_inst mem_wb_inst alu_in", false,-1, 31,0);
        tracep->declBus(c+20,"top cpu_inst mem_wb_inst rd_out", false,-1, 4,0);
        tracep->declBus(c+30,"top cpu_inst mem_wb_inst alu_out", false,-1, 31,0);
        tracep->declBus(c+20,"top cpu_inst mem_wb_inst genblk1 rd_reg", false,-1, 4,0);
        tracep->declBus(c+30,"top cpu_inst mem_wb_inst genblk1 alu_reg", false,-1, 31,0);
        tracep->declBus(c+204,"top cpu_inst gpr_inst XLEN", false,-1, 31,0);
        tracep->declBus(c+204,"top cpu_inst gpr_inst NUM", false,-1, 31,0);
        tracep->declBit(c+198,"top cpu_inst gpr_inst clock", false,-1);
        tracep->declBus(c+20,"top cpu_inst gpr_inst addr_w", false,-1, 4,0);
        tracep->declBus(c+21,"top cpu_inst gpr_inst addr_r1", false,-1, 4,0);
        tracep->declBus(c+22,"top cpu_inst gpr_inst addr_r2", false,-1, 4,0);
        tracep->declBus(c+30,"top cpu_inst gpr_inst data_w", false,-1, 31,0);
        tracep->declBus(c+194,"top cpu_inst gpr_inst data_r1", false,-1, 31,0);
        tracep->declBus(c+195,"top cpu_inst gpr_inst data_r2", false,-1, 31,0);
        tracep->declBus(c+204,"top cpu_inst gpr_inst mem_inst WIDTH", false,-1, 31,0);
        tracep->declBus(c+204,"top cpu_inst gpr_inst mem_inst DEPTH", false,-1, 31,0);
        tracep->declBus(c+208,"top cpu_inst gpr_inst mem_inst BURST", false,-1, 31,0);
        tracep->declBus(c+218,"top cpu_inst gpr_inst mem_inst DATAFILE", false,-1, 0,0);
        tracep->declBus(c+219,"top cpu_inst gpr_inst mem_inst READ_OLD", false,-1, 31,0);
        tracep->declBit(c+198,"top cpu_inst gpr_inst mem_inst clock", false,-1);
        tracep->declBit(c+133,"top cpu_inst gpr_inst mem_inst write_ena", false,-1);
        tracep->declBus(c+20,"top cpu_inst gpr_inst mem_inst addr_w", false,-1, 4,0);
        tracep->declBus(c+21,"top cpu_inst gpr_inst mem_inst addr_r1", false,-1, 4,0);
        tracep->declBus(c+22,"top cpu_inst gpr_inst mem_inst addr_r2", false,-1, 4,0);
        tracep->declBus(c+30,"top cpu_inst gpr_inst mem_inst data_i", false,-1, 31,0);
        tracep->declBus(c+194,"top cpu_inst gpr_inst mem_inst data_o1", false,-1, 31,0);
        tracep->declBus(c+195,"top cpu_inst gpr_inst mem_inst data_o2", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+159+i*1,"top cpu_inst gpr_inst mem_inst words", true,(i+0), 31,0);}}
        tracep->declBus(c+202,"top cpu_inst gpr_inst mem_inst old_data1", false,-1, 31,0);
        tracep->declBus(c+203,"top cpu_inst gpr_inst mem_inst old_data2", false,-1, 31,0);
        tracep->declBus(c+1,"top cpu_inst gpr_inst mem_inst genblk1 unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+204,"top cpu_inst genblk1 rvc_inst XLEN", false,-1, 31,0);
        tracep->declBit(c+198,"top cpu_inst genblk1 rvc_inst clock", false,-1);
        tracep->declBus(c+13,"top cpu_inst genblk1 rvc_inst pc", false,-1, 31,0);
        tracep->declBus(c+134,"top cpu_inst genblk1 rvc_inst inst_in", false,-1, 15,0);
        tracep->declBus(c+93,"top cpu_inst genblk1 rvc_inst inst_out", false,-1, 31,0);
        tracep->declBus(c+135,"top cpu_inst genblk1 rvc_inst imm", false,-1, 31,0);
        tracep->declBus(c+136,"top cpu_inst genblk1 rvc_inst rs1", false,-1, 4,0);
        tracep->declBus(c+137,"top cpu_inst genblk1 rvc_inst rs2", false,-1, 4,0);
        tracep->declBus(c+138,"top cpu_inst genblk1 rvc_inst rd", false,-1, 4,0);
        tracep->declBus(c+220,"top cpu_inst genblk1 rvc_inst x0", false,-1, 4,0);
        tracep->declBus(c+221,"top cpu_inst genblk1 rvc_inst x1", false,-1, 4,0);
        tracep->declBus(c+222,"top cpu_inst genblk1 rvc_inst x2", false,-1, 4,0);
        tracep->declBus(c+204,"top cpu_inst genblk1 rvc_inst rvc_decode_inst XLEN", false,-1, 31,0);
        tracep->declBus(c+134,"top cpu_inst genblk1 rvc_inst rvc_decode_inst inst", false,-1, 15,0);
        tracep->declBus(c+136,"top cpu_inst genblk1 rvc_inst rvc_decode_inst rs1", false,-1, 4,0);
        tracep->declBus(c+137,"top cpu_inst genblk1 rvc_inst rvc_decode_inst rs2", false,-1, 4,0);
        tracep->declBus(c+138,"top cpu_inst genblk1 rvc_inst rvc_decode_inst rd", false,-1, 4,0);
        tracep->declBus(c+135,"top cpu_inst genblk1 rvc_inst rvc_decode_inst imm", false,-1, 31,0);
        tracep->declBus(c+139,"top cpu_inst genblk1 rvc_inst rvc_decode_inst itype", false,-1, 3,0);
        tracep->declBus(c+204,"top cpu_inst genblk1 rvc_inst rvc_decode_inst rvc_inst_type_inst XLEN", false,-1, 31,0);
        tracep->declBus(c+134,"top cpu_inst genblk1 rvc_inst rvc_decode_inst rvc_inst_type_inst inst", false,-1, 15,0);
        tracep->declBus(c+139,"top cpu_inst genblk1 rvc_inst rvc_decode_inst rvc_inst_type_inst itype", false,-1, 3,0);
        tracep->declBus(c+204,"top cpu_inst genblk1 rvc_inst rvc_decode_inst rvc_imm_gen_inst XLEN", false,-1, 31,0);
        tracep->declBus(c+134,"top cpu_inst genblk1 rvc_inst rvc_decode_inst rvc_imm_gen_inst inst", false,-1, 15,0);
        tracep->declBus(c+135,"top cpu_inst genblk1 rvc_inst rvc_decode_inst rvc_imm_gen_inst imm", false,-1, 31,0);
        tracep->declBus(c+140,"top cpu_inst genblk1 rvc_inst rvc_decode_inst rvc_imm_gen_inst uimm0_q", false,-1, 31,0);
        tracep->declBus(c+141,"top cpu_inst genblk1 rvc_inst rvc_decode_inst rvc_imm_gen_inst uimm0_d", false,-1, 31,0);
        tracep->declBus(c+142,"top cpu_inst genblk1 rvc_inst rvc_decode_inst rvc_imm_gen_inst uimm0_w", false,-1, 31,0);
        tracep->declBus(c+141,"top cpu_inst genblk1 rvc_inst rvc_decode_inst rvc_imm_gen_inst uimm0_qd", false,-1, 31,0);
        tracep->declBus(c+142,"top cpu_inst genblk1 rvc_inst rvc_decode_inst rvc_imm_gen_inst uimm0_dw", false,-1, 31,0);
        tracep->declBus(c+143,"top cpu_inst genblk1 rvc_inst rvc_decode_inst rvc_imm_gen_inst imm1", false,-1, 31,0);
        tracep->declBus(c+144,"top cpu_inst genblk1 rvc_inst rvc_decode_inst rvc_imm_gen_inst imm1_sp", false,-1, 31,0);
        tracep->declBus(c+145,"top cpu_inst genblk1 rvc_inst rvc_decode_inst rvc_imm_gen_inst imm1_lui", false,-1, 31,0);
        tracep->declBus(c+146,"top cpu_inst genblk1 rvc_inst rvc_decode_inst rvc_imm_gen_inst imm1_b", false,-1, 31,0);
        tracep->declBus(c+147,"top cpu_inst genblk1 rvc_inst rvc_decode_inst rvc_imm_gen_inst imm1_j", false,-1, 31,0);
        tracep->declBus(c+148,"top cpu_inst genblk1 rvc_inst rvc_decode_inst rvc_imm_gen_inst uimm2_lq", false,-1, 31,0);
        tracep->declBus(c+149,"top cpu_inst genblk1 rvc_inst rvc_decode_inst rvc_imm_gen_inst uimm2_ld", false,-1, 31,0);
        tracep->declBus(c+150,"top cpu_inst genblk1 rvc_inst rvc_decode_inst rvc_imm_gen_inst uimm2_lw", false,-1, 31,0);
        tracep->declBus(c+151,"top cpu_inst genblk1 rvc_inst rvc_decode_inst rvc_imm_gen_inst uimm2_sq", false,-1, 31,0);
        tracep->declBus(c+152,"top cpu_inst genblk1 rvc_inst rvc_decode_inst rvc_imm_gen_inst uimm2_sd", false,-1, 31,0);
        tracep->declBus(c+153,"top cpu_inst genblk1 rvc_inst rvc_decode_inst rvc_imm_gen_inst uimm2_sw", false,-1, 31,0);
        tracep->declBus(c+149,"top cpu_inst genblk1 rvc_inst rvc_decode_inst rvc_imm_gen_inst uimm2_lqd", false,-1, 31,0);
        tracep->declBus(c+152,"top cpu_inst genblk1 rvc_inst rvc_decode_inst rvc_imm_gen_inst uimm2_sqd", false,-1, 31,0);
        tracep->declBus(c+150,"top cpu_inst genblk1 rvc_inst rvc_decode_inst rvc_imm_gen_inst uimm2_ldw", false,-1, 31,0);
        tracep->declBus(c+153,"top cpu_inst genblk1 rvc_inst rvc_decode_inst rvc_imm_gen_inst uimm2_sdw", false,-1, 31,0);
        tracep->declBus(c+204,"top cpu_inst genblk2 mul_inst XLEN", false,-1, 31,0);
        tracep->declBus(c+32,"top cpu_inst genblk2 mul_inst opcode", false,-1, 4,0);
        tracep->declBus(c+84,"top cpu_inst genblk2 mul_inst rs1", false,-1, 31,0);
        tracep->declBus(c+85,"top cpu_inst genblk2 mul_inst rs2", false,-1, 31,0);
        tracep->declBus(c+89,"top cpu_inst genblk2 mul_inst rd", false,-1, 31,0);
        tracep->declBus(c+154,"top cpu_inst genblk2 mul_inst xrd", false,-1, 31,0);
        tracep->declBus(c+223,"top mem_inst WIDTH", false,-1, 31,0);
        tracep->declBus(c+224,"top mem_inst DEPTH", false,-1, 31,0);
        tracep->declBus(c+225,"top mem_inst BURST", false,-1, 31,0);
        tracep->declBus(c+218,"top mem_inst DATAFILE", false,-1, 0,0);
        tracep->declBit(c+198,"top mem_inst clock", false,-1);
        tracep->declBit(c+4,"top mem_inst write_en", false,-1);
        tracep->declBus(c+155,"top mem_inst iaddr", false,-1, 19,0);
        tracep->declBus(c+156,"top mem_inst daddr", false,-1, 19,0);
        tracep->declBus(c+157,"top mem_inst data_i", false,-1, 31,0);
        tracep->declBus(c+192,"top mem_inst data_o", false,-1, 31,0);
        tracep->declBus(c+193,"top mem_inst inst_o", false,-1, 31,0);
        tracep->declBus(c+223,"top mem_inst mem_inst WIDTH", false,-1, 31,0);
        tracep->declBus(c+224,"top mem_inst mem_inst DEPTH", false,-1, 31,0);
        tracep->declBus(c+225,"top mem_inst mem_inst BURST", false,-1, 31,0);
        tracep->declBus(c+218,"top mem_inst mem_inst DATAFILE", false,-1, 0,0);
        tracep->declBus(c+208,"top mem_inst mem_inst READ_OLD", false,-1, 31,0);
        tracep->declBit(c+198,"top mem_inst mem_inst clock", false,-1);
        tracep->declBit(c+4,"top mem_inst mem_inst write_ena", false,-1);
        tracep->declBus(c+156,"top mem_inst mem_inst addr_w", false,-1, 19,0);
        tracep->declBus(c+156,"top mem_inst mem_inst addr_r1", false,-1, 19,0);
        tracep->declBus(c+155,"top mem_inst mem_inst addr_r2", false,-1, 19,0);
        tracep->declBus(c+157,"top mem_inst mem_inst data_i", false,-1, 31,0);
        tracep->declBus(c+192,"top mem_inst mem_inst data_o1", false,-1, 31,0);
        tracep->declBus(c+193,"top mem_inst mem_inst data_o2", false,-1, 31,0);
        tracep->declBus(c+192,"top mem_inst mem_inst old_data1", false,-1, 31,0);
        tracep->declBus(c+193,"top mem_inst mem_inst old_data2", false,-1, 31,0);
        tracep->declBus(c+2,"top mem_inst mem_inst genblk1 unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+191,"top mem_inst mem_inst genblk2 i", false,-1, 31,0);
        tracep->declBus(c+226,"$unit USTATUS", false,-1, 11,0);
        tracep->declBus(c+227,"$unit UIE", false,-1, 11,0);
        tracep->declBus(c+228,"$unit UTVEC", false,-1, 11,0);
        tracep->declBus(c+229,"$unit USCRATCH", false,-1, 11,0);
        tracep->declBus(c+230,"$unit UEPC", false,-1, 11,0);
        tracep->declBus(c+231,"$unit UCAUSE", false,-1, 11,0);
        tracep->declBus(c+232,"$unit UTVAL", false,-1, 11,0);
        tracep->declBus(c+233,"$unit UIP", false,-1, 11,0);
        tracep->declBus(c+234,"$unit FFLAGS", false,-1, 11,0);
        tracep->declBus(c+235,"$unit FRM", false,-1, 11,0);
        tracep->declBus(c+236,"$unit FCSR", false,-1, 11,0);
        tracep->declBus(c+237,"$unit CYCLE", false,-1, 11,0);
        tracep->declBus(c+238,"$unit TIME", false,-1, 11,0);
        tracep->declBus(c+239,"$unit INSTRET", false,-1, 11,0);
        tracep->declBus(c+237,"$unit HPMCOUNTER", false,-1, 11,0);
        tracep->declBus(c+240,"$unit CYCLEH", false,-1, 11,0);
        tracep->declBus(c+241,"$unit TIMEH", false,-1, 11,0);
        tracep->declBus(c+242,"$unit INSTRETH", false,-1, 11,0);
        tracep->declBus(c+240,"$unit HPMCOUNTERH", false,-1, 11,0);
        tracep->declBus(c+243,"$unit SSTATUS", false,-1, 11,0);
        tracep->declBus(c+244,"$unit SEDELGE", false,-1, 11,0);
        tracep->declBus(c+245,"$unit SIDELGE", false,-1, 11,0);
        tracep->declBus(c+246,"$unit SIE", false,-1, 11,0);
        tracep->declBus(c+247,"$unit STVEC", false,-1, 11,0);
        tracep->declBus(c+248,"$unit SCOUNTEREN", false,-1, 11,0);
        tracep->declBus(c+249,"$unit SSCRATCH", false,-1, 11,0);
        tracep->declBus(c+250,"$unit SEPC", false,-1, 11,0);
        tracep->declBus(c+251,"$unit SCAUSE", false,-1, 11,0);
        tracep->declBus(c+252,"$unit STVAL", false,-1, 11,0);
        tracep->declBus(c+253,"$unit SIP", false,-1, 11,0);
        tracep->declBus(c+254,"$unit SATP", false,-1, 11,0);
        tracep->declBus(c+255,"$unit SCONTEXT", false,-1, 11,0);
        tracep->declBus(c+256,"$unit HSTATUS", false,-1, 11,0);
        tracep->declBus(c+257,"$unit HEDELEG", false,-1, 11,0);
        tracep->declBus(c+258,"$unit HIDELEG", false,-1, 11,0);
        tracep->declBus(c+259,"$unit HIE", false,-1, 11,0);
        tracep->declBus(c+260,"$unit HCOUNTEREN", false,-1, 11,0);
        tracep->declBus(c+261,"$unit HGEIE", false,-1, 11,0);
        tracep->declBus(c+262,"$unit HTVAL", false,-1, 11,0);
        tracep->declBus(c+263,"$unit HIP", false,-1, 11,0);
        tracep->declBus(c+264,"$unit HVIP", false,-1, 11,0);
        tracep->declBus(c+265,"$unit HTINST", false,-1, 11,0);
        tracep->declBus(c+266,"$unit HGEIP", false,-1, 11,0);
        tracep->declBus(c+267,"$unit HGATP", false,-1, 11,0);
        tracep->declBus(c+268,"$unit HCONTEXT", false,-1, 11,0);
        tracep->declBus(c+269,"$unit HTIMEDELTA", false,-1, 11,0);
        tracep->declBus(c+270,"$unit HTIMEDELTAH", false,-1, 11,0);
        tracep->declBus(c+271,"$unit VSSTATUS", false,-1, 11,0);
        tracep->declBus(c+272,"$unit VSIE", false,-1, 11,0);
        tracep->declBus(c+273,"$unit VSTVEC", false,-1, 11,0);
        tracep->declBus(c+274,"$unit VSSCRACTCH", false,-1, 11,0);
        tracep->declBus(c+275,"$unit VSEPC", false,-1, 11,0);
        tracep->declBus(c+276,"$unit VSCAUSE", false,-1, 11,0);
        tracep->declBus(c+277,"$unit VSTVAL", false,-1, 11,0);
        tracep->declBus(c+278,"$unit VSIP", false,-1, 11,0);
        tracep->declBus(c+279,"$unit VSATP", false,-1, 11,0);
        tracep->declBus(c+280,"$unit MVENDORID", false,-1, 11,0);
        tracep->declBus(c+281,"$unit MARCHID", false,-1, 11,0);
        tracep->declBus(c+282,"$unit MIMPID", false,-1, 11,0);
        tracep->declBus(c+283,"$unit MHARTID", false,-1, 11,0);
        tracep->declBus(c+284,"$unit MSTATUS", false,-1, 11,0);
        tracep->declBus(c+285,"$unit MISA", false,-1, 11,0);
        tracep->declBus(c+286,"$unit MEDELEG", false,-1, 11,0);
        tracep->declBus(c+287,"$unit MIDELEG", false,-1, 11,0);
        tracep->declBus(c+288,"$unit MIE", false,-1, 11,0);
        tracep->declBus(c+289,"$unit MTVEC", false,-1, 11,0);
        tracep->declBus(c+290,"$unit MCOUNTEREN", false,-1, 11,0);
        tracep->declBus(c+291,"$unit MSTATUSH", false,-1, 11,0);
        tracep->declBus(c+292,"$unit MSCRATCH", false,-1, 11,0);
        tracep->declBus(c+293,"$unit MEPC", false,-1, 11,0);
        tracep->declBus(c+294,"$unit MCAUSE", false,-1, 11,0);
        tracep->declBus(c+295,"$unit MTVAL", false,-1, 11,0);
        tracep->declBus(c+296,"$unit MIP", false,-1, 11,0);
        tracep->declBus(c+297,"$unit MTINST", false,-1, 11,0);
        tracep->declBus(c+298,"$unit MTVAL2", false,-1, 11,0);
        tracep->declBus(c+299,"$unit PMPCFG", false,-1, 11,0);
        tracep->declBus(c+300,"$unit PMPCFGH", false,-1, 11,0);
        tracep->declBus(c+301,"$unit PMPADDR0", false,-1, 11,0);
        tracep->declBus(c+302,"$unit PMPADDR63", false,-1, 11,0);
        tracep->declBus(c+303,"$unit MCYCLE", false,-1, 11,0);
        tracep->declBus(c+304,"$unit MINSTRET", false,-1, 11,0);
        tracep->declBus(c+303,"$unit MHPMCOUNTER", false,-1, 11,0);
        tracep->declBus(c+305,"$unit MCYCLEH", false,-1, 11,0);
        tracep->declBus(c+306,"$unit MINSTRETH", false,-1, 11,0);
        tracep->declBus(c+305,"$unit MHPMCOUNTERH", false,-1, 11,0);
        tracep->declBus(c+307,"$unit MCOUNTINHIBIT", false,-1, 11,0);
        tracep->declBus(c+307,"$unit MHPMEVENT", false,-1, 11,0);
        tracep->declBus(c+308,"$unit TSELECT", false,-1, 11,0);
        tracep->declBus(c+309,"$unit TDATA1", false,-1, 11,0);
        tracep->declBus(c+310,"$unit TDATA2", false,-1, 11,0);
        tracep->declBus(c+311,"$unit TDATA3", false,-1, 11,0);
        tracep->declBus(c+312,"$unit MCONTEXT", false,-1, 11,0);
        tracep->declBus(c+313,"$unit DCSR", false,-1, 11,0);
        tracep->declBus(c+314,"$unit DPC", false,-1, 11,0);
        tracep->declBus(c+315,"$unit DSCRATCH0", false,-1, 11,0);
        tracep->declBus(c+316,"$unit DSCRATCH1", false,-1, 11,0);
        tracep->declBus(c+317,"$unit READONLY", false,-1, 1,0);
        tracep->declBus(c+318,"$unit USER", false,-1, 1,0);
        tracep->declBus(c+319,"$unit SUPERVISOR", false,-1, 1,0);
        tracep->declBus(c+320,"$unit HYPERVISOR", false,-1, 1,0);
        tracep->declBus(c+317,"$unit MACHINE", false,-1, 1,0);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__genblk1__DOT__unnamedblk1__DOT__i),32);
        tracep->fullIData(oldp+2,(vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__genblk1__DOT__unnamedblk1__DOT__i),32);
        tracep->fullBit(oldp+3,((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__ctrl_reg) 
                                       >> 4U))));
        tracep->fullBit(oldp+4,((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__ctrl_reg) 
                                       >> 5U))));
        tracep->fullIData(oldp+5,(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__alu_reg),32);
        tracep->fullIData(oldp+6,(vlSelf->top__DOT__pc),32);
        tracep->fullIData(oldp+7,(vlSelf->top__DOT__sig_begin),32);
        tracep->fullIData(oldp+8,(vlSelf->top__DOT__sig_end),32);
        tracep->fullCData(oldp+9,(vlSelf->top__DOT__cpu_inst__DOT__ins_type),3);
        tracep->fullCData(oldp+10,((7U & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+11,((vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                    >> 0x19U)),7);
        tracep->fullCData(oldp+12,((0x7fU & vlSelf->top__DOT__cpu_inst__DOT__id_inst)),7);
        tracep->fullIData(oldp+13,(vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__pc_reg),32);
        tracep->fullIData(oldp+14,(vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__pc_reg),32);
        tracep->fullIData(oldp+15,(vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg),32);
        tracep->fullIData(oldp+16,(vlSelf->top__DOT__cpu_inst__DOT__id_inst),32);
        tracep->fullCData(oldp+17,(vlSelf->top__DOT__cpu_inst__DOT__rd),5);
        tracep->fullCData(oldp+18,(vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__rd_reg),5);
        tracep->fullCData(oldp+19,(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__rd_reg),5);
        tracep->fullCData(oldp+20,(vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst__DOT__genblk1__DOT__rd_reg),5);
        tracep->fullCData(oldp+21,(vlSelf->top__DOT__cpu_inst__DOT__rs1),5);
        tracep->fullCData(oldp+22,(vlSelf->top__DOT__cpu_inst__DOT__rs2),5);
        tracep->fullIData(oldp+23,(vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__rs1_reg),32);
        tracep->fullIData(oldp+24,(vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__rs2_reg),32);
        tracep->fullIData(oldp+25,(vlSelf->top__DOT__cpu_inst__DOT__id_imm),32);
        tracep->fullIData(oldp+26,(vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg),32);
        tracep->fullCData(oldp+27,(vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__rs1_fwd_reg),5);
        tracep->fullCData(oldp+28,(vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__rs2_fwd_reg),5);
        tracep->fullIData(oldp+29,(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__rs2_reg),32);
        tracep->fullIData(oldp+30,(vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst__DOT__genblk1__DOT__alu_reg),32);
        tracep->fullCData(oldp+31,(vlSelf->top__DOT__cpu_inst__DOT__id_alu_op),5);
        tracep->fullCData(oldp+32,((0x1fU & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                             >> 0x15U))),5);
        tracep->fullBit(oldp+33,(vlSelf->top__DOT__cpu_inst__DOT__s_pc));
        tracep->fullBit(oldp+34,((1U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                        >> 0x14U))));
        tracep->fullBit(oldp+35,((1U & (~ ((((0x33U 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__cpu_inst__DOT__id_inst)) 
                                             | (0x3bU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__cpu_inst__DOT__id_inst))) 
                                            | (0x63U 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__cpu_inst__DOT__id_inst))) 
                                           | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_csr))))));
        tracep->fullBit(oldp+36,((1U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                        >> 0x13U))));
        tracep->fullBit(oldp+37,(((0x3bU == (0x7fU 
                                             & vlSelf->top__DOT__cpu_inst__DOT__id_inst)) 
                                  | (0x1bU == (0x7fU 
                                               & vlSelf->top__DOT__cpu_inst__DOT__id_inst)))));
        tracep->fullBit(oldp+38,((1U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                        >> 0x12U))));
        tracep->fullBit(oldp+39,(vlSelf->top__DOT__cpu_inst__DOT__s_jalr));
        tracep->fullBit(oldp+40,(((0x6fU == (0x7fU 
                                             & vlSelf->top__DOT__cpu_inst__DOT__id_inst)) 
                                  | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_jalr))));
        tracep->fullBit(oldp+41,(((0x63U == (0x7fU 
                                             & vlSelf->top__DOT__cpu_inst__DOT__id_inst)) 
                                  & ((((((0U == (7U 
                                                 & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                    >> 0xcU))) 
                                         | (1U == (7U 
                                                   & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                      >> 0xcU)))) 
                                        | (4U == (7U 
                                                  & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                     >> 0xcU)))) 
                                       | (5U == (7U 
                                                 & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                    >> 0xcU)))) 
                                      | (6U == (7U 
                                                & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                   >> 0xcU)))) 
                                     | (7U == (7U & 
                                               (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                >> 0xcU)))))));
        tracep->fullBit(oldp+42,(((0x63U == (0x7fU 
                                             & vlSelf->top__DOT__cpu_inst__DOT__id_inst)) 
                                  & (((0U == (7U & 
                                              (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                               >> 0xcU))) 
                                      | (5U == (7U 
                                                & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                   >> 0xcU)))) 
                                     | (7U == (7U & 
                                               (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                >> 0xcU)))))));
        tracep->fullBit(oldp+43,((1U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                        >> 0x11U))));
        tracep->fullBit(oldp+44,((1U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                        >> 0xbU))));
        tracep->fullBit(oldp+45,((1U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                        >> 0x10U))));
        tracep->fullBit(oldp+46,((1U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                        >> 0xfU))));
        tracep->fullBit(oldp+47,((3U != (3U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg))));
        tracep->fullBit(oldp+48,((1U & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)));
        tracep->fullBit(oldp+49,(vlSelf->top__DOT__cpu_inst__DOT__s_csr));
        tracep->fullBit(oldp+50,(((IData)(vlSelf->top__DOT__cpu_inst__DOT__s_csr) 
                                  & (((1U == (7U & 
                                              (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                               >> 0xcU))) 
                                      | (5U == (7U 
                                                & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                   >> 0xcU)))) 
                                     | (0U != (IData)(vlSelf->top__DOT__cpu_inst__DOT__rs1))))));
        tracep->fullBit(oldp+51,(((0x73U == (0x7fU 
                                             & vlSelf->top__DOT__cpu_inst__DOT__id_inst)) 
                                  & (((5U == (7U & 
                                              (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                               >> 0xcU))) 
                                      | (6U == (7U 
                                                & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                   >> 0xcU)))) 
                                     | (7U == (7U & 
                                               (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                >> 0xcU)))))));
        tracep->fullBit(oldp+52,((1U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                        >> 0xeU))));
        tracep->fullBit(oldp+53,((1U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                        >> 0xcU))));
        tracep->fullBit(oldp+54,((1U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                        >> 0xdU))));
        tracep->fullBit(oldp+55,((0x73U == vlSelf->top__DOT__cpu_inst__DOT__id_inst)));
        tracep->fullBit(oldp+56,((0x100073U == vlSelf->top__DOT__cpu_inst__DOT__id_inst)));
        tracep->fullBit(oldp+57,((0x30200073U == vlSelf->top__DOT__cpu_inst__DOT__id_inst)));
        tracep->fullBit(oldp+58,((((((((0U == (IData)(vlSelf->top__DOT__cpu_inst__DOT__id_alu_op)) 
                                       & (~ (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_flush))) 
                                      & (0x73U != vlSelf->top__DOT__cpu_inst__DOT__id_inst)) 
                                     & (0x100073U != vlSelf->top__DOT__cpu_inst__DOT__id_inst)) 
                                    & (0x8330000fU 
                                       != vlSelf->top__DOT__cpu_inst__DOT__id_inst)) 
                                   & (~ ((IData)((0xfU 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__cpu_inst__DOT__id_inst))) 
                                         & (0U == (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                   >> 0x1cU))))) 
                                  & (0x30200073U != vlSelf->top__DOT__cpu_inst__DOT__id_inst))));
        tracep->fullBit(oldp+59,((1U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                        >> 7U))));
        tracep->fullBit(oldp+60,((1U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                        >> 6U))));
        tracep->fullBit(oldp+61,((1U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                        >> 5U))));
        tracep->fullBit(oldp+62,((1U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                        >> 4U))));
        tracep->fullBit(oldp+63,(vlSelf->top__DOT__cpu_inst__DOT__s_store));
        tracep->fullBit(oldp+64,((1U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                        >> 0xaU))));
        tracep->fullBit(oldp+65,(vlSelf->top__DOT__cpu_inst__DOT__s_load));
        tracep->fullBit(oldp+66,((1U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                        >> 9U))));
        tracep->fullCData(oldp+67,((7U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                          >> 1U))),3);
        tracep->fullCData(oldp+68,((7U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__ctrl_reg))),3);
        tracep->fullBit(oldp+69,((1U & (((IData)(vlSelf->top__DOT__cpu_inst__DOT__hazard_inst__DOT__load_hazard)
                                          ? 8U : 0U) 
                                        >> 3U))));
        tracep->fullBit(oldp+70,((1U & (((IData)(vlSelf->top__DOT__cpu_inst__DOT__hazard_inst__DOT__load_hazard)
                                          ? 8U : 0U) 
                                        >> 2U))));
        tracep->fullBit(oldp+71,((1U & (((IData)(vlSelf->top__DOT__cpu_inst__DOT__hazard_inst__DOT__load_hazard)
                                          ? 8U : 0U) 
                                        >> 1U))));
        tracep->fullBit(oldp+72,(0U));
        tracep->fullBit(oldp+73,((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT____Vcellout__hazard_inst__bubble) 
                                        >> 3U))));
        tracep->fullBit(oldp+74,((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT____Vcellout__hazard_inst__bubble) 
                                        >> 2U))));
        tracep->fullBit(oldp+75,((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT____Vcellout__hazard_inst__bubble) 
                                        >> 1U))));
        tracep->fullBit(oldp+76,((1U & (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vcellout__hazard_inst__bubble))));
        tracep->fullBit(oldp+77,(vlSelf->top__DOT__cpu_inst__DOT__s_flush));
        tracep->fullBit(oldp+78,((1U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                        >> 8U))));
        tracep->fullBit(oldp+79,((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__ctrl_reg) 
                                        >> 3U))));
        tracep->fullBit(oldp+80,((1U & ((((IData)(vlSelf->top__DOT__cpu_inst__DOT__hazard_inst__DOT__load_hazard) 
                                          | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_flush)) 
                                         | (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                            >> 8U)) 
                                        | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__ctrl_reg) 
                                           >> 3U)))));
        tracep->fullBit(oldp+81,(vlSelf->top__DOT__cpu_inst__DOT__s_exception));
        tracep->fullIData(oldp+82,((IData)((0x1ffffffffULL 
                                            & ((0x20U 
                                                & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                                ? (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mepc))
                                                : (
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mtvec)) 
                                                    & (vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mcause 
                                                       >> 0x1fU))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0xfffffffcU 
                                                                     & vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mtvec))) 
                                                    + 
                                                    ((QData)((IData)(
                                                                     (0x7fffffffU 
                                                                      & vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mcause))) 
                                                     << 2U))
                                                    : (QData)((IData)(
                                                                      (0xfffffffcU 
                                                                       & vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mtvec)))))))),32);
        tracep->fullBit(oldp+83,(vlSelf->top__DOT__cpu_inst__DOT__branch_take));
        tracep->fullIData(oldp+84,(vlSelf->top__DOT__cpu_inst__DOT__fwd_rs1),32);
        tracep->fullIData(oldp+85,(vlSelf->top__DOT__cpu_inst__DOT__fwd_rs2),32);
        tracep->fullBit(oldp+86,((0U == vlSelf->top__DOT__cpu_inst__DOT__alu_o)));
        tracep->fullIData(oldp+87,(vlSelf->top__DOT__cpu_inst__DOT__alu_o),32);
        tracep->fullIData(oldp+88,(vlSelf->top__DOT__cpu_inst__DOT__csr_o),32);
        tracep->fullIData(oldp+89,(((0x2000000U & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                     ? ((0x1000000U 
                                         & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                         ? 0U : ((0x800000U 
                                                  & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                                  ? 0U
                                                  : 
                                                 ((0x400000U 
                                                   & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                                   ? 
                                                  ((0x200000U 
                                                    & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                                    ? (IData)(
                                                              (((QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__fwd_rs1)) 
                                                                * (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__fwd_rs2))) 
                                                               >> 0x20U))
                                                    : (IData)(
                                                              (VL_MULS_QQQ(64,64,64, 
                                                                           VL_EXTENDS_QI(64,32, vlSelf->top__DOT__cpu_inst__DOT__fwd_rs1), 
                                                                           VL_EXTENDS_QQ(64,33, (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__fwd_rs2)))) 
                                                               >> 0x20U)))
                                                   : 
                                                  ((0x200000U 
                                                    & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                                    ? (IData)(
                                                              (VL_MULS_QQQ(64,64,64, 
                                                                           VL_EXTENDS_QI(64,32, vlSelf->top__DOT__cpu_inst__DOT__fwd_rs1), 
                                                                           VL_EXTENDS_QI(64,32, vlSelf->top__DOT__cpu_inst__DOT__fwd_rs2)) 
                                                               >> 0x20U))
                                                    : (IData)(
                                                              VL_MULS_QQQ(64,64,64, 
                                                                          VL_EXTENDS_QI(64,32, vlSelf->top__DOT__cpu_inst__DOT__fwd_rs1), 
                                                                          VL_EXTENDS_QI(64,32, vlSelf->top__DOT__cpu_inst__DOT__fwd_rs2)))))))
                                     : 0U)),32);
        tracep->fullIData(oldp+90,(((0x2000000U & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                     ? ((0x1000000U 
                                         & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                         ? 0U : ((0x800000U 
                                                  & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                                  ? 
                                                 ((0x400000U 
                                                   & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                                   ? 
                                                  ((0x200000U 
                                                    & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                                    ? 
                                                   ((0U 
                                                     == vlSelf->top__DOT__cpu_inst__DOT__fwd_rs2)
                                                     ? vlSelf->top__DOT__cpu_inst__DOT__fwd_rs1
                                                     : 
                                                    VL_MODDIV_III(32, vlSelf->top__DOT__cpu_inst__DOT__fwd_rs1, vlSelf->top__DOT__cpu_inst__DOT__fwd_rs2))
                                                    : 
                                                   ((0U 
                                                     == vlSelf->top__DOT__cpu_inst__DOT__fwd_rs2)
                                                     ? vlSelf->top__DOT__cpu_inst__DOT__fwd_rs1
                                                     : 
                                                    (((0x80000001U 
                                                       == vlSelf->top__DOT__cpu_inst__DOT__fwd_rs1) 
                                                      & (0U 
                                                         == vlSelf->top__DOT__cpu_inst__DOT__fwd_rs2))
                                                      ? 0U
                                                      : 
                                                     VL_MODDIVS_III(32, vlSelf->top__DOT__cpu_inst__DOT__fwd_rs1, vlSelf->top__DOT__cpu_inst__DOT__fwd_rs2))))
                                                   : 
                                                  ((0x200000U 
                                                    & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                                    ? 
                                                   ((0U 
                                                     == vlSelf->top__DOT__cpu_inst__DOT__fwd_rs2)
                                                     ? 0xffffffffU
                                                     : 
                                                    VL_DIV_III(32, vlSelf->top__DOT__cpu_inst__DOT__fwd_rs1, vlSelf->top__DOT__cpu_inst__DOT__fwd_rs2))
                                                    : 
                                                   ((0U 
                                                     == vlSelf->top__DOT__cpu_inst__DOT__fwd_rs2)
                                                     ? 0xffffffffU
                                                     : 
                                                    (((0x80000001U 
                                                       == vlSelf->top__DOT__cpu_inst__DOT__fwd_rs1) 
                                                      & (0xffffffffU 
                                                         == vlSelf->top__DOT__cpu_inst__DOT__fwd_rs2))
                                                      ? vlSelf->top__DOT__cpu_inst__DOT__fwd_rs1
                                                      : 
                                                     VL_DIVS_III(32, vlSelf->top__DOT__cpu_inst__DOT__fwd_rs1, vlSelf->top__DOT__cpu_inst__DOT__fwd_rs2)))))
                                                  : 0U))
                                     : 0U)),32);
        tracep->fullIData(oldp+91,(vlSelf->top__DOT__cpu_inst__DOT__ex_alu),32);
        tracep->fullIData(oldp+92,(vlSelf->top__DOT__cpu_inst__DOT__alu_mux),32);
        tracep->fullIData(oldp+93,(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__c_inst),32);
        tracep->fullBit(oldp+94,((1U & (((vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                          >> 5U) | (IData)(vlSelf->top__DOT__cpu_inst__DOT__branch_take)) 
                                        | (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                           >> 0xbU)))));
        tracep->fullCData(oldp+95,(((IData)(vlSelf->top__DOT__cpu_inst__DOT__hazard_inst__DOT__load_hazard)
                                     ? 8U : 0U)),4);
        tracep->fullCData(oldp+96,(vlSelf->top__DOT__cpu_inst__DOT____Vcellout__hazard_inst__bubble),4);
        tracep->fullBit(oldp+97,(vlSelf->top__DOT__cpu_inst__DOT__hazard_inst__DOT__load_hazard));
        tracep->fullBit(oldp+98,((0x8330000fU == vlSelf->top__DOT__cpu_inst__DOT__id_inst)));
        tracep->fullBit(oldp+99,(((IData)((0xfU == 
                                           (0x707fU 
                                            & vlSelf->top__DOT__cpu_inst__DOT__id_inst))) 
                                  & (0U == (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                            >> 0x1cU)))));
        tracep->fullIData(oldp+100,(vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__id_ex_inst__ctrl_in),26);
        tracep->fullIData(oldp+101,(vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg),26);
        tracep->fullBit(oldp+102,(((0U != (IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__rd_reg)) 
                                   & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__rd_reg) 
                                      == (IData)(vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__rs1_fwd_reg)))));
        tracep->fullBit(oldp+103,(((0U != (IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__rd_reg)) 
                                   & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__rd_reg) 
                                      == (IData)(vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__rs2_fwd_reg)))));
        tracep->fullBit(oldp+104,(((0U != (IData)(vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst__DOT__genblk1__DOT__rd_reg)) 
                                   & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst__DOT__genblk1__DOT__rd_reg) 
                                      == (IData)(vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__rs1_fwd_reg)))));
        tracep->fullBit(oldp+105,(((0U != (IData)(vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst__DOT__genblk1__DOT__rd_reg)) 
                                   & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst__DOT__genblk1__DOT__rd_reg) 
                                      == (IData)(vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__rs2_fwd_reg)))));
        tracep->fullIData(oldp+106,(vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__alu_inst__rs1),32);
        tracep->fullIData(oldp+107,(vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__alu_inst__rs2),32);
        tracep->fullSData(oldp+108,((0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg)),12);
        tracep->fullIData(oldp+109,(vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__csr_inst__data_in),32);
        tracep->fullBit(oldp+110,(vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__l_misalign));
        tracep->fullBit(oldp+111,(vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__s_misalign));
        tracep->fullIData(oldp+112,(vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mtvec),32);
        tracep->fullIData(oldp+113,(vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mepc),32);
        tracep->fullIData(oldp+114,(vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mcause),32);
        tracep->fullIData(oldp+115,(vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mtval),32);
        tracep->fullIData(oldp+116,(vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mstatus),32);
        tracep->fullIData(oldp+117,(vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mepc_next),32);
        tracep->fullIData(oldp+118,(vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mcause_next),32);
        tracep->fullIData(oldp+119,(vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mtval_next),32);
        tracep->fullIData(oldp+120,(vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mstatus_next),32);
        tracep->fullIData(oldp+121,(vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__data_w),32);
        tracep->fullCData(oldp+122,((7U & vlSelf->top__DOT__cpu_inst__DOT__ex_alu)),3);
        tracep->fullBit(oldp+123,((((1U == (7U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                                  >> 1U))) 
                                    | (5U == (7U & 
                                              (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                               >> 1U)))) 
                                   & vlSelf->top__DOT__cpu_inst__DOT__ex_alu)));
        tracep->fullBit(oldp+124,((((2U == (7U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                                  >> 1U))) 
                                    | (6U == (7U & 
                                              (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                               >> 1U)))) 
                                   & (0U != (3U & vlSelf->top__DOT__cpu_inst__DOT__ex_alu)))));
        tracep->fullBit(oldp+125,(((1U == (7U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                                 >> 1U))) 
                                   & vlSelf->top__DOT__cpu_inst__DOT__ex_alu)));
        tracep->fullBit(oldp+126,(((2U == (7U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                                 >> 1U))) 
                                   & (0U != (3U & vlSelf->top__DOT__cpu_inst__DOT__ex_alu)))));
        tracep->fullIData(oldp+127,(vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__csr_reg_inst__DOT__mie),32);
        tracep->fullIData(oldp+128,(vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__csr_reg_inst__DOT__mip),32);
        tracep->fullIData(oldp+129,(vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__csr_reg_inst__DOT__mscratch),32);
        tracep->fullCData(oldp+130,(vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__ex_mem_inst__ctrl_in),6);
        tracep->fullCData(oldp+131,(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__ctrl_reg),6);
        tracep->fullBit(oldp+132,((1U & vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__alu_reg)));
        tracep->fullBit(oldp+133,((0U != (IData)(vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst__DOT__genblk1__DOT__rd_reg))));
        tracep->fullSData(oldp+134,((0xffffU & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)),16);
        tracep->fullIData(oldp+135,(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm),32);
        tracep->fullCData(oldp+136,(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs1),5);
        tracep->fullCData(oldp+137,(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs2),5);
        tracep->fullCData(oldp+138,(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rd),5);
        tracep->fullCData(oldp+139,(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__itype),4);
        tracep->fullIData(oldp+140,(((0x100U & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                >> 2U)) 
                                     | ((0xc0U & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                  << 1U)) 
                                        | (0x30U & 
                                           (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                            >> 7U))))),32);
        tracep->fullIData(oldp+141,(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__rvc_imm_gen_inst__DOT__uimm0_d),32);
        tracep->fullIData(oldp+142,(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__rvc_imm_gen_inst__DOT__uimm0_w),32);
        tracep->fullIData(oldp+143,(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__rvc_imm_gen_inst__DOT__imm1),32);
        tracep->fullIData(oldp+144,(VL_EXTENDS_II(32,10, 
                                                  ((0x200U 
                                                    & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                       >> 3U)) 
                                                   | ((0x180U 
                                                       & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                          << 4U)) 
                                                      | ((0x40U 
                                                          & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                             << 1U)) 
                                                         | ((0x20U 
                                                             & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                                << 3U)) 
                                                            | (0x10U 
                                                               & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                                  >> 2U)))))))),32);
        tracep->fullIData(oldp+145,(VL_EXTENDS_II(32,18, 
                                                  ((0x20000U 
                                                    & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                       << 5U)) 
                                                   | (0x1f000U 
                                                      & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                         << 0xaU))))),32);
        tracep->fullIData(oldp+146,(VL_EXTENDS_II(32,9, 
                                                  ((0x100U 
                                                    & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                       >> 4U)) 
                                                   | ((0xc0U 
                                                       & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                          << 1U)) 
                                                      | ((0x20U 
                                                          & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                             << 3U)) 
                                                         | ((0x18U 
                                                             & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                                >> 7U)) 
                                                            | (6U 
                                                               & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                                  >> 2U)))))))),32);
        tracep->fullIData(oldp+147,(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__rvc_imm_gen_inst__DOT__imm1_j),32);
        tracep->fullIData(oldp+148,(((0x3c0U & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                << 4U)) 
                                     | ((0x20U & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                  >> 7U)) 
                                        | (0x10U & 
                                           (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                            >> 2U))))),32);
        tracep->fullIData(oldp+149,(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__rvc_imm_gen_inst__DOT__uimm2_ld),32);
        tracep->fullIData(oldp+150,(((0xc0U & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                               << 4U)) 
                                     | ((0x20U & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                  >> 7U)) 
                                        | (0x1cU & 
                                           (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                            >> 2U))))),32);
        tracep->fullIData(oldp+151,(((0x3c0U & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                >> 1U)) 
                                     | (0x30U & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                 >> 7U)))),32);
        tracep->fullIData(oldp+152,(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__rvc_imm_gen_inst__DOT__uimm2_sd),32);
        tracep->fullIData(oldp+153,(((0xc0U & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                               >> 1U)) 
                                     | (0x3cU & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                 >> 7U)))),32);
        tracep->fullIData(oldp+154,(vlSelf->top__DOT__cpu_inst__DOT__genblk2__DOT__mul_inst__DOT__xrd),32);
        tracep->fullIData(oldp+155,((0xfffffU & (vlSelf->top__DOT__pc 
                                                 >> 1U))),20);
        tracep->fullIData(oldp+156,((0xfffffU & (vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__alu_reg 
                                                 >> 1U))),20);
        tracep->fullIData(oldp+157,(vlSelf->top__DOT__store_data),32);
        tracep->fullIData(oldp+158,(vlSelf->top__DOT__cpu_inst__DOT__mem_data),32);
        tracep->fullIData(oldp+159,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[0]),32);
        tracep->fullIData(oldp+160,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[1]),32);
        tracep->fullIData(oldp+161,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[2]),32);
        tracep->fullIData(oldp+162,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[3]),32);
        tracep->fullIData(oldp+163,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[4]),32);
        tracep->fullIData(oldp+164,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[5]),32);
        tracep->fullIData(oldp+165,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[6]),32);
        tracep->fullIData(oldp+166,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[7]),32);
        tracep->fullIData(oldp+167,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[8]),32);
        tracep->fullIData(oldp+168,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[9]),32);
        tracep->fullIData(oldp+169,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[10]),32);
        tracep->fullIData(oldp+170,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[11]),32);
        tracep->fullIData(oldp+171,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[12]),32);
        tracep->fullIData(oldp+172,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[13]),32);
        tracep->fullIData(oldp+173,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[14]),32);
        tracep->fullIData(oldp+174,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[15]),32);
        tracep->fullIData(oldp+175,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[16]),32);
        tracep->fullIData(oldp+176,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[17]),32);
        tracep->fullIData(oldp+177,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[18]),32);
        tracep->fullIData(oldp+178,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[19]),32);
        tracep->fullIData(oldp+179,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[20]),32);
        tracep->fullIData(oldp+180,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[21]),32);
        tracep->fullIData(oldp+181,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[22]),32);
        tracep->fullIData(oldp+182,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[23]),32);
        tracep->fullIData(oldp+183,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[24]),32);
        tracep->fullIData(oldp+184,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[25]),32);
        tracep->fullIData(oldp+185,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[26]),32);
        tracep->fullIData(oldp+186,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[27]),32);
        tracep->fullIData(oldp+187,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[28]),32);
        tracep->fullIData(oldp+188,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[29]),32);
        tracep->fullIData(oldp+189,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[30]),32);
        tracep->fullIData(oldp+190,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[31]),32);
        tracep->fullIData(oldp+191,(vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__genblk2__DOT__i),32);
        tracep->fullIData(oldp+192,(vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__old_data1),32);
        tracep->fullIData(oldp+193,(vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__old_data2),32);
        tracep->fullIData(oldp+194,(vlSelf->top__DOT__cpu_inst__DOT__id_rs1),32);
        tracep->fullIData(oldp+195,(vlSelf->top__DOT__cpu_inst__DOT__id_rs2),32);
        tracep->fullIData(oldp+196,(vlSelf->top__DOT__cpu_inst__DOT__mem_data_reg),32);
        tracep->fullBit(oldp+197,((3U != (3U & vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__old_data2))));
        tracep->fullBit(oldp+198,(vlSelf->clock));
        tracep->fullBit(oldp+199,(vlSelf->reset));
        tracep->fullIData(oldp+200,(((0x800U & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                      ? (vlSelf->top__DOT__cpu_inst__DOT__alu_o 
                                         & (~ (1U & 
                                               (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                                >> 0x11U))))
                                      : (((IData)(vlSelf->top__DOT__cpu_inst__DOT__branch_take)
                                           ? vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__pc_reg
                                           : vlSelf->top__DOT__pc) 
                                         + ((IData)(vlSelf->top__DOT__cpu_inst__DOT__branch_take)
                                             ? vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg
                                             : ((3U 
                                                 != 
                                                 (3U 
                                                  & vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__old_data2))
                                                 ? 2U
                                                 : 4U))))),32);
        tracep->fullIData(oldp+201,(((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__s_exception) 
                                            | (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                               >> 5U)))
                                      ? (IData)((0x1ffffffffULL 
                                                 & ((0x20U 
                                                     & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                                     ? (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mepc))
                                                     : 
                                                    (((1U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mtvec)) 
                                                      & (vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mcause 
                                                         >> 0x1fU))
                                                      ? 
                                                     ((QData)((IData)(
                                                                      (0xfffffffcU 
                                                                       & vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mtvec))) 
                                                      + 
                                                      ((QData)((IData)(
                                                                       (0x7fffffffU 
                                                                        & vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mcause))) 
                                                       << 2U))
                                                      : (QData)((IData)(
                                                                        (0xfffffffcU 
                                                                         & vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mtvec)))))))
                                      : ((0x800U & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                          ? (vlSelf->top__DOT__cpu_inst__DOT__alu_o 
                                             & (~ (1U 
                                                   & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                                      >> 0x11U))))
                                          : (((IData)(vlSelf->top__DOT__cpu_inst__DOT__branch_take)
                                               ? vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__pc_reg
                                               : vlSelf->top__DOT__pc) 
                                             + ((IData)(vlSelf->top__DOT__cpu_inst__DOT__branch_take)
                                                 ? vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg
                                                 : 
                                                ((3U 
                                                  != 
                                                  (3U 
                                                   & vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__old_data2))
                                                  ? 2U
                                                  : 4U)))))),32);
        tracep->fullIData(oldp+202,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words
                                    [vlSelf->top__DOT__cpu_inst__DOT__rs1]),32);
        tracep->fullIData(oldp+203,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words
                                    [vlSelf->top__DOT__cpu_inst__DOT__rs2]),32);
        tracep->fullIData(oldp+204,(0x20U),32);
        tracep->fullIData(oldp+205,(0x20000000U),32);
        tracep->fullIData(oldp+206,(0x20000004U),32);
        tracep->fullIData(oldp+207,(0x20000008U),32);
        tracep->fullIData(oldp+208,(1U),32);
        tracep->fullIData(oldp+209,(vlSelf->top__DOT__cpu_inst__DOT__mem_pc),32);
        tracep->fullIData(oldp+210,(vlSelf->top__DOT__cpu_inst__DOT__mem_imm),32);
        tracep->fullIData(oldp+211,(vlSelf->top__DOT__cpu_inst__DOT__mem_rs1),32);
        tracep->fullIData(oldp+212,(0U),32);
        tracep->fullCData(oldp+213,(8U),4);
        tracep->fullCData(oldp+214,(4U),4);
        tracep->fullCData(oldp+215,(2U),4);
        tracep->fullIData(oldp+216,(0x80000001U),32);
        tracep->fullBit(oldp+217,(0U));
        tracep->fullBit(oldp+218,(0U));
        tracep->fullIData(oldp+219,(0U),32);
        tracep->fullCData(oldp+220,(0U),5);
        tracep->fullCData(oldp+221,(1U),5);
        tracep->fullCData(oldp+222,(2U),5);
        tracep->fullIData(oldp+223,(0x10U),32);
        tracep->fullIData(oldp+224,(0x100000U),32);
        tracep->fullIData(oldp+225,(2U),32);
        tracep->fullSData(oldp+226,(0U),12);
        tracep->fullSData(oldp+227,(4U),12);
        tracep->fullSData(oldp+228,(5U),12);
        tracep->fullSData(oldp+229,(0x40U),12);
        tracep->fullSData(oldp+230,(0x41U),12);
        tracep->fullSData(oldp+231,(0x42U),12);
        tracep->fullSData(oldp+232,(0x43U),12);
        tracep->fullSData(oldp+233,(0x44U),12);
        tracep->fullSData(oldp+234,(1U),12);
        tracep->fullSData(oldp+235,(2U),12);
        tracep->fullSData(oldp+236,(3U),12);
        tracep->fullSData(oldp+237,(0xc00U),12);
        tracep->fullSData(oldp+238,(0xc01U),12);
        tracep->fullSData(oldp+239,(0xc02U),12);
        tracep->fullSData(oldp+240,(0xc80U),12);
        tracep->fullSData(oldp+241,(0xc81U),12);
        tracep->fullSData(oldp+242,(0xc82U),12);
        tracep->fullSData(oldp+243,(0x100U),12);
        tracep->fullSData(oldp+244,(0x102U),12);
        tracep->fullSData(oldp+245,(0x103U),12);
        tracep->fullSData(oldp+246,(0x104U),12);
        tracep->fullSData(oldp+247,(0x105U),12);
        tracep->fullSData(oldp+248,(0x106U),12);
        tracep->fullSData(oldp+249,(0x140U),12);
        tracep->fullSData(oldp+250,(0x141U),12);
        tracep->fullSData(oldp+251,(0x142U),12);
        tracep->fullSData(oldp+252,(0x143U),12);
        tracep->fullSData(oldp+253,(0x144U),12);
        tracep->fullSData(oldp+254,(0x180U),12);
        tracep->fullSData(oldp+255,(0x5a8U),12);
        tracep->fullSData(oldp+256,(0x600U),12);
        tracep->fullSData(oldp+257,(0x602U),12);
        tracep->fullSData(oldp+258,(0x603U),12);
        tracep->fullSData(oldp+259,(0x604U),12);
        tracep->fullSData(oldp+260,(0x606U),12);
        tracep->fullSData(oldp+261,(0x607U),12);
        tracep->fullSData(oldp+262,(0x643U),12);
        tracep->fullSData(oldp+263,(0x644U),12);
        tracep->fullSData(oldp+264,(0x645U),12);
        tracep->fullSData(oldp+265,(0x64aU),12);
        tracep->fullSData(oldp+266,(0xe12U),12);
        tracep->fullSData(oldp+267,(0x680U),12);
        tracep->fullSData(oldp+268,(0x6a8U),12);
        tracep->fullSData(oldp+269,(0x605U),12);
        tracep->fullSData(oldp+270,(0x615U),12);
        tracep->fullSData(oldp+271,(0x200U),12);
        tracep->fullSData(oldp+272,(0x204U),12);
        tracep->fullSData(oldp+273,(0x205U),12);
        tracep->fullSData(oldp+274,(0x240U),12);
        tracep->fullSData(oldp+275,(0x241U),12);
        tracep->fullSData(oldp+276,(0x242U),12);
        tracep->fullSData(oldp+277,(0x243U),12);
        tracep->fullSData(oldp+278,(0x244U),12);
        tracep->fullSData(oldp+279,(0x280U),12);
        tracep->fullSData(oldp+280,(0xf11U),12);
        tracep->fullSData(oldp+281,(0xf12U),12);
        tracep->fullSData(oldp+282,(0xf13U),12);
        tracep->fullSData(oldp+283,(0xf14U),12);
        tracep->fullSData(oldp+284,(0x300U),12);
        tracep->fullSData(oldp+285,(0x301U),12);
        tracep->fullSData(oldp+286,(0x302U),12);
        tracep->fullSData(oldp+287,(0x303U),12);
        tracep->fullSData(oldp+288,(0x304U),12);
        tracep->fullSData(oldp+289,(0x305U),12);
        tracep->fullSData(oldp+290,(0x306U),12);
        tracep->fullSData(oldp+291,(0x310U),12);
        tracep->fullSData(oldp+292,(0x340U),12);
        tracep->fullSData(oldp+293,(0x341U),12);
        tracep->fullSData(oldp+294,(0x342U),12);
        tracep->fullSData(oldp+295,(0x343U),12);
        tracep->fullSData(oldp+296,(0x344U),12);
        tracep->fullSData(oldp+297,(0x34aU),12);
        tracep->fullSData(oldp+298,(0x34bU),12);
        tracep->fullSData(oldp+299,(0x3a0U),12);
        tracep->fullSData(oldp+300,(0x3a1U),12);
        tracep->fullSData(oldp+301,(0x3b0U),12);
        tracep->fullSData(oldp+302,(0x3efU),12);
        tracep->fullSData(oldp+303,(0xb00U),12);
        tracep->fullSData(oldp+304,(0xb02U),12);
        tracep->fullSData(oldp+305,(0xb80U),12);
        tracep->fullSData(oldp+306,(0xb82U),12);
        tracep->fullSData(oldp+307,(0x320U),12);
        tracep->fullSData(oldp+308,(0x7a0U),12);
        tracep->fullSData(oldp+309,(0x7a1U),12);
        tracep->fullSData(oldp+310,(0x7a2U),12);
        tracep->fullSData(oldp+311,(0x7a3U),12);
        tracep->fullSData(oldp+312,(0x7a8U),12);
        tracep->fullSData(oldp+313,(0x7b0U),12);
        tracep->fullSData(oldp+314,(0x7b1U),12);
        tracep->fullSData(oldp+315,(0x7b2U),12);
        tracep->fullSData(oldp+316,(0x7b3U),12);
        tracep->fullCData(oldp+317,(3U),2);
        tracep->fullCData(oldp+318,(0U),2);
        tracep->fullCData(oldp+319,(1U),2);
        tracep->fullCData(oldp+320,(2U),2);
    }
}
