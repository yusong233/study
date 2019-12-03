`timescale 1ns / 1ps

module W(
    input clk,
	 input reset,
	 input [4:0] A3_3,
    input [31:0] AO_3,
    input [31:0] DR_3,
    input [31:0] pc4_3,
    input [31:0] pc_3,
    output reg [4:0] A3_34,
    output reg [31:0] AO_34,
    output reg [31:0] DR_34,
    output reg [31:0] pc4_34,
    output reg [31:0] pc_34
    );
	
	initial begin
			A3_34 = 0;
			AO_34 = 0;
			DR_34 = 0;
			pc4_34 = 32'h3004;
			pc_34 = 32'h3000;
	end
	
	always @(posedge clk) begin
		if(reset) begin
			A3_34 <= 0;
			AO_34 <= 0;
			DR_34 <= 0;
			pc4_34 <= 32'h3004;
			pc_34 <= 32'h3000;
		end
		else begin
			A3_34 <= A3_3;
			AO_34 <= AO_3;
			DR_34 <= DR_3;
			pc4_34 <= pc4_3;
			pc_34 <= pc_3;
		end
	end

endmodule
