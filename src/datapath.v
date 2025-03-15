module datapath (

    input MemWriteSel, MemReg, RegSrc,
    RegWrite, RegWrite2 ,
    IRwrite, PCwrite,
    StackWrite, sign_ext , clk, reset,
    StackSelect,

    input [31:0] data_out_instruction, data_out,

    input [1:0] ALUsrcA, ALUsrcB,
    PCsrc, ALUop, StackALU,

    output [5:0] opcode,
    output [1:0] mode,
    output [31:0] address_data, address_instruction, data_in,
    output z, n, v,
    output [31:0] ALU_result,
    output led
  );

  wire [3:0] Rs1, Rs2, Rd;
  wire [31:0] pc_temp;

  assign pc_temp = address_instruction;

  wire [31:0] instruction, BUS1, BUS2, B_operand, A_operand, SP_address,
       increment, extended_immediate, ALU_operand1, ALU_operand2,
       jumpTargetAddress, PCtype, ALU_result_buffer, decrement,
       stack_select_wire;  /*synthesis syn_keep=1*/

  wire[31:0] MDR_out, Register_result; /*synthesis syn_keep=1*/
  wire [15:0] immediate;

  wire [3:0] Rs2_regfile;


  assign opcode = instruction[31:26];
  assign mode = instruction[1:0];
  assign Rd = instruction[25:22];
  assign Rs1 = instruction[21:18];
  assign Rs2 = instruction[17:14];

  assign immediate = instruction[17:2];
  assign jumpTargetAddress={address_instruction[31:26], instruction[25:0]};

  assign increment = A_operand + 1;
  assign decrement = SP_address - 1;


  flop IR (.out(instruction), .clk(clk), .writeEn(IRwrite), .in(data_out_instruction), .reset(1'b1));

  flop A (.out(A_operand), .clk(clk), .writeEn(1'b1), .in(BUS1), .reset(1'b1));

  flop B (.out(B_operand), .clk(clk), .writeEn(1'b1), .in(BUS2), .reset(1'b1));

  flop pc(.out(address_instruction) , .clk(clk), .writeEn(PCwrite), .in(PCtype) , .reset(reset));

  flop ALUout(.in(ALU_result), .clk(clk), .writeEn(1'b1), .out(ALU_result_buffer), .reset(1'b1));

  flop SP(.in(stack_select_wire), .clk(clk), .writeEn(StackWrite), .out(SP_address), .reset(reset));

  flop MDR(.out(MDR_out), .clk(clk), .writeEn(1'b1), .in(data_out), .reset(1'b1));


  reg_file file (

             .clk(clk),
             .regWrite(RegWrite), .regWrite2(RegWrite2),
             .regDst1(Rd), .regDst2(Rs1), .regSrc1(Rs1),
             .regSrc2(Rs2_regfile),
             .bus_w(Register_result), .bus2_w(increment),
             .out1(BUS1), .out2(BUS2),
             .led(led)
           );

  MyALU alu(

        .ALUop(ALUop),
        .a(ALU_operand1),
        .b(ALU_operand2),
        .zero(z),
        .overflow(v),
        .negative(n),
        .result(ALU_result)
      );


  mux2_1 #(4) RegSrc_mux (.a(Rs2), .b(Rd), .select(RegSrc), .out(Rs2_regfile));

  mux4_1 ALUsrc1_mux (.a(pc_temp), .b(A_operand), .c(SP_address), .d(32'b0), .s(ALUsrcA), .out(ALU_operand1));

  mux4_1 ALUsrc2_mux (.a(B_operand), .b(extended_immediate), .c(32'b1), .d(32'b0), .s(ALUsrcB), .out(ALU_operand2));

  mux4_1 pcMux(.a(jumpTargetAddress), .b(ALU_result), .c(data_out), .d(ALU_result_buffer), .s(PCsrc), .out(PCtype));

  mux4_1 data_mem_address(.a(ALU_result_buffer), .b(decrement), .c(SP_address), .d(32'b0), .s(StackALU), .out(address_data));

  mux2_1 dataIn(.a(B_operand), .b(address_instruction), .select(MemWriteSel), .out(data_in));

  mux2_1 stack_select_mux (.a(ALU_result), .b(decrement), .select(StackSelect), .out(stack_select_wire));

  mux2_1 ALU_mux(.a(ALU_result_buffer), .b(MDR_out), .select(MemReg), .out(Register_result));

  extender ext(.in(immediate), .sign_ext(sign_ext), .out(extended_immediate));

endmodule
