// Purpose: This module is the top level module for 
//the computer. It instantiates the CPU, instructionMemory, 
//and dataMemory modules. It also connects the inputs and 
//outputs of the modules.

module computer (

    input clk, reset,
    output [31:0] data_out_instruction);

  wire [31:0] data_out, data_in, address_data, address_inst;

  wire memWrite, memRead;

  instructionMemory inst_mem(

                      .data(data_out_instruction),
                      .clk(clk),
                      .address(address_inst)
                    );

  dataMemory data_mem(

               .dataOut(data_out),
               .clk(clk),
               .address(address_data),
               .dataIn(data_in),
               .memRead(memRead),
               .memWrite(memWrite)
             );


  CPU cpu(

        .data_out(data_out),
        .data_out_instruction(data_out_instruction),
        .clk(clk),
        .data_in(data_in),
        .address_data(address_data),
        .address_instruction(address_inst),
        .MemWrite(memWrite),
        .MemRead(memRead),
        .reset(reset)
      );

endmodule
