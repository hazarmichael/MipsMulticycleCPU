module CPU (

    input [31:0] data_out, data_out_instruction,
    input clk, reset,
    output [31:0] data_in, address_data,
    address_instruction,
    output led,
    output MemWrite, MemRead
  );

  wire [5:0] opcode; /*synthesis syn_keep=1*/
  wire [1:0] mode;

  wire    MemWriteSel, MemReg, RegSrc,
          RegWrite, RegWrite2,
          IRwrite, PCwriteUncond,
          StackWrite, sign_ext, PCwriteCond, PCwrite, StackSelect;

  wire [1:0] ALUsrcA, ALUsrcB,
       PCsrc , StackALU;
  wire [1:0] ALUctrl, ALUop; /*synthesis syn_keep=1*/ 
  wire [31:0] ALUresult;
  wire [3:0] state;

  wire z, n, v;


  datapath d1 (

             .MemWriteSel(MemWriteSel),
             .MemReg(MemReg), .RegSrc(RegSrc),
             .RegWrite(RegWrite), .RegWrite2(RegWrite2),
             .IRwrite(IRwrite), .PCwrite(PCwrite), .StackALU(StackALU),
             .StackWrite(StackWrite), .sign_ext(sign_ext) , .clk(clk),
             .StackSelect(StackSelect),

             .data_out_instruction(data_out_instruction), .data_out(data_out),

             .ALUsrcA(ALUsrcA), .ALUsrcB(ALUsrcB),
             .PCsrc(PCsrc), .ALUop(ALUop), .reset(reset),

             .opcode(opcode),
             .mode(mode),
             .address_data(address_data),
             .address_instruction(address_instruction), .data_in(data_in),
             .z(z), .n(n), .v(v),
             .ALU_result(ALUresult),
             .led(led)
           );


  mainController control(

                   .MemWriteSel(MemWriteSel),
                   .MemReg(MemReg), .RegSrc(RegSrc),
                   .RegWrite(RegWrite), .RegWrite2(RegWrite2),
                   .IRwrite(IRwrite), .PCwriteUncond(PCwriteUncond), .StackALU(StackALU),
                   .StackWrite(StackWrite), .sign_ext(sign_ext),
                   .MemWrite(MemWrite), .MemRead(MemRead),


                   .ALUsrcA(ALUsrcA), .ALUsrcB(ALUsrcB),
                   .PCsrc(PCsrc), .ALUctrl(ALUctrl),

                   .clk(clk), .opcode(opcode),
                   .mode(mode), .reset(reset),
                   .state(state), .StackSelect(StackSelect)
                 );


  PCcontrol pc_control(

              .opcode(opcode),
              .z(z), .v(v), .n(n),
              .pcWriteUncond(PCwriteUncond),
              .writeEn(PCwrite),
              .state(state)
            );


  ALUcontrol ALU_control(

               .ALUop(ALUop),
               .opcode(opcode),
               .ALUctrl(ALUctrl)
             );

endmodule
