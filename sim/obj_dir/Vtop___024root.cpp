// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========

extern const VlUnpacked<CData/*2:0*/, 128> Vtop__ConstPool__TABLE_f8641288_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*6:0*/ __Vtableidx1;
    IData/*31:0*/ __Vdly__top__DOT__pc;
    // Body
    __Vdly__top__DOT__pc = vlSelf->top__DOT__pc;
    if (VL_UNLIKELY(((((IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__ctrl_reg) 
                       >> 5U) & (0x20000000U == vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__alu_reg)) 
                     & (1U == vlSelf->top__DOT__store_data)))) {
        if (VL_UNLIKELY((std::string("") != vlSelf->top__DOT__dump_file))) {
            VL_WRITEMEM_N(true, 16, 1048576, 0, VL_CVT_PACK_STR_NN(vlSelf->top__DOT__dump_file)
                          ,  &(vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__words)
                          , vlSelf->top__DOT__sig_begin
                          , vlSelf->top__DOT__sig_end);
        }
        VL_FINISH_MT("../core/../core/top.v", 36, "");
    }
    if ((1U & (~ (((IData)(vlSelf->top__DOT__cpu_inst__DOT__hazard_inst__DOT__load_hazard)
                    ? 8U : 0U) >> 1U)))) {
        vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__rs2_reg 
            = ((((2U & (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vcellout__hazard_inst__bubble))
                  ? 0U : (((IData)(vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__rd_reg) 
                           << 6U) | ((IData)(((((QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__fwd_rs2)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_alu))) 
                                              >> 0x20U)) 
                                     >> 0x1aU))) << 0x1aU) 
               | (((2U & (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vcellout__hazard_inst__bubble))
                    ? 0U : (((IData)((((QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__fwd_rs2)) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_alu)))) 
                             >> 0x1aU) | ((IData)((
                                                   (((QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__fwd_rs2)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_alu))) 
                                                   >> 0x20U)) 
                                          << 6U))) 
                  >> 6U));
    }
    if ((1U & (~ (((IData)(vlSelf->top__DOT__cpu_inst__DOT__hazard_inst__DOT__load_hazard)
                    ? 8U : 0U) >> 2U)))) {
        vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__pc_reg 
            = ((((4U & (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vcellout__hazard_inst__bubble))
                  ? 0U : (((IData)(vlSelf->top__DOT__cpu_inst__DOT__rs1) 
                           << 0x1fU) | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__rs2) 
                                         << 0x1aU) 
                                        | ((IData)(
                                                   ((((QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__pc_reg)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__id_rs1))) 
                                                    >> 0x20U)) 
                                           >> 6U)))) 
                << 6U) | (((4U & (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vcellout__hazard_inst__bubble))
                            ? 0U : (((IData)((((QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__pc_reg)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__id_rs1)))) 
                                     >> 6U) | ((IData)(
                                                       ((((QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__pc_reg)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__id_rs1))) 
                                                        >> 0x20U)) 
                                               << 0x1aU))) 
                          >> 0x1aU));
    }
    if ((1U & (~ (((IData)(vlSelf->top__DOT__cpu_inst__DOT__hazard_inst__DOT__load_hazard)
                    ? 8U : 0U) >> 2U)))) {
        vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__rs2_reg 
            = ((((4U & (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vcellout__hazard_inst__bubble))
                  ? 0U : ((vlSelf->top__DOT__cpu_inst__DOT__id_rs2 
                           >> 6U) | ((IData)((((QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__pc_reg)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__id_rs1)))) 
                                     << 0x1aU))) << 6U) 
               | (((4U & (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vcellout__hazard_inst__bubble))
                    ? 0U : ((vlSelf->top__DOT__cpu_inst__DOT__id_imm 
                             >> 6U) | (vlSelf->top__DOT__cpu_inst__DOT__id_rs2 
                                       << 0x1aU))) 
                  >> 0x1aU));
    }
    if ((1U & (~ (((IData)(vlSelf->top__DOT__cpu_inst__DOT__hazard_inst__DOT__load_hazard)
                    ? 8U : 0U) >> 2U)))) {
        vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__rs2_fwd_reg 
            = (0x1fU & (((4U & (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vcellout__hazard_inst__bubble))
                          ? 0U : (((IData)(vlSelf->top__DOT__cpu_inst__DOT__rs1) 
                                   << 0x1fU) | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__rs2) 
                                                 << 0x1aU) 
                                                | ((IData)(
                                                           ((((QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__pc_reg)) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__id_rs1))) 
                                                            >> 0x20U)) 
                                                   >> 6U)))) 
                        >> 0x1aU));
    }
    if ((1U & (~ (((IData)(vlSelf->top__DOT__cpu_inst__DOT__hazard_inst__DOT__load_hazard)
                    ? 8U : 0U) >> 2U)))) {
        vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__rs1_reg 
            = ((((4U & (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vcellout__hazard_inst__bubble))
                  ? 0U : (((IData)((((QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__pc_reg)) 
                                     << 0x20U) | (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__id_rs1)))) 
                           >> 6U) | ((IData)(((((QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__pc_reg)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__id_rs1))) 
                                              >> 0x20U)) 
                                     << 0x1aU))) << 6U) 
               | (((4U & (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vcellout__hazard_inst__bubble))
                    ? 0U : ((vlSelf->top__DOT__cpu_inst__DOT__id_rs2 
                             >> 6U) | ((IData)((((QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__pc_reg)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__id_rs1)))) 
                                       << 0x1aU))) 
                  >> 0x1aU));
    }
    if ((1U & (~ (((IData)(vlSelf->top__DOT__cpu_inst__DOT__hazard_inst__DOT__load_hazard)
                    ? 8U : 0U) >> 2U)))) {
        vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__rs1_fwd_reg 
            = (0x1fU & ((((4U & (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vcellout__hazard_inst__bubble))
                           ? 0U : (((IData)(vlSelf->top__DOT__cpu_inst__DOT__rd) 
                                    << 4U) | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__rs1) 
                                              >> 1U))) 
                         << 1U) | (((4U & (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vcellout__hazard_inst__bubble))
                                     ? 0U : (((IData)(vlSelf->top__DOT__cpu_inst__DOT__rs1) 
                                              << 0x1fU) 
                                             | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__rs2) 
                                                 << 0x1aU) 
                                                | ((IData)(
                                                           ((((QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__pc_reg)) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__id_rs1))) 
                                                            >> 0x20U)) 
                                                   >> 6U)))) 
                                   >> 0x1fU)));
    }
    if (vlSelf->reset) {
        __Vdly__top__DOT__pc = 0U;
    } else if ((1U & (~ ((((IData)(vlSelf->top__DOT__cpu_inst__DOT__hazard_inst__DOT__load_hazard) 
                           | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_flush)) 
                          | (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                             >> 8U)) | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__ctrl_reg) 
                                        >> 3U))))) {
        __Vdly__top__DOT__pc = vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__pc_inst__npc;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__csr_reg_inst__DOT__mie = 0U;
    } else if ((0x1000U & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)) {
        if (((((((((0x305U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg)) 
                   | (0x341U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
                  | (0x342U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
                 | (0x304U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
                | (0x344U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
               | (0x343U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
              | (0x340U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
             | (0x300U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg)))) {
            if ((0x305U != (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) {
                if ((0x341U != (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) {
                    if ((0x342U != (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) {
                        if ((0x304U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) {
                            vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__csr_reg_inst__DOT__mie 
                                = vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__data_w;
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__csr_reg_inst__DOT__mip = 0U;
    } else if ((0x1000U & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)) {
        if (((((((((0x305U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg)) 
                   | (0x341U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
                  | (0x342U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
                 | (0x304U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
                | (0x344U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
               | (0x343U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
              | (0x340U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
             | (0x300U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg)))) {
            if ((0x305U != (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) {
                if ((0x341U != (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) {
                    if ((0x342U != (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) {
                        if ((0x304U != (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) {
                            if ((0x344U == (0xfffU 
                                            & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) {
                                vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__csr_reg_inst__DOT__mip 
                                    = vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__data_w;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__csr_reg_inst__DOT__mscratch = 0U;
    } else if ((0x1000U & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)) {
        if (((((((((0x305U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg)) 
                   | (0x341U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
                  | (0x342U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
                 | (0x304U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
                | (0x344U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
               | (0x343U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
              | (0x340U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
             | (0x300U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg)))) {
            if ((0x305U != (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) {
                if ((0x341U != (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) {
                    if ((0x342U != (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) {
                        if ((0x304U != (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) {
                            if ((0x344U != (0xfffU 
                                            & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) {
                                if ((0x343U != (0xfffU 
                                                & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) {
                                    if ((0x340U == 
                                         (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) {
                                        vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__csr_reg_inst__DOT__mscratch 
                                            = vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__data_w;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mtvec = 0U;
    } else if ((0x1000U & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)) {
        if (((((((((0x305U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg)) 
                   | (0x341U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
                  | (0x342U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
                 | (0x304U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
                | (0x344U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
               | (0x343U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
              | (0x340U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
             | (0x300U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg)))) {
            if ((0x305U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) {
                vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mtvec 
                    = vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__data_w;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mtval = 0U;
    } else if ((0x1000U & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)) {
        if (((((((((0x305U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg)) 
                   | (0x341U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
                  | (0x342U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
                 | (0x304U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
                | (0x344U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
               | (0x343U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
              | (0x340U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
             | (0x300U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg)))) {
            if ((0x305U != (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) {
                if ((0x341U != (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) {
                    if ((0x342U != (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) {
                        if ((0x304U != (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) {
                            if ((0x344U != (0xfffU 
                                            & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) {
                                if ((0x343U == (0xfffU 
                                                & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) {
                                    vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mtval 
                                        = vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__data_w;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mtval 
            = vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mtval_next;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mepc = 0U;
    } else if ((0x1000U & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)) {
        if (((((((((0x305U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg)) 
                   | (0x341U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
                  | (0x342U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
                 | (0x304U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
                | (0x344U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
               | (0x343U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
              | (0x340U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
             | (0x300U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg)))) {
            if ((0x305U != (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) {
                if ((0x341U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) {
                    vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mepc 
                        = vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__data_w;
                }
            }
        }
    } else {
        vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mepc 
            = vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mepc_next;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mcause = 0U;
    } else if ((0x1000U & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)) {
        if (((((((((0x305U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg)) 
                   | (0x341U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
                  | (0x342U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
                 | (0x304U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
                | (0x344U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
               | (0x343U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
              | (0x340U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
             | (0x300U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg)))) {
            if ((0x305U != (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) {
                if ((0x341U != (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) {
                    if ((0x342U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) {
                        vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mcause 
                            = vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__data_w;
                    }
                }
            }
        }
    } else {
        vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mcause 
            = vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mcause_next;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mstatus = 8U;
    } else if ((0x1000U & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)) {
        if (((((((((0x305U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg)) 
                   | (0x341U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
                  | (0x342U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
                 | (0x304U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
                | (0x344U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
               | (0x343U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
              | (0x340U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
             | (0x300U == (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg)))) {
            if ((0x305U != (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) {
                if ((0x341U != (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) {
                    if ((0x342U != (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) {
                        if ((0x304U != (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) {
                            if ((0x344U != (0xfffU 
                                            & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) {
                                if ((0x343U != (0xfffU 
                                                & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) {
                                    if ((0x340U != 
                                         (0xfffU & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) {
                                        vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mstatus 
                                            = vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__data_w;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mstatus 
            = vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mstatus_next;
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__cpu_inst__DOT__hazard_inst__DOT__load_hazard)
                   ? 8U : 0U)))) {
        vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst__DOT__genblk1__DOT__alu_reg 
            = (IData)(((1U & (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vcellout__hazard_inst__bubble))
                        ? 0ULL : (((QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__rd_reg)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__mem_data_reg)))));
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__cpu_inst__DOT__hazard_inst__DOT__load_hazard)
                   ? 8U : 0U)))) {
        vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst__DOT__genblk1__DOT__rd_reg 
            = (0x1fU & (IData)((((1U & (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vcellout__hazard_inst__bubble))
                                  ? 0ULL : (((QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__rd_reg)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__mem_data_reg)))) 
                                >> 0x20U)));
    }
    if ((1U & (~ (((IData)(vlSelf->top__DOT__cpu_inst__DOT__hazard_inst__DOT__load_hazard)
                    ? 8U : 0U) >> 3U)))) {
        vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
            = (IData)(((8U & (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vcellout__hazard_inst__bubble))
                        ? 0x13ULL : (((QData)((IData)(vlSelf->top__DOT__pc)) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__old_data2)))));
    }
    if ((((IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__ctrl_reg) 
          >> 5U) & (0x20000004U == vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__alu_reg))) {
        vlSelf->top__DOT__sig_begin = (vlSelf->top__DOT__store_data 
                                       >> 1U);
    }
    if ((((IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__ctrl_reg) 
          >> 5U) & (0x20000008U == vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__alu_reg))) {
        vlSelf->top__DOT__sig_end = ((vlSelf->top__DOT__store_data 
                                      >> 1U) - (IData)(1U));
    }
    if ((1U & (~ (((IData)(vlSelf->top__DOT__cpu_inst__DOT__hazard_inst__DOT__load_hazard)
                    ? 8U : 0U) >> 2U)))) {
        vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg 
            = ((((4U & (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vcellout__hazard_inst__bubble))
                  ? 0U : ((vlSelf->top__DOT__cpu_inst__DOT__id_imm 
                           >> 6U) | (vlSelf->top__DOT__cpu_inst__DOT__id_rs2 
                                     << 0x1aU))) << 6U) 
               | (((4U & (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vcellout__hazard_inst__bubble))
                    ? 0U : ((vlSelf->top__DOT__cpu_inst__DOT__id_imm 
                             << 0x1aU) | vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__id_ex_inst__ctrl_in)) 
                  >> 0x1aU));
    }
    if ((1U & (~ (((IData)(vlSelf->top__DOT__cpu_inst__DOT__hazard_inst__DOT__load_hazard)
                    ? 8U : 0U) >> 2U)))) {
        vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
            = ((4U & (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vcellout__hazard_inst__bubble))
                ? 0U : (0x3ffffffU & vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__id_ex_inst__ctrl_in));
    }
    if ((1U & (~ (((IData)(vlSelf->top__DOT__cpu_inst__DOT__hazard_inst__DOT__load_hazard)
                    ? 8U : 0U) >> 1U)))) {
        vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__rd_reg 
            = (0x1fU & (((2U & (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vcellout__hazard_inst__bubble))
                          ? 0U : (((IData)(vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__rd_reg) 
                                   << 6U) | ((IData)(
                                                     ((((QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__fwd_rs2)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_alu))) 
                                                      >> 0x20U)) 
                                             >> 0x1aU))) 
                        >> 6U));
    }
    vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__rvc_imm_gen_inst__DOT__uimm0_d 
        = ((0xc0U & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                     << 1U)) | (0x38U & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                         >> 7U)));
    vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__rvc_imm_gen_inst__DOT__uimm0_w 
        = ((0x40U & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                     << 1U)) | ((0x38U & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                          >> 7U)) | 
                                (4U & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                       >> 4U))));
    vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__rvc_imm_gen_inst__DOT__imm1 
        = VL_EXTENDS_II(32,6, ((0x20U & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                         >> 7U)) | 
                               (0x1fU & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                         >> 2U))));
    vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__rvc_imm_gen_inst__DOT__imm1_j 
        = VL_EXTENDS_II(32,12, ((0x800U & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                           >> 1U)) 
                                | ((0x400U & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                              << 2U)) 
                                   | ((0x300U & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                 >> 1U)) 
                                      | ((0x80U & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                   << 1U)) 
                                         | ((0x40U 
                                             & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                >> 1U)) 
                                            | ((0x20U 
                                                & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                   << 3U)) 
                                               | ((0x10U 
                                                   & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                      >> 7U)) 
                                                  | (0xeU 
                                                     & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                        >> 2U))))))))));
    vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__rvc_imm_gen_inst__DOT__uimm2_ld 
        = ((0x1c0U & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                      << 4U)) | ((0x20U & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                           >> 7U)) 
                                 | (0x18U & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                             >> 2U))));
    vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__rvc_imm_gen_inst__DOT__uimm2_sd 
        = ((0x1c0U & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                      >> 1U)) | (0x38U & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                          >> 7U)));
    if ((0U == (3U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg))) {
        vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__itype 
            = ((0x8000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                ? ((0x4000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                    ? 5U : ((0x2000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                             ? 5U : 0U)) : ((0x4000U 
                                             & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                                             ? 4U : 
                                            ((0x2000U 
                                              & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                                              ? 4U : 3U)));
        vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm 
            = ((0x8000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                ? ((0x4000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                    ? ((0x2000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                        ? vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__rvc_imm_gen_inst__DOT__uimm0_d
                        : vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__rvc_imm_gen_inst__DOT__uimm0_w)
                    : ((0x2000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                        ? vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__rvc_imm_gen_inst__DOT__uimm0_d
                        : 0U)) : ((0x4000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                                   ? ((0x2000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                                       ? vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__rvc_imm_gen_inst__DOT__uimm0_d
                                       : vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__rvc_imm_gen_inst__DOT__uimm0_w)
                                   : ((0x2000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                                       ? vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__rvc_imm_gen_inst__DOT__uimm0_d
                                       : ((0x3c0U & 
                                           (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                            >> 1U)) 
                                          | ((0x30U 
                                              & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                 >> 7U)) 
                                             | ((8U 
                                                 & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                    >> 2U)) 
                                                | (4U 
                                                   & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                      >> 4U))))))));
    } else {
        vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__itype 
            = ((1U == (3U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg))
                ? ((0x8000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                    ? ((0x4000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                        ? 6U : ((0x2000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                                 ? 7U : 6U)) : ((0x4000U 
                                                 & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                                                 ? 1U
                                                 : 
                                                ((0x2000U 
                                                  & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                                                  ? 7U
                                                  : 1U)))
                : ((2U == (3U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg))
                    ? ((0x8000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                        ? ((0x4000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                            ? 2U : ((0x2000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                                     ? 2U : 0U)) : 1U)
                    : 0U));
        vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm 
            = ((1U == (3U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg))
                ? ((0x8000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                    ? ((0x4000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                        ? VL_EXTENDS_II(32,9, ((0x100U 
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
                                                              >> 2U)))))))
                        : ((0x2000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                            ? vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__rvc_imm_gen_inst__DOT__imm1_j
                            : vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__rvc_imm_gen_inst__DOT__imm1))
                    : ((0x4000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                        ? ((0x2000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                            ? ((2U == (0x1fU & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                >> 7U)))
                                ? VL_EXTENDS_II(32,10, 
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
                                                                >> 2U)))))))
                                : VL_EXTENDS_II(32,18, 
                                                ((0x20000U 
                                                  & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                     << 5U)) 
                                                 | (0x1f000U 
                                                    & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                       << 0xaU)))))
                            : vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__rvc_imm_gen_inst__DOT__imm1)
                        : ((0x2000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                            ? vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__rvc_imm_gen_inst__DOT__imm1_j
                            : vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__rvc_imm_gen_inst__DOT__imm1)))
                : ((2U == (3U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg))
                    ? ((0x8000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                        ? ((0x4000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                            ? ((0x2000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                                ? vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__rvc_imm_gen_inst__DOT__uimm2_sd
                                : ((0xc0U & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                             >> 1U)) 
                                   | (0x3cU & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                               >> 7U))))
                            : ((0x2000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                                ? vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__rvc_imm_gen_inst__DOT__uimm2_sd
                                : 0U)) : ((0x4000U 
                                           & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                                           ? ((0x2000U 
                                               & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                                               ? vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__rvc_imm_gen_inst__DOT__uimm2_ld
                                               : ((0xc0U 
                                                   & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                      << 4U)) 
                                                  | ((0x20U 
                                                      & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                         >> 7U)) 
                                                     | (0x1cU 
                                                        & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                           >> 2U)))))
                                           : ((0x2000U 
                                               & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                                               ? vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__rvc_imm_gen_inst__DOT__uimm2_ld
                                               : ((0x20U 
                                                   & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                      >> 7U)) 
                                                  | (0x1fU 
                                                     & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                        >> 2U))))))
                    : 0U));
    }
    vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs1 
        = (0x1fU & (((0U == (IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__itype)) 
                     | (1U == (IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__itype)))
                     ? (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                        >> 7U) : (8U | (7U & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                              >> 7U)))));
    vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs2 
        = (0x1fU & (((0U == (IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__itype)) 
                     | (2U == (IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__itype)))
                     ? (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                        >> 2U) : (8U | (7U & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                              >> 2U)))));
    if ((1U & (~ (((IData)(vlSelf->top__DOT__cpu_inst__DOT__hazard_inst__DOT__load_hazard)
                    ? 8U : 0U) >> 1U)))) {
        vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__ctrl_reg 
            = ((2U & (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vcellout__hazard_inst__bubble))
                ? 0U : (0x3fU & (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__ex_mem_inst__ctrl_in)));
    }
    if ((1U & (~ (((IData)(vlSelf->top__DOT__cpu_inst__DOT__hazard_inst__DOT__load_hazard)
                    ? 8U : 0U) >> 1U)))) {
        vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__alu_reg 
            = ((((2U & (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vcellout__hazard_inst__bubble))
                  ? 0U : (((IData)((((QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__fwd_rs2)) 
                                     << 0x20U) | (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_alu)))) 
                           >> 0x1aU) | ((IData)(((((QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__fwd_rs2)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_alu))) 
                                                 >> 0x20U)) 
                                        << 6U))) << 0x1aU) 
               | (((2U & (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vcellout__hazard_inst__bubble))
                    ? 0U : (((IData)((((QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__fwd_rs2)) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_alu)))) 
                             << 6U) | (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__ex_mem_inst__ctrl_in))) 
                  >> 6U));
    }
    vlSelf->top__DOT__cpu_inst__DOT__csr_o = ((((((
                                                   (((0x305U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg)) 
                                                     | (0x341U 
                                                        == 
                                                        (0xfffU 
                                                         & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
                                                    | (0x342U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
                                                   | (0x304U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
                                                  | (0x344U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
                                                 | (0x343U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
                                                | (0x340U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))) 
                                               | (0x300U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg)))
                                               ? ((0x305U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))
                                                   ? vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mtvec
                                                   : 
                                                  ((0x341U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))
                                                    ? vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mepc
                                                    : 
                                                   ((0x342U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))
                                                     ? vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mcause
                                                     : 
                                                    ((0x304U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))
                                                      ? vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__csr_reg_inst__DOT__mie
                                                      : 
                                                     ((0x344U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))
                                                       ? vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__csr_reg_inst__DOT__mip
                                                       : 
                                                      ((0x343U 
                                                        == 
                                                        (0xfffU 
                                                         & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))
                                                        ? vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mtval
                                                        : 
                                                       ((0x340U 
                                                         == 
                                                         (0xfffU 
                                                          & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg))
                                                         ? vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__csr_reg_inst__DOT__mscratch
                                                         : vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mstatus)))))))
                                               : 0U);
    vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rd 
        = (((3U == (IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__itype)) 
            | (4U == (IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rvc_decode_inst__DOT__itype)))
            ? (IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs2)
            : (IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs1));
    vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__ex_mem_inst__ctrl_in 
        = ((0x20U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                     >> 5U)) | ((0x10U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                          >> 5U)) | 
                                ((8U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                        >> 5U)) | (7U 
                                                   & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                                      >> 1U)))));
    vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__c_inst 
        = ((0U == (3U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg))
            ? ((0x8000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                ? ((0x4000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                    ? ((0x2000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                        ? (0x3023U | ((0xfe000000U 
                                       & (vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm 
                                          << 0x14U)) 
                                      | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs2) 
                                          << 0x14U) 
                                         | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs1) 
                                             << 0xfU) 
                                            | (0xf80U 
                                               & (vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm 
                                                  << 7U))))))
                        : (0x2023U | ((0xfe000000U 
                                       & (vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm 
                                          << 0x14U)) 
                                      | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs2) 
                                          << 0x14U) 
                                         | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs1) 
                                             << 0xfU) 
                                            | (0xf80U 
                                               & (vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm 
                                                  << 7U)))))))
                    : 0U) : ((0x4000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                              ? ((0x2000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                                  ? (0x3003U | ((vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm 
                                                 << 0x14U) 
                                                | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs1) 
                                                    << 0xfU) 
                                                   | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rd) 
                                                      << 7U))))
                                  : (0x2003U | ((vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm 
                                                 << 0x14U) 
                                                | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs1) 
                                                    << 0xfU) 
                                                   | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rd) 
                                                      << 7U)))))
                              : ((0x2000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                                  ? 0U : (0x10013U 
                                          | ((vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm 
                                              << 0x14U) 
                                             | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rd) 
                                                << 7U))))))
            : ((1U == (3U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg))
                ? ((0x8000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                    ? ((0x4000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                        ? ((0x2000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                            ? (0x1063U | ((0x80000000U 
                                           & (vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm 
                                              << 0x13U)) 
                                          | ((0x7e000000U 
                                              & (vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm 
                                                 << 0x14U)) 
                                             | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs1) 
                                                 << 0xfU) 
                                                | ((0xf00U 
                                                    & (vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm 
                                                       << 7U)) 
                                                   | (0x80U 
                                                      & (vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm 
                                                         >> 4U)))))))
                            : (0x63U | ((0x80000000U 
                                         & (vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm 
                                            << 0x13U)) 
                                        | ((0x7e000000U 
                                            & (vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm 
                                               << 0x14U)) 
                                           | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs1) 
                                               << 0xfU) 
                                              | ((0xf00U 
                                                  & (vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm 
                                                     << 7U)) 
                                                 | (0x80U 
                                                    & (vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm 
                                                       >> 4U))))))))
                        : ((0x2000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                            ? (0x6fU | ((0x80000000U 
                                         & (vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm 
                                            << 0xbU)) 
                                        | ((0x7fe00000U 
                                            & (vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm 
                                               << 0x14U)) 
                                           | ((0x100000U 
                                               & (vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm 
                                                  << 9U)) 
                                              | (0xff000U 
                                                 & vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm)))))
                            : ((0U == (3U & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                             >> 0xaU)))
                                ? (0x5013U | ((0x1f00000U 
                                               & (vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm 
                                                  << 0x14U)) 
                                              | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rd) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rd) 
                                                    << 7U))))
                                : ((1U == (3U & (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                 >> 0xaU)))
                                    ? (0x40005013U 
                                       | ((0x1f00000U 
                                           & (vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm 
                                              << 0x14U)) 
                                          | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rd) 
                                              << 0xfU) 
                                             | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rd) 
                                                << 7U))))
                                    : ((2U == (3U & 
                                               (vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg 
                                                >> 0xaU)))
                                        ? (0x7013U 
                                           | ((vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm 
                                               << 0x14U) 
                                              | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rd) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rd) 
                                                    << 7U))))
                                        : ((0x1000U 
                                            & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                                            ? ((0x40U 
                                                & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                                                ? 0U
                                                : (
                                                   (0x20U 
                                                    & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                                                    ? 
                                                   (0x33U 
                                                    | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs2) 
                                                        << 0x14U) 
                                                       | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rd) 
                                                           << 0xfU) 
                                                          | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rd) 
                                                             << 7U))))
                                                    : 
                                                   (0x40000033U 
                                                    | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs2) 
                                                        << 0x14U) 
                                                       | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rd) 
                                                           << 0xfU) 
                                                          | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rd) 
                                                             << 7U))))))
                                            : ((0x40U 
                                                & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                                                ? (
                                                   (0x20U 
                                                    & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                                                    ? 
                                                   (0x7033U 
                                                    | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs2) 
                                                        << 0x14U) 
                                                       | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rd) 
                                                           << 0xfU) 
                                                          | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rd) 
                                                             << 7U))))
                                                    : 
                                                   (0x6033U 
                                                    | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs2) 
                                                        << 0x14U) 
                                                       | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rd) 
                                                           << 0xfU) 
                                                          | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rd) 
                                                             << 7U)))))
                                                : (
                                                   (0x20U 
                                                    & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                                                    ? 
                                                   (0x4033U 
                                                    | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs2) 
                                                        << 0x14U) 
                                                       | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rd) 
                                                           << 0xfU) 
                                                          | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rd) 
                                                             << 7U))))
                                                    : 
                                                   (0x40000033U 
                                                    | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs2) 
                                                        << 0x14U) 
                                                       | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rd) 
                                                           << 0xfU) 
                                                          | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rd) 
                                                             << 7U))))))))))))
                    : ((0x4000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                        ? ((0x2000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                            ? ((2U == (IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs1))
                                ? (0x10113U | (vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm 
                                               << 0x14U))
                                : (0x37U | ((0xfffff000U 
                                             & vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm) 
                                            | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rd) 
                                               << 7U))))
                            : (0x13U | ((vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm 
                                         << 0x14U) 
                                        | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rd) 
                                           << 7U))))
                        : ((0x2000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                            ? (0xefU | ((0x80000000U 
                                         & (vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm 
                                            << 0xbU)) 
                                        | ((0x7fe00000U 
                                            & (vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm 
                                               << 0x14U)) 
                                           | ((0x100000U 
                                               & (vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm 
                                                  << 9U)) 
                                              | (0xff000U 
                                                 & vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm)))))
                            : (0x13U | ((vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm 
                                         << 0x14U) 
                                        | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rd) 
                                            << 0xfU) 
                                           | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rd) 
                                              << 7U)))))))
                : ((2U == (3U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg))
                    ? ((0x8000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                        ? ((0x4000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                            ? ((0x2000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                                ? (0x13023U | ((0xfe000000U 
                                                & (vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm 
                                                   << 0x14U)) 
                                               | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs2) 
                                                   << 0x14U) 
                                                  | (0xf80U 
                                                     & (vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm 
                                                        << 7U)))))
                                : (0x12023U | ((0xfe000000U 
                                                & (vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm 
                                                   << 0x14U)) 
                                               | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs2) 
                                                   << 0x14U) 
                                                  | (0xf80U 
                                                     & (vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm 
                                                        << 7U))))))
                            : ((0x1000U & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                                ? ((0U != (IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs1))
                                    ? ((0U != (IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs2))
                                        ? (0x33U | 
                                           (((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs2) 
                                             << 0x14U) 
                                            | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rd) 
                                                << 0xfU) 
                                               | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rd) 
                                                  << 7U))))
                                        : (0xe7U | 
                                           ((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs1) 
                                            << 0xfU)))
                                    : ((0U != (IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs2))
                                        ? 0U : 0x100073U))
                                : ((0U != (IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs1))
                                    ? ((0U != (IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs2))
                                        ? (0x33U | 
                                           (((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs2) 
                                             << 0x14U) 
                                            | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rd) 
                                               << 7U)))
                                        : (0x67U | 
                                           ((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs1) 
                                            << 0xfU)))
                                    : 0U))) : ((0x4000U 
                                                & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                                                ? (
                                                   (0x2000U 
                                                    & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                                                    ? 
                                                   (0x13003U 
                                                    | ((vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm 
                                                        << 0x14U) 
                                                       | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rd) 
                                                          << 7U)))
                                                    : 
                                                   (0x12003U 
                                                    | ((vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm 
                                                        << 0x14U) 
                                                       | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rd) 
                                                          << 7U))))
                                                : (
                                                   (0x2000U 
                                                    & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)
                                                     ? 
                                                    ((0U 
                                                      != (IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs1))
                                                      ? 
                                                     ((0U 
                                                       != (IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs2))
                                                       ? 
                                                      (0x33U 
                                                       | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs2) 
                                                           << 0x14U) 
                                                          | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rd) 
                                                              << 0xfU) 
                                                             | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rd) 
                                                                << 7U))))
                                                       : 
                                                      (0xe7U 
                                                       | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs1) 
                                                          << 0xfU)))
                                                      : 
                                                     ((0U 
                                                       != (IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs2))
                                                       ? 0U
                                                       : 0x100073U))
                                                     : 
                                                    ((0U 
                                                      != (IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs1))
                                                      ? 
                                                     ((0U 
                                                       != (IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs2))
                                                       ? 
                                                      (0x33U 
                                                       | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs2) 
                                                           << 0x14U) 
                                                          | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rd) 
                                                             << 7U)))
                                                       : 
                                                      (0x67U 
                                                       | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rs1) 
                                                          << 0xfU)))
                                                      : 0U))
                                                    : 
                                                   (0x1013U 
                                                    | ((0x1f00000U 
                                                        & (vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__imm 
                                                           << 0x14U)) 
                                                       | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rd) 
                                                           << 0xfU) 
                                                          | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__rvc_inst__DOT__rd) 
                                                             << 7U)))))))
                    : 0U)));
    vlSelf->top__DOT__cpu_inst__DOT__fwd_rs2 = (((0U 
                                                  != (IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__rd_reg)) 
                                                 & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__rd_reg) 
                                                    == (IData)(vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__rs2_fwd_reg)))
                                                 ? vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__alu_reg
                                                 : 
                                                (((0U 
                                                   != (IData)(vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst__DOT__genblk1__DOT__rd_reg)) 
                                                  & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst__DOT__genblk1__DOT__rd_reg) 
                                                     == (IData)(vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__rs2_fwd_reg)))
                                                  ? vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst__DOT__genblk1__DOT__alu_reg
                                                  : vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__rs2_reg));
    vlSelf->top__DOT__cpu_inst__DOT__fwd_rs1 = (((0U 
                                                  != (IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__rd_reg)) 
                                                 & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__rd_reg) 
                                                    == (IData)(vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__rs1_fwd_reg)))
                                                 ? vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__alu_reg
                                                 : 
                                                (((0U 
                                                   != (IData)(vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst__DOT__genblk1__DOT__rd_reg)) 
                                                  & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst__DOT__genblk1__DOT__rd_reg) 
                                                     == (IData)(vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__rs1_fwd_reg)))
                                                  ? vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst__DOT__genblk1__DOT__alu_reg
                                                  : vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__rs1_reg));
    if ((1U & (~ (((IData)(vlSelf->top__DOT__cpu_inst__DOT__hazard_inst__DOT__load_hazard)
                    ? 8U : 0U) >> 2U)))) {
        vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__rd_reg 
            = (0x1fU & (((4U & (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vcellout__hazard_inst__bubble))
                          ? 0U : (((IData)(vlSelf->top__DOT__cpu_inst__DOT__rd) 
                                   << 4U) | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__rs1) 
                                             >> 1U))) 
                        >> 4U));
    }
    vlSelf->top__DOT__cpu_inst__DOT__id_inst = ((3U 
                                                 != 
                                                 (3U 
                                                  & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg))
                                                 ? vlSelf->top__DOT__cpu_inst__DOT__genblk1__DOT__c_inst
                                                 : vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg);
    vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__alu_inst__rs2 
        = ((0x80000U & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
            ? vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__imm_reg
            : vlSelf->top__DOT__cpu_inst__DOT__fwd_rs2);
    if ((0x2000000U & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)) {
        if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                      >> 0x18U)))) {
            if ((1U & (~ (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                          >> 0x17U)))) {
                vlSelf->top__DOT__cpu_inst__DOT__genblk2__DOT__mul_inst__DOT__xrd 
                    = ((0x400000U & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                        ? ((0x200000U & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                            ? (IData)(((QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__fwd_rs1)) 
                                       * (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__fwd_rs2))))
                            : (IData)(VL_MULS_QQQ(64,64,64, 
                                                  VL_EXTENDS_QI(64,32, vlSelf->top__DOT__cpu_inst__DOT__fwd_rs1), 
                                                  VL_EXTENDS_QQ(64,33, (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__fwd_rs2))))))
                        : ((0x200000U & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                            ? (IData)(VL_MULS_QQQ(64,64,64, 
                                                  VL_EXTENDS_QI(64,32, vlSelf->top__DOT__cpu_inst__DOT__fwd_rs1), 
                                                  VL_EXTENDS_QI(64,32, vlSelf->top__DOT__cpu_inst__DOT__fwd_rs2)))
                            : (IData)((VL_MULS_QQQ(64,64,64, 
                                                   VL_EXTENDS_QI(64,32, vlSelf->top__DOT__cpu_inst__DOT__fwd_rs1), 
                                                   VL_EXTENDS_QI(64,32, vlSelf->top__DOT__cpu_inst__DOT__fwd_rs2)) 
                                       >> 0x20U))));
            }
        }
    }
    vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__csr_inst__data_in 
        = ((0x2000U & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
            ? (IData)(vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__rs1_fwd_reg)
            : vlSelf->top__DOT__cpu_inst__DOT__fwd_rs1);
    vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__alu_inst__rs1 
        = ((0x100000U & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
            ? vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__pc_reg
            : vlSelf->top__DOT__cpu_inst__DOT__fwd_rs1);
    vlSelf->top__DOT__cpu_inst__DOT__s_csr = ((0x73U 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__cpu_inst__DOT__id_inst)) 
                                              & ((((((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                          >> 0xcU))) 
                                                     | (2U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                            >> 0xcU)))) 
                                                    | (3U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                           >> 0xcU)))) 
                                                   | (5U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                          >> 0xcU)))) 
                                                  | (6U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                         >> 0xcU)))) 
                                                 | (7U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                        >> 0xcU)))));
    vlSelf->top__DOT__cpu_inst__DOT__s_flush = (IData)(
                                                       (0x100fU 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__cpu_inst__DOT__id_inst)));
    vlSelf->top__DOT__cpu_inst__DOT__s_jalr = (IData)(
                                                      (0x67U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__cpu_inst__DOT__id_inst)));
    vlSelf->top__DOT__cpu_inst__DOT__s_pc = ((0x17U 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__cpu_inst__DOT__id_inst)) 
                                             | (0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__cpu_inst__DOT__id_inst)));
    vlSelf->top__DOT__cpu_inst__DOT__s_load = ((3U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__cpu_inst__DOT__id_inst)) 
                                               & (((((((0U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                            >> 0xcU))) 
                                                       | (1U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                              >> 0xcU)))) 
                                                      | (2U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                             >> 0xcU)))) 
                                                     | (3U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                            >> 0xcU)))) 
                                                    | (4U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                           >> 0xcU)))) 
                                                   | (5U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                          >> 0xcU)))) 
                                                  | (6U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                         >> 0xcU)))));
    vlSelf->top__DOT__cpu_inst__DOT__s_store = ((0x23U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__cpu_inst__DOT__id_inst)) 
                                                & ((((0U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                          >> 0xcU))) 
                                                     | (1U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                            >> 0xcU)))) 
                                                    | (2U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                           >> 0xcU)))) 
                                                   | (3U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                          >> 0xcU)))));
    __Vtableidx1 = (0x7fU & vlSelf->top__DOT__cpu_inst__DOT__id_inst);
    vlSelf->top__DOT__cpu_inst__DOT__ins_type = Vtop__ConstPool__TABLE_f8641288_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__data_w 
        = ((4U & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
            ? ((2U & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                ? (vlSelf->top__DOT__cpu_inst__DOT__csr_o 
                   & (~ vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__csr_inst__data_in))
                : (vlSelf->top__DOT__cpu_inst__DOT__csr_o 
                   | vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__csr_inst__data_in))
            : ((2U & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                ? vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__csr_inst__data_in
                : vlSelf->top__DOT__cpu_inst__DOT__csr_o));
    vlSelf->top__DOT__cpu_inst__DOT__alu_o = ((0x2000000U 
                                               & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                               ? 0xffffffffU
                                               : ((0x1000000U 
                                                   & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                                   ? 
                                                  ((0x800000U 
                                                    & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                                    ? 0xffffffffU
                                                    : 
                                                   ((0x400000U 
                                                     & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                                     ? 
                                                    ((0x200000U 
                                                      & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                                      ? 0xffffffffU
                                                      : 
                                                     ((0x40000U 
                                                       & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                                       ? 
                                                      VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__alu_inst__rs1, 
                                                                     (0x1fU 
                                                                      & vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__alu_inst__rs2))
                                                       : 
                                                      VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__alu_inst__rs1, 
                                                                     (0x1fU 
                                                                      & vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__alu_inst__rs2))))
                                                     : 
                                                    ((0x200000U 
                                                      & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                                      ? 
                                                     ((0x40000U 
                                                       & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                                       ? 
                                                      (vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__alu_inst__rs1 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__alu_inst__rs2))
                                                       : 
                                                      (vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__alu_inst__rs1 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__alu_inst__rs2)))
                                                      : 
                                                     ((0x40000U 
                                                       & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                                       ? 
                                                      (vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__alu_inst__rs1 
                                                       << 
                                                       (0x1fU 
                                                        & vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__alu_inst__rs2))
                                                       : 
                                                      (vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__alu_inst__rs1 
                                                       << 
                                                       (0x1fU 
                                                        & vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__alu_inst__rs2))))))
                                                   : 
                                                  ((0x800000U 
                                                    & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                                    ? 
                                                   ((0x400000U 
                                                     & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                                     ? 
                                                    ((0x200000U 
                                                      & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                                      ? 
                                                     (vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__alu_inst__rs1 
                                                      ^ vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__alu_inst__rs2)
                                                      : 
                                                     (vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__alu_inst__rs1 
                                                      | vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__alu_inst__rs2))
                                                     : 
                                                    ((0x200000U 
                                                      & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                                      ? 
                                                     (vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__alu_inst__rs1 
                                                      & vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__alu_inst__rs2)
                                                      : 
                                                     (vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__alu_inst__rs1 
                                                      < vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__alu_inst__rs2)))
                                                    : 
                                                   ((0x400000U 
                                                     & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                                     ? 
                                                    ((0x200000U 
                                                      & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                                      ? 
                                                     VL_LTS_III(32,32,32, vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__alu_inst__rs1, vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__alu_inst__rs2)
                                                      : 
                                                     (vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__alu_inst__rs1 
                                                      - vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__alu_inst__rs2))
                                                     : 
                                                    ((0x200000U 
                                                      & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                                      ? 
                                                     (vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__alu_inst__rs1 
                                                      + vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__alu_inst__rs2)
                                                      : 0xffffffffU)))));
    if ((1U & (~ (((IData)(vlSelf->top__DOT__cpu_inst__DOT__hazard_inst__DOT__load_hazard)
                    ? 8U : 0U) >> 3U)))) {
        vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__pc_reg 
            = (IData)((((8U & (IData)(vlSelf->top__DOT__cpu_inst__DOT____Vcellout__hazard_inst__bubble))
                         ? 0x13ULL : (((QData)((IData)(vlSelf->top__DOT__pc)) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__old_data2)))) 
                       >> 0x20U));
    }
    vlSelf->top__DOT__cpu_inst__DOT__rd = (((2U == (IData)(vlSelf->top__DOT__cpu_inst__DOT__ins_type)) 
                                            | (3U == (IData)(vlSelf->top__DOT__cpu_inst__DOT__ins_type)))
                                            ? 0U : 
                                           (0x1fU & 
                                            (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                             >> 7U)));
    vlSelf->top__DOT__cpu_inst__DOT__rs2 = ((((1U == (IData)(vlSelf->top__DOT__cpu_inst__DOT__ins_type)) 
                                              | (4U 
                                                 == (IData)(vlSelf->top__DOT__cpu_inst__DOT__ins_type))) 
                                             | (5U 
                                                == (IData)(vlSelf->top__DOT__cpu_inst__DOT__ins_type)))
                                             ? 0U : 
                                            (0x1fU 
                                             & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                >> 0x14U)));
    vlSelf->top__DOT__cpu_inst__DOT__id_imm = ((1U 
                                                == (IData)(vlSelf->top__DOT__cpu_inst__DOT__ins_type))
                                                ? VL_EXTENDS_II(32,12, 
                                                                (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                                 >> 0x14U))
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->top__DOT__cpu_inst__DOT__ins_type))
                                                    ? 
                                                   VL_EXTENDS_II(32,12, 
                                                                 ((0xfe0U 
                                                                   & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                                        >> 7U))))
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->top__DOT__cpu_inst__DOT__ins_type))
                                                     ? 
                                                    VL_EXTENDS_II(32,13, 
                                                                  ((0x1000U 
                                                                    & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                                       >> 0x13U)) 
                                                                   | ((0x800U 
                                                                       & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                                          << 4U)) 
                                                                      | ((0x7e0U 
                                                                          & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                                             >> 0x14U)) 
                                                                         | (0x1eU 
                                                                            & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                                               >> 7U))))))
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->top__DOT__cpu_inst__DOT__ins_type))
                                                      ? 
                                                     (0xfffff000U 
                                                      & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->top__DOT__cpu_inst__DOT__ins_type))
                                                       ? 
                                                      VL_EXTENDS_II(32,21, 
                                                                    ((0x100000U 
                                                                      & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                                         >> 0xbU)) 
                                                                     | ((0xff000U 
                                                                         & vlSelf->top__DOT__cpu_inst__DOT__id_inst) 
                                                                        | ((0x800U 
                                                                            & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                                               >> 9U)) 
                                                                           | (0x7feU 
                                                                              & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                                                >> 0x14U))))))
                                                       : 0U)))));
    vlSelf->top__DOT__cpu_inst__DOT__rs1 = (((4U == (IData)(vlSelf->top__DOT__cpu_inst__DOT__ins_type)) 
                                             | (5U 
                                                == (IData)(vlSelf->top__DOT__cpu_inst__DOT__ins_type)))
                                             ? 0U : 
                                            (0x1fU 
                                             & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                >> 0xfU)));
    vlSelf->top__DOT__cpu_inst__DOT__branch_take = 
        (1U & ((vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                >> 0x10U) & (~ ((vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                 >> 0xfU) ^ (0U == vlSelf->top__DOT__cpu_inst__DOT__alu_o)))));
    vlSelf->top__DOT__cpu_inst__DOT__alu_mux = ((5U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                                     >> 0x17U)))
                                                 ? 
                                                ((0x2000000U 
                                                  & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                                  ? 
                                                 ((0x1000000U 
                                                   & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                                   ? 0U
                                                   : 
                                                  ((0x800000U 
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
                                                  : 0U)
                                                 : 
                                                ((4U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                                      >> 0x17U)))
                                                  ? 
                                                 ((0x2000000U 
                                                   & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                                   ? 
                                                  ((0x1000000U 
                                                    & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                                    ? 0U
                                                    : 
                                                   ((0x800000U 
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
                                                   : 0U)
                                                  : vlSelf->top__DOT__cpu_inst__DOT__alu_o));
    vlSelf->top__DOT__pc = __Vdly__top__DOT__pc;
    vlSelf->top__DOT__cpu_inst__DOT__id_alu_op = (0x1fU 
                                                  & ((0x40U 
                                                      & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                      ? 
                                                     ((0x20U 
                                                       & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                       ? 
                                                      ((0x10U 
                                                        & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                        ? 
                                                       (((((IData)(vlSelf->top__DOT__cpu_inst__DOT__s_load) 
                                                           | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_store)) 
                                                          | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_pc)) 
                                                         | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_jalr))
                                                         ? 1U
                                                         : 0U)
                                                        : 
                                                       ((8U 
                                                         & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                         ? 
                                                        (((((IData)(vlSelf->top__DOT__cpu_inst__DOT__s_load) 
                                                            | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_store)) 
                                                           | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_pc)) 
                                                          | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_jalr))
                                                          ? 1U
                                                          : 0U)
                                                         : 
                                                        ((4U 
                                                          & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                          ? 
                                                         (((((IData)(vlSelf->top__DOT__cpu_inst__DOT__s_load) 
                                                             | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_store)) 
                                                            | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_pc)) 
                                                           | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_jalr))
                                                           ? 1U
                                                           : 0U)
                                                          : 
                                                         ((2U 
                                                           & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                           ? 
                                                          ((1U 
                                                            & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                            ? 
                                                           ((0x4000U 
                                                             & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                             ? 
                                                            ((0x2000U 
                                                              & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                              ? 4U
                                                              : 3U)
                                                             : 
                                                            ((0x2000U 
                                                              & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                              ? 0U
                                                              : 2U))
                                                            : 
                                                           (((((IData)(vlSelf->top__DOT__cpu_inst__DOT__s_load) 
                                                               | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_store)) 
                                                              | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_pc)) 
                                                             | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_jalr))
                                                             ? 1U
                                                             : 0U))
                                                           : 
                                                          (((((IData)(vlSelf->top__DOT__cpu_inst__DOT__s_load) 
                                                              | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_store)) 
                                                             | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_pc)) 
                                                            | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_jalr))
                                                            ? 1U
                                                            : 0U)))))
                                                       : 
                                                      (((((IData)(vlSelf->top__DOT__cpu_inst__DOT__s_load) 
                                                          | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_store)) 
                                                         | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_pc)) 
                                                        | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_jalr))
                                                        ? 1U
                                                        : 0U))
                                                      : 
                                                     ((0x20U 
                                                       & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                       ? 
                                                      ((0x10U 
                                                        & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                        ? 
                                                       ((8U 
                                                         & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                         ? 
                                                        ((4U 
                                                          & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                          ? 
                                                         (((((IData)(vlSelf->top__DOT__cpu_inst__DOT__s_load) 
                                                             | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_store)) 
                                                            | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_pc)) 
                                                           | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_jalr))
                                                           ? 1U
                                                           : 0U)
                                                          : 
                                                         ((2U 
                                                           & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                           ? 
                                                          ((1U 
                                                            & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                            ? 
                                                           ((0U 
                                                             == 
                                                             (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                              >> 0x19U))
                                                             ? 
                                                            ((0U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                                  >> 0xcU)))
                                                              ? 1U
                                                              : 
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                                   >> 0xcU)))
                                                               ? 8U
                                                               : 
                                                              ((5U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                                    >> 0xcU)))
                                                                ? 9U
                                                                : 0U)))
                                                             : 
                                                            ((0x20U 
                                                              == 
                                                              (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                               >> 0x19U))
                                                              ? 
                                                             ((0U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                                   >> 0xcU)))
                                                               ? 2U
                                                               : 
                                                              ((5U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                                    >> 0xcU)))
                                                                ? 0xaU
                                                                : 0U))
                                                              : 
                                                             ((1U 
                                                               == 
                                                               (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                                >> 0x19U))
                                                               ? 
                                                              ((0x4000U 
                                                                & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                                ? 
                                                               ((0x2000U 
                                                                 & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                                 ? 
                                                                ((0x1000U 
                                                                  & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                                  ? 0x17U
                                                                  : 0x16U)
                                                                 : 
                                                                ((0x1000U 
                                                                  & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                                  ? 0x15U
                                                                  : 0x14U))
                                                                : 
                                                               ((0x2000U 
                                                                 & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                                 ? 0U
                                                                 : 
                                                                ((0x1000U 
                                                                  & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                                  ? 0U
                                                                  : 0x10U)))
                                                               : 0U)))
                                                            : 
                                                           (((((IData)(vlSelf->top__DOT__cpu_inst__DOT__s_load) 
                                                               | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_store)) 
                                                              | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_pc)) 
                                                             | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_jalr))
                                                             ? 1U
                                                             : 0U))
                                                           : 
                                                          (((((IData)(vlSelf->top__DOT__cpu_inst__DOT__s_load) 
                                                              | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_store)) 
                                                             | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_pc)) 
                                                            | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_jalr))
                                                            ? 1U
                                                            : 0U)))
                                                         : 
                                                        ((4U 
                                                          & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                          ? 
                                                         ((2U 
                                                           & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                           ? 
                                                          ((1U 
                                                            & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                            ? 1U
                                                            : 
                                                           (((((IData)(vlSelf->top__DOT__cpu_inst__DOT__s_load) 
                                                               | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_store)) 
                                                              | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_pc)) 
                                                             | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_jalr))
                                                             ? 1U
                                                             : 0U))
                                                           : 
                                                          (((((IData)(vlSelf->top__DOT__cpu_inst__DOT__s_load) 
                                                              | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_store)) 
                                                             | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_pc)) 
                                                            | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_jalr))
                                                            ? 1U
                                                            : 0U))
                                                          : 
                                                         ((2U 
                                                           & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                           ? 
                                                          ((1U 
                                                            & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                            ? 
                                                           ((0U 
                                                             == 
                                                             (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                              >> 0x19U))
                                                             ? 
                                                            ((0x4000U 
                                                              & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                              ? 
                                                             ((0x2000U 
                                                               & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                               ? 
                                                              ((0x1000U 
                                                                & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                                ? 5U
                                                                : 6U)
                                                               : 
                                                              ((0x1000U 
                                                                & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                                ? 9U
                                                                : 7U))
                                                              : 
                                                             ((0x2000U 
                                                               & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                               ? 
                                                              ((0x1000U 
                                                                & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                                ? 4U
                                                                : 3U)
                                                               : 
                                                              ((0x1000U 
                                                                & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                                ? 8U
                                                                : 1U)))
                                                             : 
                                                            ((0x20U 
                                                              == 
                                                              (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                               >> 0x19U))
                                                              ? 
                                                             ((0U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                                   >> 0xcU)))
                                                               ? 2U
                                                               : 
                                                              ((5U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                                    >> 0xcU)))
                                                                ? 0xaU
                                                                : 0U))
                                                              : 
                                                             ((1U 
                                                               == 
                                                               (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                                >> 0x19U))
                                                               ? 
                                                              ((0x4000U 
                                                                & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                                ? 
                                                               ((0x2000U 
                                                                 & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                                 ? 
                                                                ((0x1000U 
                                                                  & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                                  ? 0x17U
                                                                  : 0x16U)
                                                                 : 
                                                                ((0x1000U 
                                                                  & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                                  ? 0x15U
                                                                  : 0x14U))
                                                                : 
                                                               ((0x2000U 
                                                                 & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                                 ? 
                                                                ((0x1000U 
                                                                  & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                                  ? 0x13U
                                                                  : 0x12U)
                                                                 : 
                                                                ((0x1000U 
                                                                  & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                                  ? 0x11U
                                                                  : 0x10U)))
                                                               : 0U)))
                                                            : 
                                                           (((((IData)(vlSelf->top__DOT__cpu_inst__DOT__s_load) 
                                                               | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_store)) 
                                                              | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_pc)) 
                                                             | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_jalr))
                                                             ? 1U
                                                             : 0U))
                                                           : 
                                                          (((((IData)(vlSelf->top__DOT__cpu_inst__DOT__s_load) 
                                                              | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_store)) 
                                                             | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_pc)) 
                                                            | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_jalr))
                                                            ? 1U
                                                            : 0U))))
                                                        : 
                                                       (((((IData)(vlSelf->top__DOT__cpu_inst__DOT__s_load) 
                                                           | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_store)) 
                                                          | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_pc)) 
                                                         | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_jalr))
                                                         ? 1U
                                                         : 0U))
                                                       : 
                                                      ((0x10U 
                                                        & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                        ? 
                                                       ((8U 
                                                         & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                         ? 
                                                        ((4U 
                                                          & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                          ? 
                                                         (((((IData)(vlSelf->top__DOT__cpu_inst__DOT__s_load) 
                                                             | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_store)) 
                                                            | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_pc)) 
                                                           | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_jalr))
                                                           ? 1U
                                                           : 0U)
                                                          : 
                                                         ((2U 
                                                           & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                           ? 
                                                          ((1U 
                                                            & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                            ? 
                                                           ((0U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                                 >> 0xcU)))
                                                             ? 1U
                                                             : 
                                                            ((1U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                                  >> 0xcU)))
                                                              ? 
                                                             ((0U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSelf->top__DOT__cpu_inst__DOT__id_imm 
                                                                   >> 6U)))
                                                               ? 8U
                                                               : 0U)
                                                              : 
                                                             ((5U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                                   >> 0xcU)))
                                                               ? 
                                                              ((0U 
                                                                == 
                                                                (0x3fU 
                                                                 & (vlSelf->top__DOT__cpu_inst__DOT__id_imm 
                                                                    >> 6U)))
                                                                ? 9U
                                                                : 
                                                               ((0x10U 
                                                                 == 
                                                                 (0x3fU 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__id_imm 
                                                                     >> 6U)))
                                                                 ? 0xaU
                                                                 : 0U))
                                                               : 0U)))
                                                            : 
                                                           (((((IData)(vlSelf->top__DOT__cpu_inst__DOT__s_load) 
                                                               | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_store)) 
                                                              | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_pc)) 
                                                             | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_jalr))
                                                             ? 1U
                                                             : 0U))
                                                           : 
                                                          (((((IData)(vlSelf->top__DOT__cpu_inst__DOT__s_load) 
                                                              | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_store)) 
                                                             | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_pc)) 
                                                            | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_jalr))
                                                            ? 1U
                                                            : 0U)))
                                                         : 
                                                        ((4U 
                                                          & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                          ? 
                                                         (((((IData)(vlSelf->top__DOT__cpu_inst__DOT__s_load) 
                                                             | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_store)) 
                                                            | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_pc)) 
                                                           | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_jalr))
                                                           ? 1U
                                                           : 0U)
                                                          : 
                                                         ((2U 
                                                           & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                           ? 
                                                          ((1U 
                                                            & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                            ? 
                                                           ((0x4000U 
                                                             & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                             ? 
                                                            ((0x2000U 
                                                              & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                              ? 
                                                             ((0x1000U 
                                                               & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                               ? 5U
                                                               : 6U)
                                                              : 
                                                             ((0x1000U 
                                                               & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                               ? 
                                                              ((0U 
                                                                == 
                                                                (0x3fU 
                                                                 & (vlSelf->top__DOT__cpu_inst__DOT__id_imm 
                                                                    >> 6U)))
                                                                ? 9U
                                                                : 
                                                               ((0x10U 
                                                                 == 
                                                                 (0x3fU 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__id_imm 
                                                                     >> 6U)))
                                                                 ? 0xaU
                                                                 : 0U))
                                                               : 7U))
                                                             : 
                                                            ((0x2000U 
                                                              & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                              ? 
                                                             ((0x1000U 
                                                               & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                               ? 4U
                                                               : 3U)
                                                              : 
                                                             ((0x1000U 
                                                               & vlSelf->top__DOT__cpu_inst__DOT__id_inst)
                                                               ? 
                                                              ((0U 
                                                                == 
                                                                (0x3fU 
                                                                 & (vlSelf->top__DOT__cpu_inst__DOT__id_imm 
                                                                    >> 6U)))
                                                                ? 8U
                                                                : 0U)
                                                               : 1U)))
                                                            : 
                                                           (((((IData)(vlSelf->top__DOT__cpu_inst__DOT__s_load) 
                                                               | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_store)) 
                                                              | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_pc)) 
                                                             | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_jalr))
                                                             ? 1U
                                                             : 0U))
                                                           : 
                                                          (((((IData)(vlSelf->top__DOT__cpu_inst__DOT__s_load) 
                                                              | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_store)) 
                                                             | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_pc)) 
                                                            | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_jalr))
                                                            ? 1U
                                                            : 0U))))
                                                        : 
                                                       (((((IData)(vlSelf->top__DOT__cpu_inst__DOT__s_load) 
                                                           | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_store)) 
                                                          | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_pc)) 
                                                         | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_jalr))
                                                         ? 1U
                                                         : 0U)))));
    vlSelf->top__DOT__cpu_inst__DOT__hazard_inst__DOT__load_hazard 
        = ((vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
            >> 9U) & (((IData)(vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__rd_reg) 
                       == (IData)(vlSelf->top__DOT__cpu_inst__DOT__rs1)) 
                      | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__rd_reg) 
                         == (IData)(vlSelf->top__DOT__cpu_inst__DOT__rs2))));
    vlSelf->top__DOT__cpu_inst__DOT__ex_alu = ((0x4000U 
                                                & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                                ? vlSelf->top__DOT__cpu_inst__DOT__csr_o
                                                : (
                                                   (0x800U 
                                                    & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                                    ? 
                                                   (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__pc_reg 
                                                    + 
                                                    ((1U 
                                                      & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                                      ? 2U
                                                      : 4U))
                                                    : vlSelf->top__DOT__cpu_inst__DOT__alu_mux));
    vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__id_ex_inst__ctrl_in 
        = (((IData)(vlSelf->top__DOT__cpu_inst__DOT__id_alu_op) 
            << 0x15U) | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__s_pc) 
                          << 0x14U) | ((0x80000U & 
                                        ((~ ((((0x33U 
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
                                             | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_csr))) 
                                         << 0x13U)) 
                                       | ((((0x3bU 
                                             == (0x7fU 
                                                 & vlSelf->top__DOT__cpu_inst__DOT__id_inst)) 
                                            | (0x1bU 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__cpu_inst__DOT__id_inst))) 
                                           << 0x12U) 
                                          | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__s_jalr) 
                                              << 0x11U) 
                                             | ((((0x63U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__cpu_inst__DOT__id_inst)) 
                                                  & ((((((0U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                              >> 0xcU))) 
                                                         | (1U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                                >> 0xcU)))) 
                                                        | (4U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                               >> 0xcU)))) 
                                                       | (5U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                              >> 0xcU)))) 
                                                      | (6U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                             >> 0xcU)))) 
                                                     | (7U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                            >> 0xcU))))) 
                                                 << 0x10U) 
                                                | ((((0x63U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__cpu_inst__DOT__id_inst)) 
                                                     & (((0U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                              >> 0xcU))) 
                                                         | (5U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                                >> 0xcU)))) 
                                                        | (7U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                               >> 0xcU))))) 
                                                    << 0xfU) 
                                                   | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__s_csr) 
                                                       << 0xeU) 
                                                      | ((((0x73U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->top__DOT__cpu_inst__DOT__id_inst)) 
                                                           & (((5U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                                    >> 0xcU))) 
                                                               | (6U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                                      >> 0xcU)))) 
                                                              | (7U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                                     >> 0xcU))))) 
                                                          << 0xdU) 
                                                         | ((((IData)(vlSelf->top__DOT__cpu_inst__DOT__s_csr) 
                                                              & (((1U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                                       >> 0xcU))) 
                                                                  | (5U 
                                                                     == 
                                                                     (7U 
                                                                      & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                                         >> 0xcU)))) 
                                                                 | (0U 
                                                                    != (IData)(vlSelf->top__DOT__cpu_inst__DOT__rs1)))) 
                                                             << 0xcU) 
                                                            | ((((0x6fU 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->top__DOT__cpu_inst__DOT__id_inst)) 
                                                                 | (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_jalr)) 
                                                                << 0xbU) 
                                                               | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__s_store) 
                                                                   << 0xaU) 
                                                                  | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__s_load) 
                                                                      << 9U) 
                                                                     | (((IData)(vlSelf->top__DOT__cpu_inst__DOT__s_flush) 
                                                                         << 8U) 
                                                                        | (((0x73U 
                                                                             == vlSelf->top__DOT__cpu_inst__DOT__id_inst) 
                                                                            << 7U) 
                                                                           | (((0x100073U 
                                                                                == vlSelf->top__DOT__cpu_inst__DOT__id_inst) 
                                                                               << 6U) 
                                                                              | (((0x30200073U 
                                                                                == vlSelf->top__DOT__cpu_inst__DOT__id_inst) 
                                                                                << 5U) 
                                                                                | (((((((((0U 
                                                                                == (IData)(vlSelf->top__DOT__cpu_inst__DOT__id_alu_op)) 
                                                                                & (~ (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_flush))) 
                                                                                & (0x73U 
                                                                                != vlSelf->top__DOT__cpu_inst__DOT__id_inst)) 
                                                                                & (0x100073U 
                                                                                != vlSelf->top__DOT__cpu_inst__DOT__id_inst)) 
                                                                                & (0x8330000fU 
                                                                                != vlSelf->top__DOT__cpu_inst__DOT__id_inst)) 
                                                                                & (~ 
                                                                                ((IData)(
                                                                                (0xfU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top__DOT__cpu_inst__DOT__id_inst))) 
                                                                                & (0U 
                                                                                == 
                                                                                (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                                                >> 0x1cU))))) 
                                                                                & (0x30200073U 
                                                                                != vlSelf->top__DOT__cpu_inst__DOT__id_inst)) 
                                                                                << 4U) 
                                                                                | ((0xeU 
                                                                                & (vlSelf->top__DOT__cpu_inst__DOT__id_inst 
                                                                                >> 0xbU)) 
                                                                                | (3U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->top__DOT__cpu_inst__DOT__if_id_inst__DOT__genblk1__DOT__inst_reg)))))))))))))))))))));
    vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__l_misalign 
        = ((vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
            >> 9U) & ((((1U == (7U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                      >> 1U))) | (5U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                                      >> 1U)))) 
                       & vlSelf->top__DOT__cpu_inst__DOT__ex_alu) 
                      | (((2U == (7U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                        >> 1U))) | 
                          (6U == (7U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                        >> 1U)))) & 
                         (0U != (3U & vlSelf->top__DOT__cpu_inst__DOT__ex_alu)))));
    vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__s_misalign 
        = ((vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
            >> 0xaU) & (((1U == (7U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                       >> 1U))) & vlSelf->top__DOT__cpu_inst__DOT__ex_alu) 
                        | ((2U == (7U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                                         >> 1U))) & 
                           (0U != (3U & vlSelf->top__DOT__cpu_inst__DOT__ex_alu)))));
    vlSelf->top__DOT__cpu_inst__DOT__s_exception = 
        (1U & (((IData)((0U != (0xc0U & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg))) 
                | (IData)(vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__l_misalign)) 
               | (IData)(vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__s_misalign)));
    vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mstatus_next 
        = vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mstatus;
    if (((vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mstatus 
          >> 3U) & (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_exception))) {
        vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mstatus_next 
            = ((0xffffff7fU & vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mstatus_next) 
               | (0x80U & (vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mstatus 
                           << 4U)));
        vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mstatus_next 
            = (0xfffffff7U & vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mstatus_next);
    } else if ((0x20U & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)) {
        vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mstatus_next 
            = ((0xfffffff7U & vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mstatus_next) 
               | (8U & (vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mstatus 
                        >> 4U)));
    }
    vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mepc_next 
        = vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mepc;
    if (((vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mstatus 
          >> 3U) & (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_exception))) {
        vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mepc_next 
            = vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__pc_reg;
    }
    vlSelf->top__DOT__cpu_inst__DOT____Vcellout__hazard_inst__bubble 
        = ((IData)(vlSelf->top__DOT__cpu_inst__DOT__s_flush)
            ? 8U : ((IData)(vlSelf->top__DOT__cpu_inst__DOT__hazard_inst__DOT__load_hazard)
                     ? 4U : ((1U & (IData)(((0U != 
                                             (0x920U 
                                              & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)) 
                                            | (0U != 
                                               (1U 
                                                & (IData)(vlSelf->top__DOT__cpu_inst__DOT__branch_take))))))
                              ? 0xcU : ((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__s_exception) 
                                               | ((IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__ctrl_reg) 
                                                  >> 3U)))
                                         ? 0xeU : 0U))));
    vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mcause_next 
        = vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mcause;
    if (((vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mstatus 
          >> 3U) & (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_exception))) {
        vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mcause_next 
            = ((0x10U & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                ? 2U : ((0x80U & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                         ? 0xbU : ((0x40U & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                    ? 3U : ((IData)(vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__s_misalign)
                                             ? 6U : 
                                            ((IData)(vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__l_misalign)
                                              ? 4U : vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mcause)))));
    }
    vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mtval_next 
        = vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mtval;
    if (((vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mstatus 
          >> 3U) & (IData)(vlSelf->top__DOT__cpu_inst__DOT__s_exception))) {
        vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mtval_next 
            = (((IData)(vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__s_misalign) 
                | (IData)(vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__l_misalign))
                ? vlSelf->top__DOT__cpu_inst__DOT__ex_alu
                : ((0x40U & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                    ? vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__pc_reg
                    : 0U));
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__4\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__mem_inst__DOT__mem_inst__DOT__words__v0;
    SData/*15:0*/ __Vdlyvval__top__DOT__mem_inst__DOT__mem_inst__DOT__words__v0;
    SData/*15:0*/ __Vdlyvval__top__DOT__mem_inst__DOT__mem_inst__DOT__words__v1;
    IData/*31:0*/ __Vdlyvval__top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words__v0;
    IData/*19:0*/ __Vdlyvdim0__top__DOT__mem_inst__DOT__mem_inst__DOT__words__v0;
    IData/*19:0*/ __Vdlyvdim0__top__DOT__mem_inst__DOT__mem_inst__DOT__words__v1;
    // Body
    __Vdlyvset__top__DOT__mem_inst__DOT__mem_inst__DOT__words__v0 = 0U;
    __Vdlyvset__top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words__v0 = 0U;
    if ((0x20U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__ctrl_reg))) {
        vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__genblk2__DOT__i = 2U;
    }
    if ((4U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__ctrl_reg))) {
        vlSelf->top__DOT__cpu_inst__DOT__mem_data = 
            ((2U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__ctrl_reg))
              ? ((1U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__ctrl_reg))
                  ? 0U : vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__old_data1)
              : ((1U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__ctrl_reg))
                  ? (0xffffU & vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__old_data1)
                  : (0xffU & ((1U & vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__alu_reg)
                               ? (vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__old_data1 
                                  >> 8U) : vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__old_data1))));
        vlSelf->top__DOT__store_data = 0U;
    } else {
        vlSelf->top__DOT__cpu_inst__DOT__mem_data = 
            ((2U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__ctrl_reg))
              ? vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__old_data1
              : ((1U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__ctrl_reg))
                  ? VL_EXTENDS_II(32,16, (0xffffU & vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__old_data1))
                  : VL_EXTENDS_II(32,8, (0xffU & ((1U 
                                                   & vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__alu_reg)
                                                   ? 
                                                  (vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__old_data1 
                                                   >> 8U)
                                                   : vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__old_data1)))));
        vlSelf->top__DOT__store_data = ((2U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__ctrl_reg))
                                         ? vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__rs2_reg
                                         : ((1U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__ctrl_reg))
                                             ? ((0xffff0000U 
                                                 & vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__old_data1) 
                                                | (0xffffU 
                                                   & vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__rs2_reg))
                                             : ((vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__old_data1 
                                                 & (~ 
                                                    ((1U 
                                                      & vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__alu_reg)
                                                      ? 0xff00U
                                                      : 0xffU))) 
                                                | ((1U 
                                                    & vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__alu_reg)
                                                    ? 
                                                   (0xff00U 
                                                    & (vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__rs2_reg 
                                                       << 8U))
                                                    : 
                                                   (0xffU 
                                                    & vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__rs2_reg)))));
    }
    if ((0x20U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__ctrl_reg))) {
        __Vdlyvval__top__DOT__mem_inst__DOT__mem_inst__DOT__words__v0 
            = (0xffffU & vlSelf->top__DOT__store_data);
        __Vdlyvset__top__DOT__mem_inst__DOT__mem_inst__DOT__words__v0 = 1U;
        __Vdlyvdim0__top__DOT__mem_inst__DOT__mem_inst__DOT__words__v0 
            = (0xfffffU & (vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__alu_reg 
                           >> 1U));
        __Vdlyvval__top__DOT__mem_inst__DOT__mem_inst__DOT__words__v1 
            = (vlSelf->top__DOT__store_data >> 0x10U);
        __Vdlyvdim0__top__DOT__mem_inst__DOT__mem_inst__DOT__words__v1 
            = (0xfffffU & ((IData)(1U) + (vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__alu_reg 
                                          >> 1U)));
    }
    if ((0U != (IData)(vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst__DOT__genblk1__DOT__rd_reg))) {
        __Vdlyvval__top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words__v0 
            = vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst__DOT__genblk1__DOT__alu_reg;
        __Vdlyvset__top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words__v0 = 1U;
        __Vdlyvdim0__top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words__v0 
            = vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst__DOT__genblk1__DOT__rd_reg;
    }
    if (__Vdlyvset__top__DOT__mem_inst__DOT__mem_inst__DOT__words__v0) {
        vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__words[__Vdlyvdim0__top__DOT__mem_inst__DOT__mem_inst__DOT__words__v0] 
            = __Vdlyvval__top__DOT__mem_inst__DOT__mem_inst__DOT__words__v0;
        vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__words[__Vdlyvdim0__top__DOT__mem_inst__DOT__mem_inst__DOT__words__v1] 
            = __Vdlyvval__top__DOT__mem_inst__DOT__mem_inst__DOT__words__v1;
    }
    if (__Vdlyvset__top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words__v0) {
        vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words[__Vdlyvdim0__top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words__v0] 
            = __Vdlyvval__top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words__v0;
    }
}

