// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024unit.h"
#include "Vtop__Syms.h"

//==========


void Vtop___024unit___ctor_var_reset(Vtop___024unit* vlSelf);

Vtop___024unit::Vtop___024unit(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024unit___ctor_var_reset(this);
}

void Vtop___024unit::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024unit::~Vtop___024unit() {
}

void Vtop___024unit___ctor_var_reset(Vtop___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit___ctor_var_reset\n"); );
}
