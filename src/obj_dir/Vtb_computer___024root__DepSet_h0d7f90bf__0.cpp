// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_computer.h for the primary calling header

#include "Vtb_computer__pch.h"
#include "Vtb_computer__Syms.h"
#include "Vtb_computer___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_computer___024root___eval_initial__TOP__Vtiming__0(Vtb_computer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_computer___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("Starting test\n",0);
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_computer__DOT__clk = 1U;
    vlSelfRef.tb_computer__DOT__reset = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb_computer.v", 
                                         15);
    vlSelfRef.tb_computer__DOT__reset = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb_computer.v", 
                                         17);
    vlSelfRef.tb_computer__DOT__reset = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x7a1200ULL, 
                                         nullptr, "tb_computer.v", 
                                         20);
    VL_FINISH_MT("tb_computer.v", 20, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_computer___024root___dump_triggers__act(Vtb_computer___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_computer___024root___eval_triggers__act(Vtb_computer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_computer___024root___eval_triggers__act\n"); );
    Vtb_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, (vlSelfRef.tb_computer__DOT__data_out_instruction 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__tb_computer__DOT__data_out_instruction__0));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.tb_computer__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_computer__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(2U, 0U);
    vlSelfRef.__VactTriggered.set(3U, ((~ (IData)(vlSelfRef.tb_computer__DOT__reset)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_computer__DOT__reset__0)));
    vlSelfRef.__VactTriggered.set(4U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_computer__DOT__data_out_instruction__0 
        = vlSelfRef.tb_computer__DOT__data_out_instruction;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_computer__DOT__clk__0 
        = vlSelfRef.tb_computer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_computer__DOT__reset__0 
        = vlSelfRef.tb_computer__DOT__reset;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_computer___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_computer___024root___nba_sequent__TOP__0(Vtb_computer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_computer___024root___nba_sequent__TOP__0\n"); );
    Vtb_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                      & (1U == vlSymsp->TOP____024unit.__VmonitorNum))))) {
        VL_WRITEF_NX("instruction : 0x%x\n\n",0,32,
                     vlSelfRef.tb_computer__DOT__data_out_instruction);
    }
}
