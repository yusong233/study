`timescale 1ns / 1ps

`include "head.v"
module ALU(
    input [2:0] ALUctr,
    input [31:0] A,
    input [31:0] B,
    output [31:0] C
    );
	
	assign C = (ALUctr==`ALU_SUBU)?(A-B):
				  (ALUctr==`ALU_OR)?(A|B):
				  (ALUctr==`ALU_LUI)?{B[15:0],16'b0}:
				  (A+B);

endmodule
