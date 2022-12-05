// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop___024root) {
  public:

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*2:0*/ top__DOT__cpu_inst__DOT__ins_type;
        CData/*4:0*/ top__DOT__cpu_inst__DOT__rd;
        CData/*4:0*/ top__DOT__cpu_inst__DOT__rs1;
        CData/*4:0*/ top__DOT__cpu_inst__DOT__rs2;
        CData/*4:0*/ top__DOT__cpu_inst__DOT__id_alu_op;
        CData/*0:0*/ top__DOT__cpu_inst__DOT__s_pc;
        CData/*0:0*/ top__DOT__cpu_inst__DOT__s_jalr;
        CData/*0:0*/ top__DOT__cpu_inst__DOT__s_csr;
        CData/*0:0*/ top__DOT__cpu_inst__DOT__s_store;
        CData/*0:0*/ top__DOT__cpu_inst__DOT__s_load;
        CData/*0:0*/ top__DOT__cpu_inst__DOT__s_flush;
        CData/*0:0*/ top__DOT__cpu_inst__DOT__s_exception;
        CData/*0:0*/ top__DOT__cpu_inst__DOT__branch_take;
        CData/*0:0*/ top__DOT__cpu_inst__DOT__hazard_inst__DOT__load_hazard;
        CData/*4:0*/ top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__rd_reg;
        CData/*4:0*/ top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__rs1_fwd_reg;
        CData/*4:0*/ top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__rs2_fwd_reg;
        CData/*0:0*/ top__DOT__cpu_inst__DOT__csr_inst__DOT__l_misalign;
        CData/*0:0*/ top__DOT__cpu_inst__DOT__csr_inst__DOT__s_misalign;
        CData/*5:0*/ top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__ctrl_reg;
        CData/*4:0*/ top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__rd_reg;
        CData/*4:0*/ top__DOT__cpu_inst__DOT__mem_wb_inst__DOT__genblk1__DOT__rd_reg;
        CData/*4:0*/ top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs1;
        CData/*4:0*/ top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs2;
        CData/*4:0*/ top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rd;
        CData/*3:0*/ top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__itype;
        IData/*31:0*/ top__DOT__load_data;
        IData/*31:0*/ top__DOT__store_data;
        IData/*31:0*/ top__DOT__inst;
        IData/*31:0*/ top__DOT__pc;
        IData/*31:0*/ top__DOT__sig_begin;
        IData/*31:0*/ top__DOT__sig_end;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__mem_pc;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__id_inst;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__id_rs1;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__id_rs2;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__id_imm;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__mem_imm;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__mem_rs1;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__fwd_rs1;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__fwd_rs2;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__alu_o;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__csr_o;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__ex_alu;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__alu_mux;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__mem_data;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__mem_data_reg;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__genblk1__DOT__c_inst;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__pc_reg;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg;
        IData/*25:0*/ top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__pc_reg;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__rs1_reg;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__rs2_reg;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__csr_inst__DOT__mtvec;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__csr_inst__DOT__mepc;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__csr_inst__DOT__mcause;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__csr_inst__DOT__mtval;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__csr_inst__DOT__mstatus;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__csr_inst__DOT__mepc_next;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__csr_inst__DOT__mcause_next;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__csr_inst__DOT__mtval_next;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__csr_inst__DOT__mstatus_next;
    };
    struct {
        IData/*31:0*/ top__DOT__cpu_inst__DOT__csr_inst__DOT__data_w;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__csr_inst__DOT__csr_reg_inst__DOT__mie;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__csr_inst__DOT__csr_reg_inst__DOT__mip;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__csr_inst__DOT__csr_reg_inst__DOT__mscratch;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__rs2_reg;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__alu_reg;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__mem_wb_inst__DOT__genblk1__DOT__alu_reg;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__genblk1__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__rvc_imm_gen_inst__DOT__uimm0_d;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__rvc_imm_gen_inst__DOT__uimm0_w;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__rvc_imm_gen_inst__DOT__imm1;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__rvc_imm_gen_inst__DOT__imm1_j;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__rvc_imm_gen_inst__DOT__uimm2_ld;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__rvc_imm_gen_inst__DOT__uimm2_sd;
        IData/*31:0*/ top__DOT__cpu_inst__DOT__genblk2__DOT__mul_inst__DOT__xrd;
        IData/*31:0*/ top__DOT__mem_inst__DOT__mem_inst__DOT__old_data1;
        IData/*31:0*/ top__DOT__mem_inst__DOT__mem_inst__DOT__old_data2;
        IData/*31:0*/ top__DOT__mem_inst__DOT__mem_inst__DOT__genblk1__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ top__DOT__mem_inst__DOT__mem_inst__DOT__genblk2__DOT__i;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words;
        VlUnpacked<SData/*15:0*/, 1048576> top__DOT__mem_inst__DOT__mem_inst__DOT__words;
    };
    std::string top__DOT__dump_file;

    // LOCAL VARIABLES
    CData/*3:0*/ top__DOT__cpu_inst__DOT____Vcellout__hazard_inst__bubble;
    CData/*5:0*/ top__DOT__cpu_inst__DOT____Vcellinp__ex_mem_inst__ctrl_in;
    CData/*0:0*/ __Vclklast__TOP__clock;
    IData/*31:0*/ top__DOT__cpu_inst__DOT____Vcellinp__pc_inst__npc;
    IData/*25:0*/ top__DOT__cpu_inst__DOT____Vcellinp__id_ex_inst__ctrl_in;
    IData/*31:0*/ top__DOT__cpu_inst__DOT____Vcellinp__alu_inst__rs2;
    IData/*31:0*/ top__DOT__cpu_inst__DOT____Vcellinp__alu_inst__rs1;
    IData/*31:0*/ top__DOT__cpu_inst__DOT____Vcellinp__csr_inst__data_in;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
