`timescale 1ns / 1ps

module pc(
	input clk,
	input reset,
	input halt,
	input[31:0] npc,
	output reg[31:0] pc
    );
	 
	initial begin
		pc <= 32'h0000_3000;
	end

	always @(posedge clk) begin
		if(reset) pc <= 32'h0000_3000;
		else if(halt) pc <= pc;
		else pc <= npc;
	end
		


endmodule
