`timescale 1ns / 1ps

module M(
    input clk,
	 input reset,
	 input [31:0] V2_2,
    input [4:0] A2_2,
    input [4:0] A3_2,
    input [31:0] AO_2,
    input [31:0] pc4_2,
    input [31:0] pc_2,
    output reg [31:0] V2_23,
    output reg [4:0] A2_23,
    output reg [4:0] A3_23,
    output reg [31:0] AO_23,
    output reg [31:0] pc4_23,
    output reg [31:0] pc_23
    );

	initial begin
			V2_23 = 0;
			A2_23 = 0;
			A3_23 = 0;
			AO_23 = 0;
			pc4_23 = 32'h3004;
			pc_23 = 32'h3000;
	end

	always @(posedge clk) begin
		if(reset) begin
			V2_23 <= 0;
			A2_23 <= 0;
			A3_23 <= 0;
			AO_23 <= 0;
			pc4_23 <= 0;
			pc_23 <= 0;
		end
		else begin
			V2_23 <= V2_2;
			A2_23 <= A2_2;
			A3_23 <= A3_2;
			AO_23 <= AO_2;
			pc4_23 <= pc4_2;
			pc_23 <= pc_2;
		end
	end

endmodule
