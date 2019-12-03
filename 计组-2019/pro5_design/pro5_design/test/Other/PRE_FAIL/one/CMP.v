`timescale 1ns / 1ps

module CMP(
    input [31:0] D1_1,
    input [31:0] D2_1,
    output zero
    );
	
	assign zero = (D1_1 == D2_1);

endmodule
