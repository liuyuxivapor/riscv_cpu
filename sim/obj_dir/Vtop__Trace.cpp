// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__genblk1__DOT__unnamedblk1__DOT__i),32);
            tracep->chgIData(oldp+1,(vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__genblk1__DOT__unnamedblk1__DOT__i),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+2,((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__ctrl_reg) 
                                          >> 4U))));
            tracep->chgBit(oldp+3,((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__ctrl_reg) 
                                          >> 5U))));
            tracep->chgIData(oldp+4,(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__alu_reg),32);
            tracep->chgIData(oldp+5,(vlSelf->top__DOT__pc),32);
            tracep->chgIData(oldp+6,(vlSelf->top__DOT__sig_begin),32);
            tracep->chgIData(oldp+7,(vlSelf->top__DOT__sig_end),32);
            tracep->chgCData(oldp+8,(vlSelf->top__DOT__cpu_inst__DOT__ins_type),3);
            tracep->chgCData(oldp+9,((7U & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                            >> 0xcU))),3);
            tracep->chgCData(oldp+10,((vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                       >> 0x19U)),7);
            tracep->chgCData(oldp+11,((0x7fU & vlSelf->top__DOT__cpu_inst__DOT__id_inst)),7);
            tracep->chgIData(oldp+12,(vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__pc_reg),32);
            tracep->chgIData(oldp+13,(vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__pc_reg),32);
            tracep->chgIData(oldp+14,(vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg),32);
            tracep->chgIData(oldp+15,(vlSelf->top__DOT__cpu_inst__DOT__id_inst),32);
            tracep->chgCData(oldp+16,(vlSelf->top__DOT__cpu_inst__DOT__rd),5);
            tracep->chgCData(oldp+17,(vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__rd_reg),5);
            tracep->chgCData(oldp+18,(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__rd_reg),5);
            tracep->chgCData(oldp+19,(vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst__DOT__genblk1__DOT__rd_reg),5);
            tracep->chgCData(oldp+20,(vlSelf->top__DOT__cpu_inst__DOT__rs1),5);
            tracep->chgCData(oldp+21,(vlSelf->top__DOT__cpu_inst__DOT__rs2),5);
            tracep->chgIData(oldp+22,(vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__rs1_reg),32);
            tracep->chgIData(oldp+23,(vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__rs2_reg),32);
            tracep->chgIData(oldp+24,(vlSelf->top__DOT__cpu_inst__DOT__id_imm),32);
            tracep->chgIData(oldp+25,(vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg),32);
            tracep->chgCData(oldp+26,(vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__rs1_fwd_reg),5);
            tracep->chgCData(oldp+27,(vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__rs2_fwd_reg),5);
            tracep->chgIData(oldp+28,(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__rs2_reg),32);
            tracep->chgIData(oldp+29,(vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst__DOT__genblk1__DOT__alu_reg),32);
            tracep->chgCData(oldp+30,(vlSelf->top__DOT__cpu_inst__DOT__id_alu_op),5);
            tracep->chgCData(oldp+31,((0x1fU & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                                >> 0x15U))),5);
            tracep->chgBit(oldp+32,(vlSelf->top__DOT__cpu_inst__DOT__s_pc));
            tracep->chgBit(oldp+33,((1U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                           >> 0x14U))));
            tracep->chgBit(oldp+34,((1U & (~ ((((0x33U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__cpu_inst__DOT__id_inst)) 
                                                | (0x3bU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__cpu_inst__DOT__id_inst))) 
                                               | (0x63U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__cpu_inst__DOT__id_inst))) 
                                              | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_csr))))));
            tracep->chgBit(oldp+35,((1U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                           >> 0x13U))));
            tracep->chgBit(oldp+36,(((0x3bU == (0x7fU 
                                                & vlSelf->top__DOT__cpu_inst__DOT__id_inst)) 
                                     | (0x1bU == (0x7fU 
                                                  & vlSelf->top__DOT__cpu_inst__DOT__id_inst)))));
            tracep->chgBit(oldp+37,((1U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                           >> 0x12U))));
            tracep->chgBit(oldp+38,(vlSelf->top__DOT__cpu_inst__DOT__s_jalr));
            tracep->chgBit(oldp+39,(((0x6fU == (0x7fU 
                                                & vlSelf->top__DOT__cpu_inst__DOT__id_inst)) 
                                     | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_jalr))));
            tracep->chgBit(oldp+40,(((0x63U == (0x7fU 
                                                & vlSelf->top__DOT__cpu_inst__DOT__id_inst)) 
                                     & ((((((0U == 
                                             (7U & 
                                              (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                               >> 0xcU))) 
                                            | (1U == 
                                               (7U 
                                                & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                   >> 0xcU)))) 
                                           | (4U == 
                                              (7U & 
                                               (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                >> 0xcU)))) 
                                          | (5U == 
                                             (7U & 
                                              (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                               >> 0xcU)))) 
                                         | (6U == (7U 
                                                   & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                      >> 0xcU)))) 
                                        | (7U == (7U 
                                                  & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                     >> 0xcU)))))));
            tracep->chgBit(oldp+41,(((0x63U == (0x7fU 
                                                & vlSelf->top__DOT__cpu_inst__DOT__id_inst)) 
                                     & (((0U == (7U 
                                                 & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                    >> 0xcU))) 
                                         | (5U == (7U 
                                                   & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                      >> 0xcU)))) 
                                        | (7U == (7U 
                                                  & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                     >> 0xcU)))))));
            tracep->chgBit(oldp+42,((1U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                           >> 0x11U))));
            tracep->chgBit(oldp+43,((1U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                           >> 0xbU))));
            tracep->chgBit(oldp+44,((1U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                           >> 0x10U))));
            tracep->chgBit(oldp+45,((1U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                           >> 0xfU))));
            tracep->chgBit(oldp+46,((3U != (3U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg))));
            tracep->chgBit(oldp+47,((1U & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)));
            tracep->chgBit(oldp+48,(vlSelf->top__DOT__cpu_inst__DOT__s_csr));
            tracep->chgBit(oldp+49,(((IData)(vlSelf->top__DOT__cpu_inst__DOT__s_csr) 
                                     & (((1U == (7U 
                                                 & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                    >> 0xcU))) 
                                         | (5U == (7U 
                                                   & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                      >> 0xcU)))) 
                                        | (0U != (IData)(vlSelf->top__DOT__cpu_inst__DOT__rs1))))));
            tracep->chgBit(oldp+50,(((0x73U == (0x7fU 
                                                & vlSelf->top__DOT__cpu_inst__DOT__id_inst)) 
                                     & (((5U == (7U 
                                                 & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                    >> 0xcU))) 
                                         | (6U == (7U 
                                                   & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                      >> 0xcU)))) 
                                        | (7U == (7U 
                                                  & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                     >> 0xcU)))))));
            tracep->chgBit(oldp+51,((1U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                           >> 0xeU))));
            tracep->chgBit(oldp+52,((1U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                           >> 0xcU))));
            tracep->chgBit(oldp+53,((1U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                           >> 0xdU))));
            tracep->chgBit(oldp+54,((0x73U == vlSelf->top__DOT__cpu_inst__DOT__id_inst)));
            tracep->chgBit(oldp+55,((0x100073U == vlSelf->top__DOT__cpu_inst__DOT__id_inst)));
            tracep->chgBit(oldp+56,((0x30200073U == vlSelf->top__DOT__cpu_inst__DOT__id_inst)));
            tracep->chgBit(oldp+57,((((((((0U == (IData)(vlSelf->top__DOT__cpu_inst__DOT__id_alu_op)) 
                                          & (~ (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_flush))) 
                                         & (0x73U != vlSelf->top__DOT__cpu_inst__DOT__id_inst)) 
                                        & (0x100073U 
                                           != vlSelf->top__DOT__cpu_inst__DOT__id_inst)) 
                                       & (0x8330000fU 
                                          != vlSelf->top__DOT__cpu_inst__DOT__id_inst)) 
                                      & (~ ((IData)(
                                                    (0xfU 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__cpu_inst__DOT__id_inst))) 
                                            & (0U == 
                                               (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                >> 0x1cU))))) 
                                     & (0x30200073U 
                                        != vlSelf->top__DOT__cpu_inst__DOT__id_inst))));
            tracep->chgBit(oldp+58,((1U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                           >> 7U))));
            tracep->chgBit(oldp+59,((1U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                           >> 6U))));
            tracep->chgBit(oldp+60,((1U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                           >> 5U))));
            tracep->chgBit(oldp+61,((1U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                           >> 4U))));
            tracep->chgBit(oldp+62,(vlSelf->top__DOT__cpu_inst__DOT__s_store));
            tracep->chgBit(oldp+63,((1U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                           >> 0xaU))));
            tracep->chgBit(oldp+64,(vlSelf->top__DOT__cpu_inst__DOT__s_load));
            tracep->chgBit(oldp+65,((1U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                           >> 9U))));
            tracep->chgCData(oldp+66,((7U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                             >> 1U))),3);
            tracep->chgCData(oldp+67,((7U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__ctrl_reg))),3);
            tracep->chgBit(oldp+68,((1U & (((IData)(vlSelf->top__DOT__cpu_inst__DOT__hazard_inst__DOT__load_hazard)
                                             ? 8U : 0U) 
                                           >> 3U))));
            tracep->chgBit(oldp+69,((1U & (((IData)(vlSelf->top__DOT__cpu_inst__DOT__hazard_inst__DOT__load_hazard)
                                             ? 8U : 0U) 
                                           >> 2U))));
            tracep->chgBit(oldp+70,((1U & (((IData)(vlSelf->top__DOT__cpu_inst__DOT__hazard_inst__DOT__load_hazard)
                                             ? 8U : 0U) 
                                           >> 1U))));
            tracep->chgBit(oldp+71,(0U));
            tracep->chgBit(oldp+72,((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT____Vcellout__hazard_inst__bubble) 
                                           >> 3U))));
            tracep->chgBit(oldp+73,((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT____Vcellout__hazard_inst__bubble) 
                                           >> 2U))));
            tracep->chgBit(oldp+74,((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT____Vcellout__hazard_inst__bubble) 
                                           >> 1U))));
            tracep->chgBit(oldp+75,((1U & (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vcellout__hazard_inst__bubble))));
            tracep->chgBit(oldp+76,(vlSelf->top__DOT__cpu_inst__DOT__s_flush));
            tracep->chgBit(oldp+77,((1U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                           >> 8U))));
            tracep->chgBit(oldp+78,((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__ctrl_reg) 
                                           >> 3U))));
            tracep->chgBit(oldp+79,((1U & ((((IData)(vlSelf->top__DOT__cpu_inst__DOT__hazard_inst__DOT__load_hazard) 
                                             | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_flush)) 
                                            | (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                               >> 8U)) 
                                           | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__ctrl_reg) 
                                              >> 3U)))));
            tracep->chgBit(oldp+80,(vlSelf->top__DOT__cpu_inst__DOT__s_exception));
            tracep->chgIData(oldp+81,((IData)((0x1ffffffffULL 
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
                                                                       & vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mtvec)))))))),32);
            tracep->chgBit(oldp+82,(vlSelf->top__DOT__cpu_inst__DOT__branch_take));
            tracep->chgIData(oldp+83,(vlSelf->top__DOT__cpu_inst__DOT__fwd_rs1),32);
            tracep->chgIData(oldp+84,(vlSelf->top__DOT__cpu_inst__DOT__fwd_rs2),32);
            tracep->chgBit(oldp+85,((0U == vlSelf->top__DOT__cpu_inst__DOT__alu_o)));
            tracep->chgIData(oldp+86,(vlSelf->top__DOT__cpu_inst__DOT__alu_o),32);
            tracep->chgIData(oldp+87,(vlSelf->top__DOT__cpu_inst__DOT__csr_o),32);
            tracep->chgIData(oldp+88,(((0x2000000U 
                                        & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                        ? ((0x1000000U 
                                            & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                            ? 0U : 
                                           ((0x800000U 
                                             & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                             ? 0U : 
                                            ((0x400000U 
                                              & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                              ? ((0x200000U 
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
                                              : ((0x200000U 
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
            tracep->chgIData(oldp+89,(((0x2000000U 
                                        & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                        ? ((0x1000000U 
                                            & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                            ? 0U : 
                                           ((0x800000U 
                                             & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                             ? ((0x400000U 
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
            tracep->chgIData(oldp+90,(vlSelf->top__DOT__cpu_inst__DOT__ex_alu),32);
            tracep->chgIData(oldp+91,(vlSelf->top__DOT__cpu_inst__DOT__alu_mux),32);
            tracep->chgIData(oldp+92,(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__c_inst),32);
            tracep->chgBit(oldp+93,((1U & (((vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                             >> 5U) 
                                            | (IData)(vlSelf->top__DOT__cpu_inst__DOT__branch_take)) 
                                           | (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                              >> 0xbU)))));
            tracep->chgCData(oldp+94,(((IData)(vlSelf->top__DOT__cpu_inst__DOT__hazard_inst__DOT__load_hazard)
                                        ? 8U : 0U)),4);
            tracep->chgCData(oldp+95,(vlSelf->top__DOT__cpu_inst__DOT____Vcellout__hazard_inst__bubble),4);
            tracep->chgBit(oldp+96,(vlSelf->top__DOT__cpu_inst__DOT__hazard_inst__DOT__load_hazard));
            tracep->chgBit(oldp+97,((0x8330000fU == vlSelf->top__DOT__cpu_inst__DOT__id_inst)));
            tracep->chgBit(oldp+98,(((IData)((0xfU 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__cpu_inst__DOT__id_inst))) 
                                     & (0U == (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                               >> 0x1cU)))));
            tracep->chgIData(oldp+99,(vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__id_ex_inst__ctrl_in),26);
            tracep->chgIData(oldp+100,(vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg),26);
            tracep->chgBit(oldp+101,(((0U != (IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__rd_reg)) 
                                      & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__rd_reg) 
                                         == (IData)(vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__rs1_fwd_reg)))));
            tracep->chgBit(oldp+102,(((0U != (IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__rd_reg)) 
                                      & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__rd_reg) 
                                         == (IData)(vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__rs2_fwd_reg)))));
            tracep->chgBit(oldp+103,(((0U != (IData)(vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst__DOT__genblk1__DOT__rd_reg)) 
                                      & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst__DOT__genblk1__DOT__rd_reg) 
                                         == (IData)(vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__rs1_fwd_reg)))));
            tracep->chgBit(oldp+104,(((0U != (IData)(vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst__DOT__genblk1__DOT__rd_reg)) 
                                      & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst__DOT__genblk1__DOT__rd_reg) 
                                         == (IData)(vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__rs2_fwd_reg)))));
            tracep->chgIData(oldp+105,(vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__alu_inst__rs1),32);
            tracep->chgIData(oldp+106,(vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__alu_inst__rs2),32);
            tracep->chgSData(oldp+107,((0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg)),12);
            tracep->chgIData(oldp+108,(vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__csr_inst__data_in),32);
            tracep->chgBit(oldp+109,(vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__l_misalign));
            tracep->chgBit(oldp+110,(vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__s_misalign));
            tracep->chgIData(oldp+111,(vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mtvec),32);
            tracep->chgIData(oldp+112,(vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mepc),32);
            tracep->chgIData(oldp+113,(vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mcause),32);
            tracep->chgIData(oldp+114,(vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mtval),32);
            tracep->chgIData(oldp+115,(vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mstatus),32);
            tracep->chgIData(oldp+116,(vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mepc_next),32);
            tracep->chgIData(oldp+117,(vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mcause_next),32);
            tracep->chgIData(oldp+118,(vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mtval_next),32);
            tracep->chgIData(oldp+119,(vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mstatus_next),32);
            tracep->chgIData(oldp+120,(vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__data_w),32);
            tracep->chgCData(oldp+121,((7U & vlSelf->top__DOT__cpu_inst__DOT__ex_alu)),3);
            tracep->chgBit(oldp+122,((((1U == (7U & 
                                               (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                                >> 1U))) 
                                       | (5U == (7U 
                                                 & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                                    >> 1U)))) 
                                      & vlSelf->top__DOT__cpu_inst__DOT__ex_alu)));
            tracep->chgBit(oldp+123,((((2U == (7U & 
                                               (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                                >> 1U))) 
                                       | (6U == (7U 
                                                 & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                                    >> 1U)))) 
                                      & (0U != (3U 
                                                & vlSelf->top__DOT__cpu_inst__DOT__ex_alu)))));
            tracep->chgBit(oldp+124,(((1U == (7U & 
                                              (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                               >> 1U))) 
                                      & vlSelf->top__DOT__cpu_inst__DOT__ex_alu)));
            tracep->chgBit(oldp+125,(((2U == (7U & 
                                              (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                               >> 1U))) 
                                      & (0U != (3U 
                                                & vlSelf->top__DOT__cpu_inst__DOT__ex_alu)))));
            tracep->chgIData(oldp+126,(vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__csr_reg_inst__DOT__mie),32);
            tracep->chgIData(oldp+127,(vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__csr_reg_inst__DOT__mip),32);
            tracep->chgIData(oldp+128,(vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__csr_reg_inst__DOT__mscratch),32);
            tracep->chgCData(oldp+129,(vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__ex_mem_inst__ctrl_in),6);
            tracep->chgCData(oldp+130,(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__ctrl_reg),6);
            tracep->chgBit(oldp+131,((1U & vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__alu_reg)));
            tracep->chgBit(oldp+132,((0U != (IData)(vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst__DOT__genblk1__DOT__rd_reg))));
            tracep->chgSData(oldp+133,((0xffffU & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)),16);
            tracep->chgIData(oldp+134,(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm),32);
            tracep->chgCData(oldp+135,(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs1),5);
            tracep->chgCData(oldp+136,(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs2),5);
            tracep->chgCData(oldp+137,(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rd),5);
            tracep->chgCData(oldp+138,(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__itype),4);
            tracep->chgIData(oldp+139,(((0x100U & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                   >> 2U)) 
                                        | ((0xc0U & 
                                            (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                             << 1U)) 
                                           | (0x30U 
                                              & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                 >> 7U))))),32);
            tracep->chgIData(oldp+140,(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__rvc_imm_gen_inst__DOT__uimm0_d),32);
            tracep->chgIData(oldp+141,(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__rvc_imm_gen_inst__DOT__uimm0_w),32);
            tracep->chgIData(oldp+142,(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__rvc_imm_gen_inst__DOT__imm1),32);
            tracep->chgIData(oldp+143,(VL_EXTENDS_II(32,10, 
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
            tracep->chgIData(oldp+144,(VL_EXTENDS_II(32,18, 
                                                     ((0x20000U 
                                                       & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                          << 5U)) 
                                                      | (0x1f000U 
                                                         & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                            << 0xaU))))),32);
            tracep->chgIData(oldp+145,(VL_EXTENDS_II(32,9, 
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
            tracep->chgIData(oldp+146,(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__rvc_imm_gen_inst__DOT__imm1_j),32);
            tracep->chgIData(oldp+147,(((0x3c0U & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                   << 4U)) 
                                        | ((0x20U & 
                                            (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                             >> 7U)) 
                                           | (0x10U 
                                              & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                 >> 2U))))),32);
            tracep->chgIData(oldp+148,(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__rvc_imm_gen_inst__DOT__uimm2_ld),32);
            tracep->chgIData(oldp+149,(((0xc0U & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                  << 4U)) 
                                        | ((0x20U & 
                                            (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                             >> 7U)) 
                                           | (0x1cU 
                                              & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                 >> 2U))))),32);
            tracep->chgIData(oldp+150,(((0x3c0U & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                   >> 1U)) 
                                        | (0x30U & 
                                           (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                            >> 7U)))),32);
            tracep->chgIData(oldp+151,(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__rvc_imm_gen_inst__DOT__uimm2_sd),32);
            tracep->chgIData(oldp+152,(((0xc0U & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                  >> 1U)) 
                                        | (0x3cU & 
                                           (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                            >> 7U)))),32);
            tracep->chgIData(oldp+153,(vlSelf->top__DOT__cpu_inst__DOT__genblk2__DOT__mul_inst__DOT__xrd),32);
            tracep->chgIData(oldp+154,((0xfffffU & 
                                        (vlSelf->top__DOT__pc 
                                         >> 1U))),20);
            tracep->chgIData(oldp+155,((0xfffffU & 
                                        (vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__alu_reg 
                                         >> 1U))),20);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+156,(vlSelf->top__DOT__store_data),32);
            tracep->chgIData(oldp+157,(vlSelf->top__DOT__cpu_inst__DOT__mem_data),32);
            tracep->chgIData(oldp+158,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[0]),32);
            tracep->chgIData(oldp+159,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[1]),32);
            tracep->chgIData(oldp+160,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[2]),32);
            tracep->chgIData(oldp+161,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[3]),32);
            tracep->chgIData(oldp+162,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[4]),32);
            tracep->chgIData(oldp+163,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[5]),32);
            tracep->chgIData(oldp+164,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[6]),32);
            tracep->chgIData(oldp+165,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[7]),32);
            tracep->chgIData(oldp+166,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[8]),32);
            tracep->chgIData(oldp+167,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[9]),32);
            tracep->chgIData(oldp+168,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[10]),32);
            tracep->chgIData(oldp+169,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[11]),32);
            tracep->chgIData(oldp+170,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[12]),32);
            tracep->chgIData(oldp+171,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[13]),32);
            tracep->chgIData(oldp+172,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[14]),32);
            tracep->chgIData(oldp+173,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[15]),32);
            tracep->chgIData(oldp+174,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[16]),32);
            tracep->chgIData(oldp+175,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[17]),32);
            tracep->chgIData(oldp+176,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[18]),32);
            tracep->chgIData(oldp+177,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[19]),32);
            tracep->chgIData(oldp+178,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[20]),32);
            tracep->chgIData(oldp+179,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[21]),32);
            tracep->chgIData(oldp+180,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[22]),32);
            tracep->chgIData(oldp+181,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[23]),32);
            tracep->chgIData(oldp+182,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[24]),32);
            tracep->chgIData(oldp+183,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[25]),32);
            tracep->chgIData(oldp+184,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[26]),32);
            tracep->chgIData(oldp+185,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[27]),32);
            tracep->chgIData(oldp+186,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[28]),32);
            tracep->chgIData(oldp+187,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[29]),32);
            tracep->chgIData(oldp+188,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[30]),32);
            tracep->chgIData(oldp+189,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[31]),32);
            tracep->chgIData(oldp+190,(vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__genblk2__DOT__i),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgIData(oldp+191,(vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__old_data1),32);
            tracep->chgIData(oldp+192,(vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__old_data2),32);
            tracep->chgIData(oldp+193,(vlSelf->top__DOT__cpu_inst__DOT__id_rs1),32);
            tracep->chgIData(oldp+194,(vlSelf->top__DOT__cpu_inst__DOT__id_rs2),32);
            tracep->chgIData(oldp+195,(vlSelf->top__DOT__cpu_inst__DOT__mem_data_reg),32);
            tracep->chgBit(oldp+196,((3U != (3U & vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__old_data2))));
        }
        tracep->chgBit(oldp+197,(vlSelf->clock));
        tracep->chgBit(oldp+198,(vlSelf->reset));
        tracep->chgIData(oldp+199,(((0x800U & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
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
        tracep->chgIData(oldp+200,(((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__s_exception) 
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
                                                : (
                                                   (3U 
                                                    != 
                                                    (3U 
                                                     & vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__old_data2))
                                                    ? 2U
                                                    : 4U)))))),32);
        tracep->chgIData(oldp+201,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words
                                   [vlSelf->top__DOT__cpu_inst__DOT__rs1]),32);
        tracep->chgIData(oldp+202,(vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words
                                   [vlSelf->top__DOT__cpu_inst__DOT__rs2]),32);
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    }
}
