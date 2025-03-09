module PCcontrol (

    input [5:0] opcode,
    input z, v, n,
    input pcWriteUncond,
    input [3:0] state,
    output writeEn
  );

  parameter BNE = 6'b001011,
            BEQ = 6'b001010,
            BLT = 6'b001001,
            BGT = 6'b001000;

  wire branch;

  assign branch = ((opcode == BNE) && !z) ||
         ((opcode == BEQ) && z) ||
         ((opcode ==BGT) && (!z && !(n ^ v))) ||
         ((opcode == BLT) && (n ^ v));


  assign writeEn = ((state == 7) && branch) || pcWriteUncond;

endmodule
