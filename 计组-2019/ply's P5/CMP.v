`timescale 1ns / 1ps

module CMP(
    input [31:0] CMP1_D,
    input [31:0] CMP2_D,
    output jump
    );
	
	assign jump = (CMP1_D == CMP2_D);

endmodule
