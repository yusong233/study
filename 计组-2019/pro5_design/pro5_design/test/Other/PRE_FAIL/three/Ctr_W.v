`timescale 1ns / 1ps

`include "head.v"
module Ctr_W(
    input clk,
    input [5:0] op_34,
    input [5:0] func_34,
	 input RegWr_M,
    output reg [1:0] MRFWDW,
    output reg RegWr_W,
	 output [1:0] Tnew_W
    );
	
	initial begin
		MRFWDW = 0;
		RegWr_W = 0;
	end
	
	reg [5:0] op_t;
   reg [5:0] func_t;
	 
	 initial begin
		 op_t<=0;
		 func_t<=0;
	 end
	 
	wire addu, subu, ori, lui, lw, sw, beq, j, jal, jr;
	decoder instrdecode(.op(op_t), .func(func_t), .addu(addu), .subu(subu), .ori(ori), 
							.lui(lui), .lw(lw), .sw(sw), .beq(beq), .j(j), .jal(jal), .jr(jr));
	
	//always @(*) begin
	always @(posedge clk)begin
		op_t=op_34;
		func_t=func_34;
		RegWr_W = RegWr_M;
		MRFWDW = lw? `WD_DM:
					jal? `WD_PC4:
					`WD_ALU;
	end
	
	assign Tnew_W = 2'b00;
	
endmodule
/*
MRFWDW
00£ºALU£¨AO@W£©
01£ºDM.DO (DR@W)
10£ºpc4 (PC4@W)
*/