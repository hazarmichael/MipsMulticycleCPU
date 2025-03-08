// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_computer__Syms.h"


void Vtb_computer___024root__trace_chg_0_sub_0(Vtb_computer___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_computer___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_computer___024root__trace_chg_0\n"); );
    // Init
    Vtb_computer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_computer___024root*>(voidSelf);
    Vtb_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_computer___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_computer___024root__trace_chg_0_sub_0(Vtb_computer___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_computer___024root__trace_chg_0_sub_0\n"); );
    Vtb_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.tb_computer__DOT__state),4);
        bufp->chgIData(oldp+1,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__SP_address),32);
        bufp->chgIData(oldp+2,((vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__SP_address 
                                - (IData)(1U))),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+3,((vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                                >> 0x1aU)),6);
        bufp->chgCData(oldp+4,((3U & vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction)),2);
        bufp->chgBit(oldp+5,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__control__DOT__jmp));
        bufp->chgBit(oldp+6,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__control__DOT__PUSH_Branch));
        bufp->chgBit(oldp+7,((3U == (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                                     >> 0x1aU))));
        bufp->chgCData(oldp+8,((0xfU & (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                                        >> 0x12U))),4);
        bufp->chgCData(oldp+9,((0xfU & (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                                        >> 0xeU))),4);
        bufp->chgCData(oldp+10,((0xfU & (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                                         >> 0x16U))),4);
        bufp->chgIData(oldp+11,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction),32);
        bufp->chgIData(oldp+12,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__B_operand),32);
        bufp->chgIData(oldp+13,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__A_operand),32);
        bufp->chgIData(oldp+14,(((IData)(1U) + vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__A_operand)),32);
        bufp->chgIData(oldp+15,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__ALU_result_buffer),32);
        bufp->chgIData(oldp+16,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__MDR_out),32);
        bufp->chgSData(oldp+17,((0xffffU & (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                                            >> 2U))),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+18,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray[0]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray[1]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray[2]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray[3]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray[4]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray[5]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray[6]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray[7]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray[8]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray[9]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray[10]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray[11]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray[12]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray[13]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray[14]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray[15]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgCData(oldp+34,(vlSelfRef.tb_computer__DOT__ALUop),2);
        bufp->chgIData(oldp+35,(vlSelfRef.tb_computer__DOT__ALUresult),32);
        bufp->chgIData(oldp+36,(vlSelfRef.tb_computer__DOT__dut__DOT__data_out),32);
        bufp->chgIData(oldp+37,(vlSelfRef.tb_computer__DOT__dut__DOT__address_data),32);
        bufp->chgBit(oldp+38,(vlSelfRef.tb_computer__DOT__dut__DOT__memWrite));
        bufp->chgBit(oldp+39,(vlSelfRef.tb_computer__DOT__dut__DOT__memRead));
        bufp->chgBit(oldp+40,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__MemWriteSel));
        bufp->chgBit(oldp+41,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__MemReg));
        bufp->chgBit(oldp+42,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__RegSrc));
        bufp->chgBit(oldp+43,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__RegWrite));
        bufp->chgBit(oldp+44,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__RegWrite2));
        bufp->chgBit(oldp+45,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__IRwrite));
        bufp->chgBit(oldp+46,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__PCwriteUncond));
        bufp->chgBit(oldp+47,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__StackWrite));
        bufp->chgBit(oldp+48,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__sign_ext));
        bufp->chgBit(oldp+49,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__StackSelect));
        bufp->chgCData(oldp+50,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__ALUsrcA),2);
        bufp->chgCData(oldp+51,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__ALUsrcB),2);
        bufp->chgCData(oldp+52,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__PCsrc),2);
        bufp->chgCData(oldp+53,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__ALUctrl),2);
        bufp->chgCData(oldp+54,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__StackALU),2);
        bufp->chgBit(oldp+55,((0U == vlSelfRef.tb_computer__DOT__ALUresult)));
        bufp->chgBit(oldp+56,((vlSelfRef.tb_computer__DOT__ALUresult 
                               >> 0x1fU)));
        bufp->chgBit(oldp+57,((1U & VL_REDXOR_2(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__alu__DOT__carry))));
        bufp->chgIData(oldp+58,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__ALU_operand1),32);
        bufp->chgIData(oldp+59,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__ALU_operand2),32);
        bufp->chgCData(oldp+60,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__alu__DOT__carry),2);
    }
    bufp->chgBit(oldp+61,(vlSelfRef.tb_computer__DOT__clk));
    bufp->chgBit(oldp+62,(vlSelfRef.tb_computer__DOT__reset));
    bufp->chgIData(oldp+63,(((0x7000U >= (0x7fffU & vlSelfRef.tb_computer__DOT__dut__DOT__address_inst))
                              ? vlSelfRef.tb_computer__DOT__dut__DOT__inst_mem__DOT__mem
                             [(0x7fffU & vlSelfRef.tb_computer__DOT__dut__DOT__address_inst)]
                              : 0U)),32);
    bufp->chgIData(oldp+64,(((IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__MemWriteSel)
                              ? vlSelfRef.tb_computer__DOT__dut__DOT__address_inst
                              : vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__B_operand)),32);
    bufp->chgIData(oldp+65,(vlSelfRef.tb_computer__DOT__dut__DOT__address_inst),32);
    bufp->chgBit(oldp+66,((((7U == (IData)(vlSelfRef.tb_computer__DOT__state)) 
                            & (((0U != vlSelfRef.tb_computer__DOT__ALUresult) 
                                & (0xbU == (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                                            >> 0x1aU))) 
                               | (((0xaU == (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                                             >> 0x1aU)) 
                                   & (0U == vlSelfRef.tb_computer__DOT__ALUresult)) 
                                  | (((8U == (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                                              >> 0x1aU)) 
                                      & ((0U != vlSelfRef.tb_computer__DOT__ALUresult) 
                                         & (~ (IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__pc_control__DOT____VdfgRegularize_h1d606512_0_1)))) 
                                     | ((9U == (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                                                >> 0x1aU)) 
                                        & (IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__pc_control__DOT____VdfgRegularize_h1d606512_0_1)))))) 
                           | (IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__PCwriteUncond))));
    bufp->chgIData(oldp+67,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray
                            [(0xfU & (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                                      >> 0x12U))]),32);
    bufp->chgIData(oldp+68,(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray
                            [(0xfU & ((IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__RegSrc)
                                       ? (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                                          >> 0x16U)
                                       : (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                                          >> 0xeU)))]),32);
    bufp->chgIData(oldp+69,((((IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__sign_ext) 
                              & (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                                 >> 0x11U)) ? (0xffff0000U 
                                               | (0xffffU 
                                                  & (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                                                     >> 2U)))
                              : (0xffffU & (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                                            >> 2U)))),32);
    bufp->chgIData(oldp+70,(((0xfc000000U & vlSelfRef.tb_computer__DOT__dut__DOT__address_inst) 
                             | (0x3ffffffU & vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction))),32);
    bufp->chgIData(oldp+71,(((2U & (IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__PCsrc))
                              ? ((1U & (IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__PCsrc))
                                  ? vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__ALU_result_buffer
                                  : vlSelfRef.tb_computer__DOT__dut__DOT__data_out)
                              : ((1U & (IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__PCsrc))
                                  ? vlSelfRef.tb_computer__DOT__ALUresult
                                  : ((0xfc000000U & vlSelfRef.tb_computer__DOT__dut__DOT__address_inst) 
                                     | (0x3ffffffU 
                                        & vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction))))),32);
    bufp->chgIData(oldp+72,(((IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__StackSelect)
                              ? (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__SP_address 
                                 - (IData)(1U)) : vlSelfRef.tb_computer__DOT__ALUresult)),32);
    bufp->chgIData(oldp+73,(((IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__MemReg)
                              ? vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__MDR_out
                              : vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__ALU_result_buffer)),32);
    bufp->chgCData(oldp+74,((0xfU & ((IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__RegSrc)
                                      ? (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                                         >> 0x16U) : 
                                     (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                                      >> 0xeU)))),4);
    bufp->chgBit(oldp+75,((((0U != vlSelfRef.tb_computer__DOT__ALUresult) 
                            & (0xbU == (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                                        >> 0x1aU))) 
                           | (((0xaU == (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                                         >> 0x1aU)) 
                               & (0U == vlSelfRef.tb_computer__DOT__ALUresult)) 
                              | (((8U == (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                                          >> 0x1aU)) 
                                  & ((0U != vlSelfRef.tb_computer__DOT__ALUresult) 
                                     & (~ (IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__pc_control__DOT____VdfgRegularize_h1d606512_0_1)))) 
                                 | ((9U == (vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction 
                                            >> 0x1aU)) 
                                    & (IData)(vlSelfRef.tb_computer__DOT__dut__DOT__cpu__DOT__pc_control__DOT____VdfgRegularize_h1d606512_0_1)))))));
}

void Vtb_computer___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_computer___024root__trace_cleanup\n"); );
    // Init
    Vtb_computer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_computer___024root*>(voidSelf);
    Vtb_computer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
