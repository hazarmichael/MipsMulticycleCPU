// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_computer.h for the primary calling header

#include "Vtb_computer__pch.h"
#include "Vtb_computer___024root.h"

VL_ATTR_COLD void Vtb_computer___024root___eval_initial__TOP(Vtb_computer___024root* vlSelf);
VlCoroutine Vtb_computer___024root___eval_initial__TOP__Vtiming__0(Vtb_computer___024root* vlSelf);
VlCoroutine Vtb_computer___024root___eval_initial__TOP__Vtiming__1(Vtb_computer___024root* vlSelf);

void Vtb_computer___024root___eval_initial(Vtb_computer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_computer___024root___eval_initial\n"); );
    Vtb_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_computer___024root___eval_initial__TOP(vlSelf);
    Vtb_computer___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_computer___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_computer__DOT__data_out_instruction__0 
        = vlSelfRef.tb_computer__DOT__data_out_instruction;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_computer__DOT__clk__0 
        = vlSelfRef.tb_computer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_computer__DOT__reset__0 
        = vlSelfRef.tb_computer__DOT__reset;
}

VL_INLINE_OPT VlCoroutine Vtb_computer___024root___eval_initial__TOP__Vtiming__1(Vtb_computer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_computer___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_computer.v", 
                                             5);
        vlSelfRef.tb_computer__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_computer__DOT__clk)));
    }
}

