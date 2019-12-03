`timescale 1ns / 1ps

module npcctrl(
	input[1:0] pre_nPC_sel,
	input branch,
	output[1:0] nPC_sel
    );

	assign nPC_sel = ((pre_nPC_sel==2'b01)&branch)? 			2'b01:
					 (pre_nPC_sel==2'b10)? 				    2'b10:
					 (pre_nPC_sel==2'b11)?					2'b11:
					 										2'b00;
	
endmodule
