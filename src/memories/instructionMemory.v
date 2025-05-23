module instructionMemory #(
    parameter WIDTH = 32
  ) (
    output [31:0] data,
    input clk,
    input [WIDTH-1:0] address
  );

  reg [31:0] mem [0: 32'h7000];

  initial
  begin
    $readmemb("src/memories/inst.dat", mem,  0, 11);
  end

  assign data = mem[address];

endmodule
