`timescale 1ns / 1ps

module E(
    input clk,
	 input reset,
	 input stall,
	 input [31:0] V1_1,
    input [31:0] V2_1,
    input [4:0] A1_1,
    input [4:0] A2_1,
    input [4:0] A3_1,
    input [31:0] E32_1,
    input [31:0] pc4_1,
    input [31:0] pc_1,
    output reg [31:0] V1_12,
    output reg [31:0] V2_12,
    output reg [4:0] A1_12,
    output reg [4:0] A2_12,
    output reg [4:0] A3_12,
    output reg [31:0] E32_12,
    output reg [31:0] pc4_12,
    output reg [31:0] pc_12
    );

	initial begin
			V1_12 = 0;
			V2_12 = 0;
			A1_12 = 0;
			A2_12 = 0;
			A3_12 = 0;
			E32_12 = 0;
			pc4_12 = 32'h3004;
			pc_12 = 32'h3000;
	end

	always @(posedge clk) begin
		if(reset | stall) begin
			V1_12 <= 0;
			V2_12 <= 0;
			A1_12 <= 0;
			A2_12 <= 0;
			A3_12 <= 0;
			E32_12 <= 0;
			pc4_12 <= 0;
			pc_12 <= 0;
		end
		else  begin
			V1_12 <= V1_1;
			V2_12 <= V2_1;
			A1_12 <= A1_1;
			A2_12 <= A2_1;
			A3_12 <= A3_1;
			E32_12 <= E32_1;
			pc4_12 <= pc4_1;
			pc_12 <= pc_1;
		end
	end

endmodule
