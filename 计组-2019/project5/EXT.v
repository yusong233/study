module EXT(op,out,EXTctrl);
input [15:0] op;
input [1:0] EXTctrl;
output [31:0] out;
wire [31:0] zero_ext,signed_ext,lui_ext,b_ext;
	assign zero_ext = {16'b0,op};
	assign signed_ext = {{16{op[15]}},op};
	assign lui_ext = {op,16'b0};
	assign b_ext = {{14{op[15]}},op,2'b0};

	MUX_2_16b MUX_EXT(
	.a0(zero_ext),
	.a1(signed_ext),
	.a2(lui_ext),
	.a3(b_ext),
	.Ctrl(EXTctrl),
	.out(out)
	);
endmodule