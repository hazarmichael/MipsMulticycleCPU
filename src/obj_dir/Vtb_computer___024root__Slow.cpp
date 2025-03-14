// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_computer.h for the primary calling header

#include "Vtb_computer__pch.h"
#include "Vtb_computer__Syms.h"
#include "Vtb_computer___024root.h"

void Vtb_computer___024root___ctor_var_reset(Vtb_computer___024root* vlSelf);

Vtb_computer___024root::Vtb_computer___024root(Vtb_computer__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_computer___024root___ctor_var_reset(this);
}

void Vtb_computer___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_computer___024root::~Vtb_computer___024root() {
}
