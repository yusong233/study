`timescale 1ns / 1ps

module mips(
	input clk,
	input reset
    );
	 
	wire[31:0] npc,pc_F,pc_D,PC4_D,PC8_D,pc_E,PC4_E,PC8_E,pc_M,PC4_M,PC8_M,pc_W,PC4_W,PC8_W;
	wire[31:0] instr_F,instr_D,GRF_RD1,GRF_RD2,EXT_D,EXT_E,RD1_E,RD2_E,RD2_M,RD_M,RD_W;
	wire[31:0] ALUO_E,ALUO_M,ALUO_W,DataEXTO,MFBACK_M;
	wire[31:0] MALUBO,MMTRO,MFRSDO,MFRTDO,MFALUAEO,MFALUBEO,MFWDDO,WDG_W;
	wire[25:0] instr_index_D;
	wire[15:0] immediate_D;
	wire[9:0] pcAddr;
	wire[5:0] op_D,func_D;
	wire[4:0] rs_D,rt_D,rd_D,shamt_D,shamt_E,RA1_E,RA2_E,RA2_M;
	wire[4:0] MWAGEO,WAG_E,WAG_M,WAG_W;
	wire[3:0] ALUctrl_D,ALUctrl_E;
	wire[2:0] LdStType_D,LdStType_E,LdStType_M,LdStType_W;
	wire[1:0] pre_nPC_sel_D,nPC_sel,EXTctrl_D;
	wire[1:0] Tnew_D,Tnew_E,Tnew_M;
	wire[1:0] RegDst_D,ALUSrc_D,MemtoReg_D,RegDst_E,ALUSrc_E,MemtoReg_E,MemtoReg_M,MemtoReg_W;
	wire[1:0] MFRSD_sel,MFRTD_sel,MFALUAE_sel,MFALUBE_sel,MFWDD_sel;
	wire halt,branch,E_clr,stall;
	wire RegWrite_D,MemRead_D,MemWrite_D;
	wire RegWrite_E,MemRead_E,MemWrite_E;
	wire RegWrite_M,MemRead_M,MemWrite_M;
	wire RegWrite_W;

	assign pcAddr = pc_F[11:2];
	assign WDG_W = MMTRO;
	assign halt = stall;
	assign E_clr = stall;
	assign MFBACK_M = (MemtoReg_M==2'b10)? PC8_M:ALUO_M;
														

pc pc(clk,reset,halt,npc,pc_F);
im im(pcAddr,instr_F);

//cmp cmp(op_D,rt_D,MFRSDO,MFRTDO,branch);
//cmp cmp(op_D,func_D,rt_D,MFRSDO,MFRTDO,meet_requirement);
cmp cmp(instr_D,MFRSDO,MFRTDO,branch);  // *** is b-type? ***

	//assign skip_delay_slot = (beql & !meet_requirement); 						//if not jump			// execute delay slot or not?
	//assign instr_F_real =  skip_delay_slot? 				  32'd0: 			//if not jump, do not execute delay slot
	//																	  	instr_F;

IF_ID IF_ID(clk,reset,halt,instr_F,pc_F,
			instr_D,pc_D,op_D,rs_D,rt_D,rd_D,shamt_D,immediate_D,instr_index_D,PC4_D,PC8_D,Tnew_D); // *** T_new! ***

Stall Stall(instr_D,Tnew_D,Tnew_E,Tnew_M,rs_D,rt_D,WAG_E,WAG_M,RegWrite_E,RegWrite_M,stall);// *** T_use! ***

ControlUnit ControlUnit(instr_D,
						RegDst_D,ALUSrc_D,MemtoReg_D,LdStType_D,RegWrite_D,MemRead_D,MemWrite_D,pre_nPC_sel_D,ALUctrl_D,EXTctrl_D); // *** control signal! ***

  grf grf(clk,reset,rs_D,rt_D,WAG_W,MMTRO,RegWrite_W,pc_W,GRF_RD1,GRF_RD2);
//grf grf(clk,reset,rs_D,rt_D,WAG_W,MMTRO,ALUO_W,LdStType_W,RegWrite_W,pc_W,GRF_RD1,GRF_RD2); // is load-type?

MFMUX MFRSD(MFRSD_sel,GRF_RD1,WDG_W,MFBACK_M,RD1_E,MFRSDO);
MFMUX MFRTD(MFRTD_sel,GRF_RD2,WDG_W,MFBACK_M,RD2_E,MFRTDO);

ext16 MEXTD(immediate_D,EXTctrl_D,EXT_D);

npcctrl npcctrl(pre_nPC_sel_D,branch,nPC_sel);
MPC MPC(nPC_sel,pc_F,EXT_D,MFRSDO,instr_index_D,npc);

MWAGE MWAGE(RegDst_D,rt_D,rd_D,MWAGEO);

// assign RegWrite_D_real = (movz & !meet_requirement)? 0: 							//not equal, no write
//									 (bgezal & !meet_requirement)? 0 : RegWrite_D; 		//no jump, no write

ID_EX ID_EX(clk,reset,E_clr,pc_D,rs_D,rt_D,shamt_D,MWAGEO,EXT_D,MFRSDO,MFRTDO,PC4_D,PC8_D,
			RegDst_D,ALUSrc_D,MemtoReg_D,LdStType_D,RegWrite_D,MemRead_D,MemWrite_D,ALUctrl_D,Tnew_D,
			pc_E,RA1_E,RA2_E,shamt_E,WAG_E,EXT_E,RD1_E,RD2_E,PC4_E,PC8_E,
			RegDst_E,ALUSrc_E,MemtoReg_E,LdStType_E,RegWrite_E,MemRead_E,MemWrite_E,ALUctrl_E,Tnew_E);

MFMUX MFALUAE(MFALUAE_sel,RD1_E,0,WDG_W,MFBACK_M,MFALUAEO);
MFMUX MFALUBE(MFALUBE_sel,RD2_E,0,WDG_W,MFBACK_M,MFALUBEO);
MALUB MALUB(ALUSrc_E,MFALUBEO,EXT_E,MALUBO);
alu alu(MFALUAEO,MALUBO,shamt_E,ALUctrl_E,ALUO_E);   // *** is calculate-type? / R-type? ***

EX_MEM EX_MEM(clk,reset,pc_E,RA2_E,WAG_E,MFALUBEO,ALUO_E,PC4_E,PC8_E,
					MemtoReg_E,LdStType_E,RegWrite_E,MemRead_E,MemWrite_E,Tnew_E,
					pc_M,RA2_M,WAG_M,RD2_M,ALUO_M,PC4_M,PC8_M,
					MemtoReg_M,LdStType_M,RegWrite_M,MemRead_M,MemWrite_M,Tnew_M);

MFMUX MFWDD(MFWDD_sel,RD2_M,0,0,WDG_W,MFWDDO);

dm dm(clk,reset,LdStType_M,ALUO_M,MFWDDO,MemRead_M,MemWrite_M,pc_M,RD_M);

MEM_WB MEM_WB(clk,reset,pc_M,RD_M,ALUO_M,WAG_M,PC4_M,PC8_M,MemtoReg_M,LdStType_M,RegWrite_M,
			  pc_W,RD_W,ALUO_W,WAG_W,PC4_W,PC8_W,MemtoReg_W,LdStType_W,RegWrite_W);

DataEXT DataEXT(ALUO_W,LdStType_W,RD_W,DataEXTO);// if the load is not relative to the grf[] value itself, use DataEXT

MMTR MMTR(MemtoReg_W,ALUO_W,DataEXTO,PC8_W,MMTRO);

MFSEL MFSEL(rs_D,rt_D,RA1_E,RA2_E,RA2_M,WAG_E,WAG_M,WAG_W,Tnew_E,Tnew_M,RegWrite_E,RegWrite_M,RegWrite_W,
			MFRSD_sel,MFRTD_sel,MFALUAE_sel,MFALUBE_sel,MFWDD_sel);

endmodule
