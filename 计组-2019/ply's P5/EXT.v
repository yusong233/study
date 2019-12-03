`timescale 1ns / 1ps

module EXT(
	input ExtOp,
	input [15:0] Imm16_D,
	output [31:0] E32_D
    );

	assign E32_D = (ExtOp)?{{16{Imm16_D[15]}},Imm16_D}:
						{16'b0,Imm16_D};

endmodule
/*
0£∫¡„¿©’π
1£∫∑˚∫≈¿©’π
*/