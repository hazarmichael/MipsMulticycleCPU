// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_computer.h for the primary calling header

#include "Vtb_computer__pch.h"
#include "Vtb_computer__Syms.h"
#include "Vtb_computer___024root.h"

VL_ATTR_COLD void Vtb_computer___024root___eval_initial__TOP(Vtb_computer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_computer___024root___eval_initial__TOP\n"); );
    Vtb_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<6>/*191:0*/ __Vtemp_1;
    // Body
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    VL_WRITEF_NX("Test message\n",0);
    Verilated::runFlushCallbacks();
    __Vtemp_1[0U] = 0x2e646174U;
    __Vtemp_1[1U] = 0x2f6d756cU;
    __Vtemp_1[2U] = 0x656e7473U;
    __Vtemp_1[3U] = 0x6d706f6eU;
    __Vtemp_1[4U] = 0x635f636fU;
    __Vtemp_1[5U] = 0x62617369U;
    VL_READMEM_N(true, 32, 28673, 0, VL_CVT_PACK_STR_NW(6, __Vtemp_1)
                 ,  &(vlSelfRef.tb_computer__DOT__dut__DOT__inst_mem__DOT__mem)
                 , 0U, 0xbU);
    vlSelfRef.tb_computer__DOT__dut__DOT__data_mem__DOT__mem[0x50U] = 8U;
    vlSelfRef.tb_computer__DOT__dut__DOT__data_mem__DOT__mem[0x51U] = 0x2cU;
    vlSelfRef.tb_computer__DOT__dut__DOT__data_mem__DOT__mem[0x52U] = 0x1b0U;
    vlSelfRef.tb_computer__DOT__dut__DOT__data_mem__DOT__mem[0x53U] = 0xffffff86U;
    vlSelfRef.tb_computer__DOT__dut__DOT__data_mem__DOT__mem[0x54U] = 0xffffff38U;
    vlSelfRef.tb_computer__DOT__dut__DOT__data_mem__DOT__mem[0x55U] = 0xfffffffeU;
    vlSelfRef.tb_computer__DOT__dut__DOT__data_mem__DOT__mem[0x56U] = 0xd3U;
    vlSelfRef.tb_computer__DOT__dut__DOT__data_mem__DOT__mem[0x57U] = 0xcU;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_computer___024root___dump_triggers__stl(Vtb_computer___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_computer___024root___eval_triggers__stl(Vtb_computer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_computer___024root___eval_triggers__stl\n"); );
    Vtb_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_computer___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
