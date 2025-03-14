module tb_computer();

  reg clk, reset;
  wire [31:0] data_out_instruction;
  always #10ns clk = ~clk;

  initial
  begin
    $display("Starting test");
	$dumpfile("dump.vcd");
	$dumpvars(0, tb_computer);
	$dumpvars(0, dut);
    clk = 1;
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

             .clk(clk),
             .reset(reset),
             .data_out_instruction(data_out_instruction)
           );

endmodule
