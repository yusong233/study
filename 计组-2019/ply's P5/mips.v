`timescale 1ns / 1ps

`include "head.v"
module mips(
    input clk,
    input reset
    );

// wire claration
	//F part
	wire stall;
	wire [31:0] pc_F, pc_D, pc_E, pc_M, pc_W, npc_F, npc_D;
	wire [31:0] instr_F, instr_D, instr_E;
	//control
	wire jump, PC_sel, ExtOp, ALUBE_sel_D, ALUBE_sel_E;
	wire RegWr_D, MemWr_D, RegWr_E, MemWr_E, RegWr_M, MemWr_M, RegWr_W;
	wire [1:0] A3_sel, RFWDW_sel_D, RFWDW_sel_E, RFWDW_sel_M, RFWDW_sel_W;
	wire [2:0] npc_sel, ALUctr_D, ALUctr_E;
	//GRF_Reg Part
	wire [4:0] A1_D, A2_D, A3_D, A1_E, A2_E, A3_E, A2_M, A3_M, A3_W;
	wire [4:0] RD_D, RT_D;
	wire [31:0] V1_D, V2_D, E32_D, V1_E, V2_E, E32_E, V2_M;
	//D part
	wire [15:0] Imm16_D;
	wire [25:0] Imm26_D;
	wire [31:0] RD1_D, RD2_D;
	//E part
	wire [31:0] ALU_A, ALU_B, pre_ALU_B, AO_E, AO_M, AO_W, AOM_PC8;
	//M part
	wire [31:0] DIn_M, DR_M, DR_W; //???
	//W part
	wire [31:0] WD_W;
	//Hazard part
	wire [1:0] Tnew_E, Tnew_M, Tnew_W;
	//Forward part
	wire FWDM;
	wire [1:0] FRD1D, FRD2D, FALUAE, FALUBE;

////////////////////////////////////////////////////////////////////////////////////////////
// F part
	MUX_Two2one F_MPC (PC_sel, (pc_F+32'h4), npc_D, 
							npc_F); //32 bit
		/* 选择下一条指令： 0-pc+4, 1-npc */
	PC F_pc (clk, reset, stall, npc_F, 
			   pc_F);
	IM F_im (pc_F,
			   instr_F);
	
	IF_ID D_reg (clk, reset, stall, pc_F, instr_F,
					 pc_D, instr_D);

//D part
	Controller D_ctr (instr_D, jump,
							PC_sel, ExtOp, npc_sel, A3_sel, ALUctr_D,
							ALUBE_sel_D, RFWDW_sel_D, RegWr_D, MemWr_D);	// change the port name
	//apart the instruction
	assign A1_D = instr_D[`rs];
	assign A2_D = instr_D[`rt];
	assign Imm16_D = instr_D[15:0];
	assign Imm26_D = instr_D[25:0];
	
	//Forward D choose V1_D, V2_D
	MUX_Four2one D_MFRD1 (FRD1D, RD1_D, WD_W, AOM_PC8, V1_E,
								V1_D);	//32bit							
	MUX_Four2one D_MFRD2 (FRD2D, RD2_D, WD_W, AOM_PC8, V2_E,
								V2_D);	//32bit
		/* 转发数据正确性&优先级!!! */
	
	NPC D_npc (pc_F, npc_sel, jump, Imm26_D, V1_D,
				  npc_D);
	
	GRF D_grf (pc_W, clk, reset, A1_D, A2_D, A3_W, RegWr_W, WD_W,
				  RD1_D, RD2_D);
		/* rs[25:21]-A1, rt[20:16]-A2 */
	
	CMP D_cmp (V1_D, V2_D,
				  jump);
	
	EXT D_ext (ExtOp, Imm16_D,
				  E32_D);
	
	assign RD_D = instr_D[`rd];
	assign RT_D = instr_D[`rt];
	MUX_Three2one D_MA3 (A3_sel, RD_D, RT_D, 5'h1f,
								A3_D);
	defparam D_MA3.WIDTH = 5;	//5bit
	
	ID_EXE E_reg (clk, reset, stall,
					  pc_D, V1_D, V2_D, A1_D, A2_D, A3_D, E32_D, ALUctr_D, ALUBE_sel_D, RFWDW_sel_D, RegWr_D, MemWr_D, instr_D,
					  pc_E, V1_E, V2_E, A1_E, A2_E, A3_E, E32_E, ALUctr_E, ALUBE_sel_E, RFWDW_sel_E, RegWr_E, MemWr_E, instr_E,
					  Tnew_E);
	
//E part
	//Forward E choose ALU_A, ALU_B
	MUX_Three2one E_MFALUA (FALUAE, V1_E, WD_W, AOM_PC8,
								   ALU_A);
	MUX_Three2one E_MFALUBP (FALUBE, V2_E, WD_W, AOM_PC8,
								    pre_ALU_B);
						
	MUX_Two2one E_MALUB (ALUBE_sel_E, pre_ALU_B, E32_E,
								ALU_B);
	
	ALU E_alu (ALUctr_E, ALU_A, ALU_B,
				  AO_E);
				  
	EXE_MEM M_reg (clk, reset,
						pc_E, /*V2_E*/pre_ALU_B, A2_E, AO_E, A3_E, RFWDW_sel_E, RegWr_E, MemWr_E, Tnew_E,	//细心！！！需求者
						pc_M, V2_M, A2_M, AO_M, A3_M, RFWDW_sel_M, RegWr_M, MemWr_M, Tnew_M);
	
//M part
	//Foward M choose DR_M
	MUX_Two2one M_MFWD(FWDM, V2_M, WD_W,
							 DIn_M); 
	
	DM M_dm (pc_M, clk, reset, AO_M, MemWr_M, DIn_M,DR_M);
		
	MUX_Two2one M_MWBD((RFWDW_sel_M == 2'b10), AO_M, pc_M+32'h8,
							 AOM_PC8);
		
		
	MEM_WR W_reg (clk, reset,
					  pc_M, A3_M, AO_M, DR_M, RFWDW_sel_M, RegWr_M, Tnew_M,
					  pc_W, A3_W, AO_W, DR_W, RFWDW_sel_W, RegWr_W, Tnew_W);
				
//W part
	MUX_Three2one W_MRFWD (RFWDW_sel_W, AO_W, DR_W, (pc_W+32'h8),
								  WD_W);
	/* 延迟槽操作+8 */

///////////////////////////////////////////////////////////////////////////
//HAZARD part
	STALL Stall_module (instr_D, A3_E, A3_M, RegWr_E, RegWr_M,
							  Tnew_E, Tnew_M, Tnew_W,
							  stall);

//FORWARD part
	ForwardUnit Foward_module(instr_D, A3_E, A3_M, A3_W, A1_E, A2_E, A2_M,
									  MemWr_D, RegWr_E, RegWr_M, RegWr_W, Tnew_E, Tnew_M,
									  FRD1D, FRD2D, FALUAE, FALUBE, FWDM);

endmodule
