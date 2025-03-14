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
    $readmemb("memories/inst.dat", mem,  0, 11);
  end

  assign data = mem[address];

endmodule
