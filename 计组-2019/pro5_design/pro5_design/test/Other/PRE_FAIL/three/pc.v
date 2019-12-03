`timescale 1ns / 1ps

module PC(
    input clk,
    input reset,
	 input stall,
    input [31:0] npc_0,
    output reg [31:0] pc_0
    );
	initial begin
		pc_0<=32'h3000;
	end
	
	always @(posedge clk) begin
		if(reset)
			pc_0<=32'h3000;
		else if(reset==0&&!stall)
			pc_0<=npc_0;
		else if(reset==0&&stall)	//¶³½áPC
			pc_0<=pc_0;
	end

endmodule