VL_INLINE_OPT void Vtop___024root___multiclk__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___multiclk__TOP__5\n"); );
    // Body
    vlSelf->top__DOT__cpu_inst__DOT__mem_data_reg = 
        ((0x10U & (IData)(vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__ctrl_reg))
          ? vlSelf->top__DOT__cpu_inst__DOT__mem_data
          : vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__alu_reg);
    vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__old_data1 
        = ((0xffff0000U & vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__old_data1) 
           | vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__words
           [(0xfffffU & (vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__alu_reg 
                         >> 1U))]);
    vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__old_data1 
        = ((0xffffU & vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__old_data1) 
           | (vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__words
              [(0xfffffU & ((IData)(1U) + (vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst__DOT__genblk1__DOT__alu_reg 
                                           >> 1U)))] 
              << 0x10U));
    vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__old_data2 
        = ((0xffff0000U & vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__old_data2) 
           | vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__words
           [(0xfffffU & (vlSelf->top__DOT__pc >> 1U))]);
    vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__old_data2 
        = ((0xffffU & vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__old_data2) 
           | (vlSelf->top__DOT__mem_inst__DOT__mem_inst__DOT__words
              [(0xfffffU & ((IData)(1U) + (vlSelf->top__DOT__pc 
                                           >> 1U)))] 
              << 0x10U));
    vlSelf->top__DOT__cpu_inst__DOT__id_rs1 = (((0U 
                                                 != (IData)(vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst__DOT__genblk1__DOT__rd_reg)) 
                                                & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst__DOT__genblk1__DOT__rd_reg) 
                                                   == (IData)(vlSelf->top__DOT__cpu_inst__DOT__rs1)))
                                                ? vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst__DOT__genblk1__DOT__alu_reg
                                                : vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words
                                               [vlSelf->top__DOT__cpu_inst__DOT__rs1]);
    vlSelf->top__DOT__cpu_inst__DOT__id_rs2 = (((0U 
                                                 != (IData)(vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst__DOT__genblk1__DOT__rd_reg)) 
                                                & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst__DOT__genblk1__DOT__rd_reg) 
                                                   == (IData)(vlSelf->top__DOT__cpu_inst__DOT__rs2)))
                                                ? vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst__DOT__genblk1__DOT__alu_reg
                                                : vlSelf->top__DOT__cpu_inst__DOT__gpr_inst__DOT__mem_inst__DOT__words
                                               [vlSelf->top__DOT__cpu_inst__DOT__rs2]);
    vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__pc_inst__npc 
        = ((1U & ((IData)(vlSelf->top__DOT__cpu_inst__DOT__s_exception) 
                  | (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                     >> 5U))) ? (IData)((0x1ffffffffULL 
                                         & ((0x20U 
                                             & vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg)
                                             ? (QData)((IData)(vlSelf->top__DOT__cpu_inst__DOT__csr_inst__DOT__mepc))
                                             : (((1U 
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
                   & (~ (1U & (vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst__DOT__genblk1__DOT__ctrl_reg 
                               >> 0x11U)))) : (((IData)(vlSelf->top__DOT__cpu_inst__DOT__branch_take)
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
                                                    : 4U)))));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        Vtop___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((~ (IData)(vlSelf->clock)) & (IData)(vlSelf->__Vclklast__TOP__clock))) {
        Vtop___024root___sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (((IData)(vlSelf->clock) ^ (IData)(vlSelf->__Vclklast__TOP__clock))) {
        Vtop___024root___multiclk__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
