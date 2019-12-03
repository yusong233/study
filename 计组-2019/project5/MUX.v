`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////

//EXT_op
module MUX_2_16b(a0,a1,a2,a3,Ctrl,out);
	input [31:0] a0,a1,a2,a3;
	input [1:0] Ctrl;
	output [31:0] out;
	wire [31:0] out;
	assign out = (Ctrl == 2'b00) ? a0:
				    (Ctrl == 2'b01) ? a1:
				    (Ctrl == 2'b10) ? a2:
				    (Ctrl == 2'b11) ? a3:
				 				       32'b0;

endmodule

//MemtoReg,Pc_Src
module MUX_2_32b(a0,a1,a2,a3,Ctrl,out);
input [31:0] a0,a1,a2,a3;
input [1:0] Ctrl;
output [31:0] out;
wire [31:0] out;
assign out = (Ctrl == 2'b00) ? a0:
			 (Ctrl == 2'b01) ? a1:
			 (Ctrl == 2'b10) ? a2:
			 (Ctrl == 2'b11) ? a3:
			 				32'b0;
endmodule

//Reg_dst
module MUX_2_5b(a0,a1,a2,Ctrl,out);
input [4:0] a0,a1,a2;
input [1:0] Ctrl;
output [4:0] out;
wire [4:0] out;

assign out = (Ctrl == 2'b00) ? a0:
			 (Ctrl == 2'b01) ? a1:
			 (Ctrl == 2'b10) ? a2:
			 				 5'b0;
endmodule


//ALU_Src
module MUX_1_32b(a0,a1,Ctrl,out);
input [31:0] a0,a1;
input Ctrl;
output [31:0] out;
wire [31:0] out;

assign out = (Ctrl == 1) ? a1:a0;
endmodule

		                   