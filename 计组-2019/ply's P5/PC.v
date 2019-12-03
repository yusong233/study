`timescale 1ns / 1ps

module PC(
    input clk,
    input reset,
    input stall,
    input [31:0] npc_F,
    output reg [31:0] pc_F
    );
	
	initial begin
		pc_F=32'h3000;
	end
	
	always @(posedge clk) begin
		if(reset)
			pc_F<=32'h3000;
		else if(!stall)
			pc_F<=npc_F;
		else if(stall)
			pc_F<=pc_F;
	end

endmodule
