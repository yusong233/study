`timescale 1ns / 1ps

`include "head.v"
module ALU(
    input [2:0] ALUctr_2,
    input [31:0] A_2,
    input [31:0] B_2,
    output [31:0] C_2
    );
	
	assign C_2 = (ALUctr_2==`ALU_SUBU)?(A_2-B_2):
					 (ALUctr_2==`ALU_OR)?(A_2|B_2):
					 (ALUctr_2==`ALU_LUI)?{B_2[15:0],16'b0}:
					 (A_2+B_2);

endmodule
