`timescale 1ns / 1ps

`include "head.v"
module NPC(
	 input [31:0] pc_F,
	 input [2:0] npc_sel,
	 input jump,
	 input [25:0] Imm26_D,
	 input [31:0] JRS,
	 output reg [31:0] npc
    );
	
	initial begin
		npc=0;
	end	
	
	wire [15:0] Imm16;
	assign Imm16 = Imm26_D [15:0];
	
	always @(*) begin
		case (npc_sel)
			`NPC_B:   begin
							if(jump)
								npc = pc_F+($signed({{16{Imm16[15]}},Imm16})<< 2);//不加4
							else
								npc = pc_F+4;
						 end
			`NPC_JAL: 		npc={pc_F[31:28],Imm26_D,2'b0};
			`NPC_JR: 		npc=JRS;		//周期问题！下下个周期就要写入，但是直到W周期才对上
			`NPC_J:			npc={pc_F[31:28],Imm26_D,2'b0};
			default:
								npc=pc_F+4;
		endcase
	end

endmodule

/*
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
*/
