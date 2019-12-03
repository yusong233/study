`timescale 1ns / 1ps

`include "head.v"
 module Controller(
    input [31:0] instr_D,
    input jump,
    output reg PC_sel, //MPCF,
	 output reg ExtOp,
	 output reg [2:0] npc_sel,
    output reg [1:0] A3_sel, //MA3E_D,
	 output reg [2:0] ALUctr_D,
	 output reg ALUBE_sel_D, //MALUBE_D,
	 output reg [1:0] RFWDW_sel_D, //MRFWDW_D,
    output reg RegWr_D,
	 output reg MemWr_D
    );
	
	wire [5:0] op_D, func_D;
	assign op_D = instr_D [31:26];
	assign func_D = instr_D [5:0];
	
	wire addu, subu, ori, lui, lw, sw, beq, j, jal, jr;
	decoder deinstr(op_D, func_D,
						addu, subu, ori, lui, lw, sw, beq, j, jal, jr);
	
	initial begin
		 PC_sel=0;
		 ExtOp=0;
		 npc_sel=0;
		 A3_sel=0;
		 ALUctr_D=0;
		 ALUBE_sel_D=0;
		 RFWDW_sel_D=0;
		 RegWr_D=0;
		 MemWr_D=0;
	end
	
	always @(*) begin
		PC_sel = ((beq&&jump)|j|jal|jr)? 1: 0;
		
		ExtOp = lw|sw;
		
		npc_sel[0] = beq|jr;
		npc_sel[1] = jal|jr;
		npc_sel[2] = j;	
		
		A3_sel = (ori|lui|lw)? `A3_RT:
								jal? `A3_1f:
									  `A3_RD;
		
		ALUctr_D = subu? `ALU_SUBU:
					  ori?  `ALU_OR:
					  lui?  `ALU_LUI:
							  `ALU_ADDU;
		
		ALUBE_sel_D = ori|lw|sw|lui;
		
		RFWDW_sel_D = lw?  `WD_DM:
					    jal?  `WD_PC4:
							    `WD_ALU;
	
		RegWr_D = addu|subu|ori|lui|lw|jal;
		
		MemWr_D = sw;
	end

endmodule
/*集中式译码，逐级传递*/