void Vtb_computer___024root___eval_act(Vtb_computer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_computer___024root___eval_act\n"); );
    Vtb_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_computer___024root___nba_sequent__TOP__0(Vtb_computer___024root* vlSelf);
void Vtb_computer___024root___nba_sequent__TOP__1(Vtb_computer___024root* vlSelf);
void Vtb_computer___024root___nba_sequent__TOP__2(Vtb_computer___024root* vlSelf);
void Vtb_computer___024root___nba_sequent__TOP__3(Vtb_computer___024root* vlSelf);
void Vtb_computer___024root___nba_sequent__TOP__4(Vtb_computer___024root* vlSelf);
void Vtb_computer___024root___nba_sequent__TOP__5(Vtb_computer___024root* vlSelf);
void Vtb_computer___024root___nba_sequent__TOP__6(Vtb_computer___024root* vlSelf);
void Vtb_computer___024root___nba_sequent__TOP__7(Vtb_computer___024root* vlSelf);
void Vtb_computer___024root___nba_comb__TOP__0(Vtb_computer___024root* vlSelf);

void Vtb_computer___024root___eval_nba(Vtb_computer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_computer___024root___eval_nba\n"); );
    Vtb_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_computer___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0xaULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_computer___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_computer___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_computer___024root___nba_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((0xaULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_computer___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_computer___024root___nba_sequent__TOP__5(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_computer___024root___nba_sequent__TOP__6(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((0xaULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_computer___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0xeULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_computer___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
}

extern const VlUnpacked<CData/*3:0*/, 8192> Vtb_computer__ConstPool__TABLE_hae9da8c5_0;

VL_INLINE_OPT void Vtb_computer___024root___nba_sequent__TOP__1(Vtb_computer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_computer___024root___nba_sequent__TOP__1\n"); );
    Vtb_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*12:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.__Vdly__tb_computer__DOT__dut__DOT__cpu__DOT__state 
        = vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__state;
    __Vtableidx2 = ((0x1800U & (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                                << 0xbU)) | ((0x7e0U 
                                              & (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                                                 >> 0x15U)) 
                                             | (((IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__state) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.tb_computer__DOT__reset))));
    vlSelfRef.__Vdly__tb_computer__DOT__dut__DOT__cpu__DOT__state 
        = Vtb_computer__ConstPool__TABLE_hae9da8c5_0
        [__Vtableidx2];
    if (vlSelfRef.tb_computer__DOT__reset) {
        if (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__StackWrite) {
            vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__SP_address 
                = vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__stack_select_wire;
        }
    } else {
        vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__SP_address = 0U;
    }
}

VL_INLINE_OPT void Vtb_computer___024root___nba_sequent__TOP__2(Vtb_computer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_computer___024root___nba_sequent__TOP__2\n"); );
    Vtb_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__tb_computer__DOT__dut__DOT__data_mem__DOT__mem__v0;
    __VdlyVal__tb_computer__DOT__dut__DOT__data_mem__DOT__mem__v0 = 0;
    CData/*6:0*/ __VdlyDim0__tb_computer__DOT__dut__DOT__data_mem__DOT__mem__v0;
    __VdlyDim0__tb_computer__DOT__dut__DOT__data_mem__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_computer__DOT__dut__DOT__data_mem__DOT__mem__v0;
    __VdlySet__tb_computer__DOT__dut__DOT__data_mem__DOT__mem__v0 = 0;
    // Body
    vlSelfRef.__VdlySet__tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray__v0 = 0U;
    vlSelfRef.__VdlySet__tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray__v1 = 0U;
    __VdlySet__tb_computer__DOT__dut__DOT__data_mem__DOT__mem__v0 = 0U;
    if (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__RegWrite) {
        vlSelfRef.__VdlyVal__tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray__v0 
            = ((IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__MemReg)
                ? vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__MDR_out
                : vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__ALU_result_buffer);
        vlSelfRef.__VdlyDim0__tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray__v0 
            = (0xfU & (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                       >> 0x16U));
        vlSelfRef.__VdlySet__tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray__v0 = 1U;
    }
    if (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__RegWrite2) {
        vlSelfRef.__VdlyVal__tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray__v1 
            = ((IData)(1U) + vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__A_operand);
        vlSelfRef.__VdlyDim0__tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray__v1 
            = (0xfU & (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                       >> 0x12U));
        vlSelfRef.__VdlySet__tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray__v1 = 1U;
    }
    if (vlSelfRef.tb_computer__DOT__dut__DOT__memWrite) {
        vlSelfRef.tb_computer__DOT__dut__DOT__data_mem__DOT____Vlvbound_he8a29301__0 
            = ((IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__MemWriteSel)
                ? vlSelfRef.tb_computer__DOT__dut__DOT__address_inst
                : vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__B_operand);
        if ((0x64U >= (0x7fU & vlSelfRef.tb_computer__DOT__dut__DOT__address_data))) {
            __VdlyVal__tb_computer__DOT__dut__DOT__data_mem__DOT__mem__v0 
                = vlSelfRef.tb_computer__DOT__dut__DOT__data_mem__DOT____Vlvbound_he8a29301__0;
            __VdlyDim0__tb_computer__DOT__dut__DOT__data_mem__DOT__mem__v0 
                = (0x7fU & vlSelfRef.tb_computer__DOT__dut__DOT__address_data);
            __VdlySet__tb_computer__DOT__dut__DOT__data_mem__DOT__mem__v0 = 1U;
        }
    }
    if (__VdlySet__tb_computer__DOT__dut__DOT__data_mem__DOT__mem__v0) {
        vlSelfRef.tb_computer__DOT__dut__DOT__data_mem__DOT__mem[__VdlyDim0__tb_computer__DOT__dut__DOT__data_mem__DOT__mem__v0] 
            = __VdlyVal__tb_computer__DOT__dut__DOT__data_mem__DOT__mem__v0;
    }
}

VL_INLINE_OPT void Vtb_computer___024root___nba_sequent__TOP__3(Vtb_computer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_computer___024root___nba_sequent__TOP__3\n"); );
    Vtb_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__MDR_out 
        = vlSelfRef.tb_computer__DOT__dut__DOT__data_out;
    vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__A_operand 
        = vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray
        [(0xfU & (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                  >> 0x12U))];
    vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__B_operand 
        = vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray
        [(0xfU & ((IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__RegSrc)
                   ? (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                      >> 0x16U) : (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                                   >> 0xeU)))];
}

VL_INLINE_OPT void Vtb_computer___024root___nba_sequent__TOP__4(Vtb_computer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_computer___024root___nba_sequent__TOP__4\n"); );
    Vtb_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_computer__DOT__reset) {
        if ((((7U == (IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__state)) 
              & (((0U != vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__ALUresult) 
                  & (0xbU == (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                              >> 0x1aU))) | (((0xaU 
                                               == (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                                                   >> 0x1aU)) 
                                              & (0U 
                                                 == vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__ALUresult)) 
                                             | (((8U 
                                                  == 
                                                  (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                                                   >> 0x1aU)) 
                                                 & ((0U 
                                                     != vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__ALUresult) 
                                                    & (~ (IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__pc_control__DOT____VdfgRegularize_h1d606512_0_1)))) 
                                                | ((9U 
                                                    == 
                                                    (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                                                     >> 0x1aU)) 
                                                   & (IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__pc_control__DOT____VdfgRegularize_h1d606512_0_1)))))) 
             | (IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__PCwriteUncond))) {
            vlSelfRef.tb_computer__DOT__dut__DOT__address_inst 
                = ((2U & (IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__PCsrc))
                    ? ((1U & (IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__PCsrc))
                        ? vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__ALU_result_buffer
                        : vlSelfRef.tb_computer__DOT__dut__DOT__data_out)
                    : ((1U & (IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__PCsrc))
                        ? vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__ALUresult
                        : vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__jumpTargetAddress));
        }
    } else {
        vlSelfRef.tb_computer__DOT__dut__DOT__address_inst = 0U;
    }
    vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__state 
        = vlSelfRef.__Vdly__tb_computer__DOT__dut__DOT__cpu__DOT__state;
}

VL_INLINE_OPT void Vtb_computer___024root___nba_sequent__TOP__5(Vtb_computer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_computer___024root___nba_sequent__TOP__5\n"); );
    Vtb_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray__v0) {
        vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray[vlSelfRef.__VdlyDim0__tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray__v0] 
            = vlSelfRef.__VdlyVal__tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray__v0;
    }
    if (vlSelfRef.__VdlySet__tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray__v1) {
        vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray[vlSelfRef.__VdlyDim0__tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray__v1] 
            = vlSelfRef.__VdlyVal__tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray__v1;
    }
}

extern const VlUnpacked<CData/*0:0*/, 64> Vtb_computer__ConstPool__TABLE_h5ddb11b2_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_computer__ConstPool__TABLE_h350b2fa3_0;

VL_INLINE_OPT void Vtb_computer___024root___nba_sequent__TOP__6(Vtb_computer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_computer___024root___nba_sequent__TOP__6\n"); );
    Vtb_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__ALU_result_buffer 
        = vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__ALUresult;
    if (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__IRwrite) {
        vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
            = vlSelfRef.tb_computer__DOT__data_out_instruction;
    }
    __Vtableidx1 = (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                    >> 0x1aU);
    vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__control__DOT__PUSH_Branch 
        = Vtb_computer__ConstPool__TABLE_h5ddb11b2_0
        [__Vtableidx1];
    vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__control__DOT__jmp 
        = Vtb_computer__ConstPool__TABLE_h350b2fa3_0
        [__Vtableidx1];
}

VL_INLINE_OPT void Vtb_computer___024root___nba_sequent__TOP__7(Vtb_computer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_computer___024root___nba_sequent__TOP__7\n"); );
    Vtb_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_computer__DOT__data_out_instruction 
        = ((0x7000U >= (0x7fffU & vlSelfRef.tb_computer__DOT__dut__DOT__address_inst))
            ? vlSelfRef.tb_computer__DOT__dut__DOT__inst_mem__DOT__mem
           [(0x7fffU & vlSelfRef.tb_computer__DOT__dut__DOT__address_inst)]
            : 0U);
}

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

VL_INLINE_OPT void Vtb_computer___024root___nba_comb__TOP__0(Vtb_computer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_computer___024root___nba_comb__TOP__0\n"); );
    Vtb_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*7:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__jumpTargetAddress 
        = ((0xfc000000U & vlSelfRef.tb_computer__DOT__dut__DOT__address_inst) 
           | (0x3ffffffU & vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction));
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

void Vtb_computer___024root___timing_resume(Vtb_computer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_computer___024root___timing_resume\n"); );
    Vtb_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_computer___024root___eval_triggers__act(Vtb_computer___024root* vlSelf);

bool Vtb_computer___024root___eval_phase__act(Vtb_computer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_computer___024root___eval_phase__act\n"); );
    Vtb_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_computer___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_computer___024root___timing_resume(vlSelf);
        Vtb_computer___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_computer___024root___eval_phase__nba(Vtb_computer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_computer___024root___eval_phase__nba\n"); );
    Vtb_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_computer___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_computer___024root___dump_triggers__nba(Vtb_computer___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_computer___024root___dump_triggers__act(Vtb_computer___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_computer___024root___eval(Vtb_computer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_computer___024root___eval\n"); );
    Vtb_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_computer___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_computer.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_computer___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_computer.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_computer___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_computer___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_computer___024root___eval_debug_assertions(Vtb_computer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_computer___024root___eval_debug_assertions\n"); );
    Vtb_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
