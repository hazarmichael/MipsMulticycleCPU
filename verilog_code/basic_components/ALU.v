module ALU (

    input [1:0] ALUop,
    input signed [31:0] a,
    input signed [31:0] b,
    output zero, overflow, negative,
    output reg signed [31:0] result
  );

  reg [1:0] carry;

  assign zero = (result == 0);
  assign negative = result[31];
  assign overflow = carry[1] ^ carry[0];


    always @* 
    begin
	carry = 2'b00;

    case (ALUop)
      2'b00 :
        result = a & b;
      2'b01 :
      begin
        {carry[0], result[30:0]} = a[30:0] + b[30:0];
        {carry[1], result[31]} = a[31] + b[31] + carry[0];
      end

      2'b10 :
        result = a - b;
      2'b11 :
        result = b - a;
	  default :
	    result = 0;
    endcase
  end
endmodule
