module ALUcontrol (

    input [1:0] ALUctrl,
    input [5:0] opcode,
    output reg [1:0] ALUop
  );

  parameter
    AND = 2'b00,
    ADD = 2'b01,
    SUB = 2'b10,
    RSB = 2'b11;


  always @*
  begin
    case (ALUctrl)

      RSB, ADD, SUB :
        ALUop = ALUctrl; //the operation is generated by the main control
      2'b00 :
      begin
        case (opcode) //determine the operation based on the opcode
          6'b000001, 6'b000100 :
            ALUop = ADD; //opcode = ADDI, ADD (R-TYPE)
          6'b000010 :
            ALUop = SUB; //opcode = SUB R-TYPE
          6'b000000, 6'b000011 :
            ALUop = AND; //opcode = AND, ANDI
		  default :
		    ALUop = ADD;
        endcase
      end

	  default :
	    ALUop = ADD;
    endcase
  end

endmodule
