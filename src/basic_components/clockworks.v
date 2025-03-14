module clockworks
  (
    input  CLK,   // clock pin of the board
    output clk   // (optionally divided) clock for the design.
  );
  parameter SLOW = 0; // divide the clock frequency by 2^SLOW


  reg [SLOW:0] slow_CLK = 0;
  always @(posedge CLK)
  begin
    slow_CLK <= slow_CLK + 1;
  end
  assign clk = slow_CLK[SLOW];

endmodule
