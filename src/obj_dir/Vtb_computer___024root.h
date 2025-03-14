// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_computer.h for the primary calling header

#ifndef VERILATED_VTB_COMPUTER___024ROOT_H_
#define VERILATED_VTB_COMPUTER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_computer___024unit;


class Vtb_computer__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_computer___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_computer___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_computer__DOT__clk;
    CData/*0:0*/ tb_computer__DOT__reset;
    CData/*0:0*/ tb_computer__DOT__dut__DOT__memWrite;
    CData/*0:0*/ tb_computer__DOT__dut__DOT__memRead;
    CData/*0:0*/ tb_computer__DOT__dut__DOT__cpu__DOT__MemWriteSel;
    CData/*0:0*/ tb_computer__DOT__dut__DOT__cpu__DOT__MemReg;
    CData/*0:0*/ tb_computer__DOT__dut__DOT__cpu__DOT__RegSrc;
    CData/*0:0*/ tb_computer__DOT__dut__DOT__cpu__DOT__RegWrite;
    CData/*0:0*/ tb_computer__DOT__dut__DOT__cpu__DOT__RegWrite2;
    CData/*0:0*/ tb_computer__DOT__dut__DOT__cpu__DOT__IRwrite;
    CData/*0:0*/ tb_computer__DOT__dut__DOT__cpu__DOT__PCwriteUncond;
    CData/*0:0*/ tb_computer__DOT__dut__DOT__cpu__DOT__StackWrite;
    CData/*0:0*/ tb_computer__DOT__dut__DOT__cpu__DOT__sign_ext;
    CData/*0:0*/ tb_computer__DOT__dut__DOT__cpu__DOT__PCwriteCond;
    CData/*0:0*/ tb_computer__DOT__dut__DOT__cpu__DOT__StackSelect;
    CData/*1:0*/ tb_computer__DOT__dut__DOT__cpu__DOT__ALUsrcA;
    CData/*1:0*/ tb_computer__DOT__dut__DOT__cpu__DOT__ALUsrcB;
    CData/*1:0*/ tb_computer__DOT__dut__DOT__cpu__DOT__PCsrc;
    CData/*1:0*/ tb_computer__DOT__dut__DOT__cpu__DOT__ALUctrl;
    CData/*1:0*/ tb_computer__DOT__dut__DOT__cpu__DOT__StackALU;
    CData/*1:0*/ tb_computer__DOT__dut__DOT__cpu__DOT__ALUop;
    CData/*3:0*/ tb_computer__DOT__dut__DOT__cpu__DOT__state;
    CData/*1:0*/ tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__alu__DOT__carry;
    CData/*0:0*/ tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__alu__DOT____Vconcswap_1_h5d975f9c__0;
    CData/*0:0*/ tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__alu__DOT____Vconcswap_1_h5d95ae6b__0;
    CData/*0:0*/ tb_computer__DOT__dut__DOT__cpu__DOT__control__DOT__jmp;
    CData/*0:0*/ tb_computer__DOT__dut__DOT__cpu__DOT__control__DOT__PUSH_Branch;
    CData/*0:0*/ tb_computer__DOT__dut__DOT__cpu__DOT__pc_control__DOT____VdfgRegularize_h1d606512_0_1;
    CData/*3:0*/ __Vdly__tb_computer__DOT__dut__DOT__cpu__DOT__state;
    CData/*3:0*/ __VdlyDim0__tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray__v0;
    CData/*0:0*/ __VdlySet__tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray__v0;
    CData/*3:0*/ __VdlyDim0__tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray__v1;
    CData/*0:0*/ __VdlySet__tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray__v1;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_computer__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_computer__DOT__reset__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_computer__DOT__data_out_instruction;
    IData/*31:0*/ tb_computer__DOT__dut__DOT__data_out;
    IData/*31:0*/ tb_computer__DOT__dut__DOT__address_data;
    IData/*31:0*/ tb_computer__DOT__dut__DOT__address_inst;
    IData/*31:0*/ tb_computer__DOT__dut__DOT__data_mem__DOT____Vlvbound_he8a29301__0;
    IData/*31:0*/ tb_computer__DOT__dut__DOT__cpu__DOT__ALUresult;
    IData/*31:0*/ tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__instruction;
    IData/*31:0*/ tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__B_operand;
    IData/*31:0*/ tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__A_operand;
    IData/*31:0*/ tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__SP_address;
    IData/*31:0*/ tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__ALU_operand1;
    IData/*31:0*/ tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__ALU_operand2;
    IData/*31:0*/ tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__jumpTargetAddress;
    IData/*31:0*/ tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__ALU_result_buffer;
    IData/*31:0*/ tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__stack_select_wire;
    IData/*31:0*/ tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__MDR_out;
    IData/*31:0*/ __VdlyVal__tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray__v0;
    IData/*31:0*/ __VdlyVal__tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray__v1;
    IData/*31:0*/ __Vtrigprevexpr___TOP__tb_computer__DOT__data_out_instruction__0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 28673> tb_computer__DOT__dut__DOT__inst_mem__DOT__mem;
    VlUnpacked<IData/*31:0*/, 101> tb_computer__DOT__dut__DOT__data_mem__DOT__mem;
    VlUnpacked<IData/*31:0*/, 16> tb_computer__DOT__dut__DOT__cpu__DOT__d1__DOT__file__DOT__regArray;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_computer__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_computer___024root(Vtb_computer__Syms* symsp, const char* v__name);
    ~Vtb_computer___024root();
    VL_UNCOPYABLE(Vtb_computer___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
