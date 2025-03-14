// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_computer.h for the primary calling header

#include "Vtb_computer__pch.h"
#include "Vtb_computer___024root.h"

VL_ATTR_COLD void Vtb_computer___024root___eval_static(Vtb_computer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_computer___024root___eval_static\n"); );
    Vtb_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_computer___024root___eval_final(Vtb_computer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_computer___024root___eval_final\n"); );
    Vtb_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_computer___024root___dump_triggers__stl(Vtb_computer___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_computer___024root___eval_phase__stl(Vtb_computer___024root* vlSelf);

VL_ATTR_COLD void Vtb_computer___024root___eval_settle(Vtb_computer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_computer___024root___eval_settle\n"); );
    Vtb_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_computer___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_computer.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_computer___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_computer___024root___dump_triggers__stl(Vtb_computer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_computer___024root___dump_triggers__stl\n"); );
    Vtb_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_computer___024root___stl_sequent__TOP__0(Vtb_computer___024root* vlSelf);
VL_ATTR_COLD void Vtb_computer___024root____Vm_traceActivitySetAll(Vtb_computer___024root* vlSelf);

VL_ATTR_COLD void Vtb_computer___024root___eval_stl(Vtb_computer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_computer___024root___eval_stl\n"); );
    Vtb_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_computer___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_computer___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 64> Vtb_computer__ConstPool__TABLE_h5ddb11b2_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_computer__ConstPool__TABLE_h350b2fa3_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_computer__ConstPool__TABLE_hf12ab690_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_computer__ConstPool__TABLE_hb36b8d5f_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_computer__ConstPool__TABLE_h2a2dc2b1_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_computer__ConstPool__TABLE_h8e2a6f2b_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_computer__ConstPool__TABLE_h9f354f2a_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_computer__ConstPool__TABLE_h2444912e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_computer__ConstPool__TABLE_h35cf4e6c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_computer__ConstPool__TABLE_he82bf620_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_computer__ConstPool__TABLE_h467bbf04_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtb_computer__ConstPool__TABLE_hba0ac050_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_computer__ConstPool__TABLE_h67f98f36_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_computer__ConstPool__TABLE_hee03dbea_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtb_computer__ConstPool__TABLE_hc21a1ddd_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtb_computer__ConstPool__TABLE_h22b1e2c6_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtb_computer__ConstPool__TABLE_hacf15a1a_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtb_computer__ConstPool__TABLE_ha97ac2eb_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_computer__ConstPool__TABLE_h0c91cbb0_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtb_computer__ConstPool__TABLE_h29c95cbc_0;

VL_ATTR_COLD void Vtb_computer___024root___stl_sequent__TOP__0(Vtb_computer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_computer___024root___stl_sequent__TOP__0\n"); );
    Vtb_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*7:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelfRef.tb_computer__DOT__data_out_instruction 
        = ((0x7000U >= (0x7fffU & vlSelfRef.tb_computer__DOT__dut__DOT__address_inst))
            ? vlSelfRef.tb_computer__DOT__dut__DOT__inst_mem__DOT__mem
           [(0x7fffU & vlSelfRef.tb_computer__DOT__dut__DOT__address_inst)]
            : 0U);
    vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__jumpTargetAddress 
        = ((0xfc000000U & vlSelfRef.tb_computer__DOT__dut__DOT__address_inst) 
           | (0x3ffffffU & vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction));
    __Vtableidx1 = (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                    >> 0x1aU);
    vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__control__DOT__PUSH_Branch 
        = Vtb_computer__ConstPool__TABLE_h5ddb11b2_0
        [__Vtableidx1];
    vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__control__DOT__jmp 
        = Vtb_computer__ConstPool__TABLE_h350b2fa3_0
        [__Vtableidx1];
    __Vtableidx3 = (((3U != (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                             >> 0x1aU)) << 6U) | (((IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__control__DOT__jmp) 
                                                   << 5U) 
                                                  | (((IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__control__DOT__PUSH_Branch) 
                                                      << 4U) 
                                                     | (IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__state))));
    vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__MemWriteSel 
        = Vtb_computer__ConstPool__TABLE_hf12ab690_0
        [__Vtableidx3];
    vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__MemReg 
        = Vtb_computer__ConstPool__TABLE_hb36b8d5f_0
        [__Vtableidx3];
    vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__RegSrc 
        = Vtb_computer__ConstPool__TABLE_h2a2dc2b1_0
        [__Vtableidx3];
    vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__RegWrite 
        = Vtb_computer__ConstPool__TABLE_h8e2a6f2b_0
        [__Vtableidx3];
    vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__RegWrite2 
        = Vtb_computer__ConstPool__TABLE_h9f354f2a_0
        [__Vtableidx3];
    vlSelfRef.tb_computer__DOT__dut__DOT__memRead = 
        Vtb_computer__ConstPool__TABLE_h2444912e_0[__Vtableidx3];
    vlSelfRef.tb_computer__DOT__dut__DOT__memWrite 
        = Vtb_computer__ConstPool__TABLE_h35cf4e6c_0
        [__Vtableidx3];
    vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__IRwrite 
        = Vtb_computer__ConstPool__TABLE_he82bf620_0
        [__Vtableidx3];
    vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__PCwriteUncond 
        = Vtb_computer__ConstPool__TABLE_h467bbf04_0
        [__Vtableidx3];
    vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__StackALU 
        = Vtb_computer__ConstPool__TABLE_hba0ac050_0
        [__Vtableidx3];
    vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__StackWrite 
        = Vtb_computer__ConstPool__TABLE_h67f98f36_0
        [__Vtableidx3];
    vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__sign_ext 
        = Vtb_computer__ConstPool__TABLE_hee03dbea_0
        [__Vtableidx3];
    vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__PCsrc 
        = Vtb_computer__ConstPool__TABLE_hc21a1ddd_0
        [__Vtableidx3];
    vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__ALUctrl 
        = Vtb_computer__ConstPool__TABLE_h22b1e2c6_0
        [__Vtableidx3];
    vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__ALUsrcA 
        = Vtb_computer__ConstPool__TABLE_hacf15a1a_0
        [__Vtableidx3];
    vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__ALUsrcB 
        = Vtb_computer__ConstPool__TABLE_ha97ac2eb_0
        [__Vtableidx3];
    vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__StackSelect 
        = Vtb_computer__ConstPool__TABLE_h0c91cbb0_0
        [__Vtableidx3];
    vlSelfRef.tb_computer__DOT__dut__DOT__address_data 
        = ((2U & (IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__StackALU))
            ? ((1U & (IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__StackALU))
                ? 0U : vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__SP_address)
            : ((1U & (IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__StackALU))
                ? (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__SP_address 
                   - (IData)(1U)) : vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__ALU_result_buffer));
    vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__ALU_operand1 
        = ((2U & (IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__ALUsrcA))
            ? ((1U & (IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__ALUsrcA))
                ? 0U : vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__SP_address)
            : ((1U & (IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__ALUsrcA))
                ? vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__A_operand
                : vlSelfRef.tb_computer__DOT__dut__DOT__address_inst));
    vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__ALU_operand2 
        = ((2U & (IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__ALUsrcB))
            ? ((1U & (IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__ALUsrcB))
                ? 0U : 1U) : ((1U & (IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__ALUsrcB))
                               ? (((IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__sign_ext) 
                                   & (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                                      >> 0x11U)) ? 
                                  (0xffff0000U | (0xffffU 
                                                  & (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                                                     >> 2U)))
                                   : (0xffffU & (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                                                 >> 2U)))
                               : vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__B_operand));
    __Vtableidx4 = ((0xfcU & (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                              >> 0x18U)) | (IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__ALUctrl));
    vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__ALUop 
        = Vtb_computer__ConstPool__TABLE_h29c95cbc_0
        [__Vtableidx4];
    vlSelfRef.tb_computer__DOT__dut__DOT__data_out 
        = ((IData)(vlSelfRef.tb_computer__DOT__dut__DOT__memRead)
            ? ((0x64U >= (0x7fU & vlSelfRef.tb_computer__DOT__dut__DOT__address_data))
                ? vlSelfRef.tb_computer__DOT__dut__DOT__data_mem__DOT__mem
               [(0x7fU & vlSelfRef.tb_computer__DOT__dut__DOT__address_data)]
                : 0U) : 0U);
    vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__alu__DOT__carry = 0U;
    if ((2U & (IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__ALUop))) {
        vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__ALUresult 
            = ((1U & (IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__ALUop))
                ? (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__ALU_operand2 
                   - vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__ALU_operand1)
                : (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__ALU_operand1 
                   - vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__ALU_operand2));
    } else if ((1U & (IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__ALUop))) {
        vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__alu__DOT__carry 
            = ((2U & (IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__alu__DOT__carry)) 
               | (((0x7fffffffU & vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__ALU_operand1) 
                   + (0x7fffffffU & vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__ALU_operand2)) 
                  >> 0x1fU));
        vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__ALUresult 
            = ((0x80000000U & vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__ALUresult) 
               | (0x7fffffffU & (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__ALU_operand1 
                                 + vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__ALU_operand2)));
        vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__alu__DOT____Vconcswap_1_h5d975f9c__0 
            = (1U & ((((vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__ALU_operand1 
                        >> 0x1fU) + (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__ALU_operand2 
                                     >> 0x1fU)) + (1U 
                                                   & (IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__alu__DOT__carry))) 
                     >> 1U));
        vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__alu__DOT____Vconcswap_1_h5d95ae6b__0 
            = (1U & (((vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__ALU_operand1 
                       >> 0x1fU) + (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__ALU_operand2 
                                    >> 0x1fU)) + (IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__alu__DOT__carry)));
        vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__alu__DOT__carry 
            = ((1U & (IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__alu__DOT__carry)) 
               | ((IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__alu__DOT____Vconcswap_1_h5d975f9c__0) 
                  << 1U));
        vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__ALUresult 
            = ((0x7fffffffU & vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__ALUresult) 
               | ((IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__alu__DOT____Vconcswap_1_h5d95ae6b__0) 
                  << 0x1fU));
    } else {
        vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__ALUresult 
            = (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__ALU_operand1 
               & vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__ALU_operand2);
    }
    vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__pc_control__DOT____VdfgRegularize_h1d606512_0_1 
        = (1U & ((vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__ALUresult 
                  >> 0x1fU) ^ VL_REDXOR_2(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__alu__DOT__carry)));
    vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__stack_select_wire 
        = ((IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__StackSelect)
            ? (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__SP_address 
               - (IData)(1U)) : vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__ALUresult);
}

VL_ATTR_COLD void Vtb_computer___024root___eval_triggers__stl(Vtb_computer___024root* vlSelf);

VL_ATTR_COLD bool Vtb_computer___024root___eval_phase__stl(Vtb_computer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_computer___024root___eval_phase__stl\n"); );
    Vtb_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_computer___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_computer___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_computer___024root___dump_triggers__act(Vtb_computer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_computer___024root___dump_triggers__act\n"); );
    Vtb_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @( tb_computer.data_out_instruction)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_computer.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge 1'h1)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge tb_computer.reset)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_computer___024root___dump_triggers__nba(Vtb_computer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_computer___024root___dump_triggers__nba\n"); );
    Vtb_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @( tb_computer.data_out_instruction)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_computer.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge 1'h1)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge tb_computer.reset)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_computer___024root____Vm_traceActivitySetAll(Vtb_computer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_computer___024root____Vm_traceActivitySetAll\n"); );
    Vtb_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vtb_computer___024root___ctor_var_reset(Vtb_computer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_computer___024root___ctor_var_reset\n"); );
    Vtb_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_computer__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_computer__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_computer__DOT__data_out_instruction = VL_RAND_RESET_I(32);
    vlSelf->tb_computer__DOT__dut__DOT__data_out = VL_RAND_RESET_I(32);
    vlSelf->tb_computer__DOT__dut__DOT__address_data = VL_RAND_RESET_I(32);
    vlSelf->tb_computer__DOT__dut__DOT__address_inst = VL_RAND_RESET_I(32);
    vlSelf->tb_computer__DOT__dut__DOT__memWrite = VL_RAND_RESET_I(1);
    vlSelf->tb_computer__DOT__dut__DOT__memRead = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 28673; ++__Vi0) {
        vlSelf->tb_computer__DOT__dut__DOT__inst_mem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 101; ++__Vi0) {
        vlSelf->tb_computer__DOT__dut__DOT__data_mem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_computer__DOT__dut__DOT__data_mem__DOT____Vlvbound_he8a29301__0 = VL_RAND_RESET_I(32);
    vlSelf->tb_computer__DOT__dut__DOT__cpu__DOT__MemWriteSel = VL_RAND_RESET_I(1);
    vlSelf->tb_computer__DOT__dut__DOT__cpu__DOT__MemReg = VL_RAND_RESET_I(1);
    vlSelf->tb_computer__DOT__dut__DOT__cpu__DOT__RegSrc = VL_RAND_RESET_I(1);
    vlSelf->tb_computer__DOT__dut__DOT__cpu__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->tb_computer__DOT__dut__DOT__cpu__DOT__RegWrite2 = VL_RAND_RESET_I(1);
    vlSelf->tb_computer__DOT__dut__DOT__cpu__DOT__IRwrite = VL_RAND_RESET_I(1);
    vlSelf->tb_computer__DOT__dut__DOT__cpu__DOT__PCwriteUncond = VL_RAND_RESET_I(1);
    vlSelf->tb_computer__DOT__dut__DOT__cpu__DOT__StackWrite = VL_RAND_RESET_I(1);
    vlSelf->tb_computer__DOT__dut__DOT__cpu__DOT__sign_ext = VL_RAND_RESET_I(1);
    vlSelf->tb_computer__DOT__dut__DOT__cpu__DOT__PCwriteCond = VL_RAND_RESET_I(1);
    vlSelf->tb_computer__DOT__dut__DOT__cpu__DOT__StackSelect = VL_RAND_RESET_I(1);
    vlSelf->tb_computer__DOT__dut__DOT__cpu__DOT__ALUsrcA = VL_RAND_RESET_I(2);
    vlSelf->tb_computer__DOT__dut__DOT__cpu__DOT__ALUsrcB = VL_RAND_RESET_I(2);
    vlSelf->tb_computer__DOT__dut__DOT__cpu__DOT__PCsrc = VL_RAND_RESET_I(2);
    vlSelf->tb_computer__DOT__dut__DOT__cpu__DOT__ALUctrl = VL_RAND_RESET_I(2);
    vlSelf->tb_computer__DOT__dut__DOT__cpu__DOT__StackALU = VL_RAND_RESET_I(2);
    vlSelf->tb_computer__DOT__dut__DOT__cpu__DOT__ALUop = VL_RAND_RESET_I(2);
    vlSelf->tb_computer__DOT__dut__DOT__cpu__DOT__ALUresult = VL_RAND_RESET_I(32);
    vlSelf->tb_computer__DOT__dut__DOT__cpu__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__B_operand = VL_RAND_RESET_I(32);
    vlSelf->tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__A_operand = VL_RAND_RESET_I(32);
    vlSelf->tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__SP_address = VL_RAND_RESET_I(32);
    vlSelf->tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__ALU_operand1 = VL_RAND_RESET_I(32);
    vlSelf->tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__ALU_operand2 = VL_RAND_RESET_I(32);
    vlSelf->tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__jumpTargetAddress = VL_RAND_RESET_I(32);
    vlSelf->tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__ALU_result_buffer = VL_RAND_RESET_I(32);
    vlSelf->tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__stack_select_wire = VL_RAND_RESET_I(32);
    vlSelf->tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__MDR_out = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__alu__DOT__carry = VL_RAND_RESET_I(2);
    vlSelf->tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__alu__DOT____Vconcswap_1_h5d975f9c__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__alu__DOT____Vconcswap_1_h5d95ae6b__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_computer__DOT__dut__DOT__cpu__DOT__control__DOT__jmp = VL_RAND_RESET_I(1);
    vlSelf->tb_computer__DOT__dut__DOT__cpu__DOT__control__DOT__PUSH_Branch = VL_RAND_RESET_I(1);
    vlSelf->tb_computer__DOT__dut__DOT__cpu__DOT__pc_control__DOT____VdfgRegularize_h1d606512_0_1 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_computer__DOT__dut__DOT__cpu__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->__VdlyVal__tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray__v0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyDim0__tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray__v0 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray__v0 = 0;
    vlSelf->__VdlyVal__tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray__v1 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyDim0__tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray__v1 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray__v1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_computer__DOT__data_out_instruction__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__tb_computer__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_computer__DOT__reset__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
