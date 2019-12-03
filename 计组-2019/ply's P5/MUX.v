`timescale 1ns / 1ps

`define zero 2'b00
`define one  2'b01
`define two  2'b10
`define three 2'b11

module MUX_Four2one(sel, option_0, option_1, option_2, option_3, result);
	 parameter WIDTH = 32;
	 input [1:0] sel;
	 input [WIDTH:1] option_0;
	 input [WIDTH:1] option_1;
	 input [WIDTH:1] option_2;
	 input [WIDTH:1] option_3;
	 output reg [WIDTH:1] result;
	 
	 initial begin
		result = 0;
	 end
	 
	always @(*) begin
		case(sel)
			`zero: result = option_0;
			`one:  result = option_1;
			`two:  result = option_2;
			`three:result = option_3;
			default:
				result = option_0;
		endcase
	end
	
endmodule

module MUX_Three2one(sel, option_0, option_1, option_2, result);
	 parameter WIDTH = 32;
	 input [1:0] sel;
	 input [WIDTH:1] option_0;
	 input [WIDTH:1] option_1;
	 input [WIDTH:1] option_2;
	 output reg [WIDTH:1] result;
	 
	 initial begin
		result = 0;
	 end
	 
	always @(*) begin
		case(sel)
			`zero: result = option_0;
			`one:  result = option_1;
			`two:  result = option_2;
			default:
				result = option_0;
		endcase
	end
	
endmodule

module MUX_Two2one (sel, option_0, option_1, result);
	parameter WIDTH = 32;
	input sel;
	input [WIDTH:1] option_0;
	input [WIDTH:1] option_1;
	output reg [WIDTH:1] result;
	
	initial begin
		result = 0;
	end
	
	//assign result = sel? option_1 : option_0;
	always @(*) begin
		case(sel)
			0: result = option_0;
			1: result = option_1;
			default:
				result = option_0;
		endcase
	end
endmodule
