module tb_computer();

  reg CLK, reset;
  wire [31:0] data_out_instruction;
  wire led;
  always #10ns CLK = ~CLK;

  initial
  begin
    $display("Starting test");
	$dumpfile("dump.vcd");
	$dumpvars(0, tb_computer);
	$dumpvars(0, dut);
    CLK = 1;
    reset = 1;
    #1ns
     reset = 0;
    #1ns
     reset = 1;

    #8000ns $finish;
  end

  initial begin
        $monitor("instruction : 0x%x\n", data_out_instruction);

    $display("Test message");
    $fflush;
end

  computer dut (

             .CLK(CLK),
             .reset(reset),
             .data_out_instruction(data_out_instruction),
             .led(led)
           );

endmodule
