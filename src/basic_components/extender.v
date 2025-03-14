module extender (

    input [15:0] in,
    input sign_ext,
    output reg [31:0] out
  );

  always @*
  begin
    if (sign_ext && in[15])
      out = {16'hFFFF, in};
    else
      out = {16'b0, in};
  end

endmodule
