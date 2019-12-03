`timescale 1ns / 1ps

module ADD4(
    input [31:0] pc_0,
    output [31:0] pc4_0
    );

	assign pc4_0 = pc_0 + 32'h0000_0004;

endmodule
