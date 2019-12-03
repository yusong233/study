`timescale 1ns / 1ps

`include "head.v"
module NPC(
    input [31:0] pc_1, //
	 input [31:0] pc4_1,//
    input zero,
    input [2:0] npc_sel,
    input [25:0] Imm26_1,
    output [31:0] npc_1
    );
	 
	 wire [15:0] Imm16;
	 assign Imm16 = Imm26_1 [15:0];
	//delay slot pc+8
	assign npc_1 = (npc_sel==`NPC_BEQ && zero)? pc4_1+($signed({{16{Imm16[15]}},Imm16})<< 2): 
						(npc_sel==`NPC_JAL)? {pc_1[31:28],Imm26_1,2'b0}:
						(npc_sel==`NPC_J)?{pc_1[31:28],Imm26_1,2'b0}:
						pc4_1;//
endmodule
