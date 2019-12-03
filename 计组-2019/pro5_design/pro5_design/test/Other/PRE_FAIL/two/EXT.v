`timescale 1ns / 1ps

module EXT(
	input ExtOp_1,
	input [15:0] Imm_1,
	output [31:0] E32_1
    );

	assign E32_1 = (ExtOp_1)?{{16{Imm_1[15]}},Imm_1}:
						{16'b0,Imm_1};

endmodule
/*
0£∫¡„¿©’π
1£∫∑˚∫≈¿©’π
*/