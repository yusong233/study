`timescale 1ns / 1ps

`include "head.v"
module Ctr_D(
	 input clk,
    input [5:0] op_01,
    input [5:0] func_01,
	 input zero,
	 output reg [1:0] MPCF,
    output reg [1:0] MA3E,
    output reg ExtOp_1,
    output reg [2:0] npc_sel,
	 output reg [5:0] op_12,
	 output reg [5:0] func_12,
	 output reg RegWr_D
    );
	
	wire addu, subu, ori, lui, lw, sw, beq, j, jal, jr;
	decoder instrdecode(.op(op_01), .func(func_01), .addu(addu), .subu(subu), .ori(ori), 
							.lui(lui), .lw(lw), .sw(sw), .beq(beq), .j(j), .jal(jal), .jr(jr));
	
	initial begin
		MPCF = `PC_ADD4;
		MA3E = 0;
		ExtOp_1 = 0;
		npc_sel = 0;
		RegWr_D = 0;
		op_12 = 0;
		func_12 = 0;
	end
	
	always @(*) begin				
		ExtOp_1 = lw|sw;
		MA3E = (ori|lui|lw)? `A3_RT:
				  jal? `A3_1f:
				  `A3_RD;
		MPCF = ((beq&&zero)|j|jal)? `PC_NPC:
					jr? `PC_RD1:
					`PC_ADD4;		  
		npc_sel[0] = beq|jr;
		npc_sel[1] = jal|jr;
		npc_sel[2] = j;	
		RegWr_D = addu|subu|ori|lui|lw|jal;
	end
	
	always @(posedge clk) begin
		/*MA3E <= (ori|lui|lw)? `A3_RT:
				  jal? `A3_1f:
				  `A3_RD;
		MPCF <= ((beq&&zero)|j|jal)? `PC_NPC:
					jr? `PC_RD1:
					`PC_ADD4;		  
		npc_sel[0] <= beq|jr;
		npc_sel[1] <= jal|jr;
		npc_sel[2] <= j;	
		RegWr_D <= addu|subu|ori|lui|lw|jal;*/
		op_12 <= op_01;
		func_12 <= func_01;
	end

endmodule
/*
MA3E
00：rd (IR[rd]@D)
01：rt (IR[rt]@D)
10：0x1f

ExtOp_1
0：零扩展
1：符号扩展

npc_sel
000：非跳转
001：BEQ
010：JAL
011：JR
100：J
*/