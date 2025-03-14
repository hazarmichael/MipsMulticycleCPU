module flop (
    output reg [31:0] out,
    input clk,
    input writeEn,
    input [31:0] in,
    input reset
  );
  always @(posedge clk or negedge reset)
  begin

    if (!reset)
      out <= 0;

    else if (writeEn)
      out <= in;
  end

endmodule
