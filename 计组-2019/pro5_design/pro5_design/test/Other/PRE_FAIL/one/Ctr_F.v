`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:48:42 12/18/2018 
// Design Name: 
// Module Name:    Ctr_F 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
`include "head.v"
module Ctr_F(
    input clk,
	 input [5:0] op,
    input [5:0] func,
	 input zero,
    output reg [1:0] MPCF,
    output reg [5:0] op_01,
    output reg [5:0] func_01
    );
	
	wire addu, subu, ori, lui, lw, sw, beq, j, jal, jr;
	decoder instrdecode(.op(op), .func(func), .addu(addu), .subu(subu), .ori(ori), 
							.lui(lui), .lw(lw), .sw(sw), .beq(beq), .j(j), .jal(jal), .jr(jr));
	
	always @(posedge clk) begin
		//MPCF[0]<= jal|j;
		//MPCF[1]<=jr;
		MPCF <= ((beq&&zero)|j|jal)? `PC_NPC:
					jr? `PC_RD1:
					`PC_ADD4;
		op_01<=op;
		func_01<=func;
	end

endmodule
