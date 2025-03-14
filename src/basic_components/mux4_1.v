module mux4_1  #(
    parameter WIDTH = 32
  )

  (input [WIDTH-1:0] a, b, c, d,
   input [1:0] s,

   output reg [WIDTH-1:0] out
  );


  always @*
  begin

    case (s)
      2'b00 :
        out = a;
      2'b01 :
        out = b;
      2'b10 :
        out = c;
      2'b11 :
        out = d;
	  default :
	    out = a;
    endcase
  end

endmodule