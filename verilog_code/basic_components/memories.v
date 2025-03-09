module instructionMemory #(
    parameter WIDTH = 32
  ) (
    output reg [31:0] data,
    input clk,
    input [WIDTH-1:0] address
  );

  reg [31:0] mem [0: 32'h7000];

  initial
  begin
    $readmemh("mul.dat", mem,  0, 11);
  end

  assign data = mem[address];

endmodule



module dataMemory #(
    parameter WIDTH = 256
  )

  (output reg [31:0] dataOut,
   input clk,
   input [31:0] address,
   input [31:0] dataIn,
   input memRead, memWrite
  );

  reg [31:0] mem [0:100];

  initial
  begin
    mem[80] = 8;
    mem[81] = 44;
    mem[82] = 432;
    mem[83] = -122;
    mem[84] = -200;
    mem[85] = -2;
    mem[86] = 211;
    mem[87] = 12;
  end

  always @(posedge clk)
  begin

    if (memWrite)
      mem[address] <= dataIn;
  end

  always @*
  begin

    if (memRead)
      dataOut = mem[address];
	else dataOut = 0;
  end

endmodule
