
module reg_file (

    input clk,
    input regWrite, regWrite2,
    input [3:0] regDst1, regDst2, regSrc1,
    input [3:0] regSrc2,
    input [31:0] bus_w, bus2_w,
    output reg [31:0] out1, out2,
    output led
  )  /*synthesis syn_ramstyle="registers"*/;

  reg [31:0] regArray [0:15];

  always @(*)
  begin //The output is taken asynchronously
    out1 = regArray[regSrc1];
    out2 = regArray[regSrc2];
  end

  always @(posedge clk)
  begin

    if (regWrite)
      regArray[regDst1] <= bus_w;

    if (regWrite2)
      regArray[regDst2] <= bus2_w;
  end

  assign led = regArray[0][0];

endmodule
