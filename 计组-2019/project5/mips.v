`timescale 1ns / 1ps

`define GRF31 5'b11111
`define rs 25:21
`define rt 20:16
`define rd 15:11

module mips(clk,reset);

input clk,reset;

wire [31:0] Instr_F,Instr_D,Instr_E,Instr_M,Instr_W;
wire [31:0] PC_F,nPC,PC_D,PC_E,PC_M,PC_W;

wire [1:0] EXTop_F,MemToReg_F,RegDst_F,PC_Src_F,EXTop_D,MemToReg_D,RegDst_D,PC_Src_D;
wire [1:0] MemToReg_E,MemToReg_M,MemToReg_W;

wire [2:0] bCtrl_F,ALUCtrl_F,bCtrl_D,ALUCtrl_D,ALUCtrl_E;

wire branch_F,MemRead_F,MemWrite_F,ALUSrc_F,RegWrite_F;
wire branch_D,MemRead_D,MemWrite_D,ALUSrc_D,RegWrite_D;
wire MemWrite_E,MemRead_E,ALUSrc_E,RegWrite_E;
wire MemWrite_M,MemRead_M,RegWrite_M,RegWrite_W;

wire stop;

wire [1:0] Tnew_E,Tnew_M,Tnew_W;

wire [1:0] D_RS_CTRL,D_RT_CTRL,ALU_op1_Ctrl,ALU_op2_Ctrl;
wire DM_Ctrl;

wire [31:0] RD1_D,RD2_D;
wire [4:0] A1_D, A2_D, A3_D, A1_E, A2_E, A3_E, A2_M, A3_M, A3_W;
wire [31:0] V1_D, V2_D, V1_E, V2_E, EXTout_D,EXTout_E, V2_M;
wire [15:0] Imm16_D;

wire [31:0] ALU_A, ALU_B, pre_ALU_B, ALUout_E, ALUout_M, ALUout_W, AOM_PC8;

wire [31:0] DIn_M, DR_M, DR_W;

wire [31:0] WD_W;

stall my_stall (
    .instr_D(Instr_D), .A3_E(A3_E), .A3_M(A3_M), 
    .RegWr_E(RegWrite_E), .RegWr_M(RegWrite_M), 
    .Tnew_E(Tnew_E), .Tnew_M(Tnew_M), .Tnew_W(Tnew_W), 
    .stop(stop)
    );

repost my_repost (
    .instr_D(Instr_D), 
    .A3_E(A3_E), .A3_M(A3_M), .A3_W(A3_W), 
    .A1_E(A1_E), 
    .A2_E(A2_E), .A2_M(A2_M), 
    .MemWr_D(MemWrite_D), 
    .RegWr_E(RegWrite_E), .RegWr_M(RegWrite_M), .RegWr_W(RegWrite_W), 
    .Tnew_E(Tnew_E), .Tnew_M(Tnew_M), 
    .D_RS_CTRL(D_RS_CTRL), .D_RT_CTRL(D_RT_CTRL), 
    .ALU_op1_Ctrl(ALU_op1_Ctrl), .ALU_op2_Ctrl(ALU_op2_Ctrl), 
    .DM_Ctrl(DM_Ctrl)
    );

Control Control(
    .Instr(Instr_F), 
    .EXTop(EXTop_F), 
    .MemtoReg(MemToReg_F), 
    .MemRead(MemRead_F), 
    .MemWrite(MemWrite_F), 
    .bCtrl(bCtrl_F), 
    .ALUCtrl(ALUCtrl_F), 
    .ALUSrc(ALUSrc_F), 
    .RegDst(RegDst_F), 
    .RegWrite(RegWrite_F), 
    .PC_Src(PC_Src_F), 
    .branch(branch_F)
    );

 ////////////////////F////////////////////

PC myPC(.clk(clk),.reset(reset),.nPC(nPC),.PC(PC_F),.D_branch(branch_D),.Instr(Instr_D),.stop(stop));

IM myIM(.PC_addr(PC_F[11:2]),.Instr(Instr_F));

F2D D_reg(clk,reset,stop,
EXTop_F,MemToReg_F,RegDst_F,PC_Src_F,bCtrl_F,ALUCtrl_F,branch_F,MemRead_F,MemWrite_F,ALUSrc_F,RegWrite_F,
PC_F,Instr_F,
EXTop_D,MemToReg_D,RegDst_D,PC_Src_D,bCtrl_D,ALUCtrl_D,branch_D,MemRead_D,MemWrite_D,ALUSrc_D,RegWrite_D,
PC_D,Instr_D);

////////////////////D///////////////////////

assign A1_D = Instr_D[`rs];
assign A2_D = Instr_D[`rt];
assign Imm16_D = Instr_D[15:0];

EXT my_EXT(.op(Imm16_D),.out(EXTout_D),.EXTctrl(EXTop_D));

nPC my_nPC(.EXTout(EXTout_D),.PC(PC_D),.Instr(Instr_D),
	.branch(branch_D),.judge(judge_D),
	.RD1(V1_D),.PC_Src(PC_Src_D),.nPC(nPC)
	);

assign V1_D = (D_RS_CTRL == 2'b01) ? WD_W : 
				(D_RS_CTRL == 2'b10) ? AOM_PC8: 
				(D_RS_CTRL == 2'b11) ? V1_E: 
						  RD1_D;
assign V2_D = (D_RT_CTRL == 2'b01) ?  WD_W: 
				(D_RT_CTRL == 2'b10) ? AOM_PC8:
				(D_RT_CTRL == 2'b11) ? V2_E:
										RD2_D; 										
GRF my_GRF(
	.reset(reset),.clk(clk),
	.PC(PC_W),.WE(RegWrite_W),
	.RA1(A1_D),.RA2(A2_D),.RD1(RD1_D),.RD2(RD2_D),
	.WA(A3_W),.WD(WD_W)
	);

Judge my_judge(.RD1(V1_D),.RD2(V2_D),.b_Ctrl(bCtrl_D),.judge(judge_D));

MUX_2_5b my_WA(.a0(Instr_D[`rd]),.a1(Instr_D[`rt]),.a2(`GRF31),.Ctrl(RegDst_D),.out(A3_D));

D2E E_reg(clk,reset,stop,
PC_D,V1_D,V2_D,A1_D,A2_D,A3_D, EXTout_D,ALUCtrl_D, ALUSrc_D, MemToReg_D, RegWrite_D, MemWrite_D,MemRead_D,Instr_D, 
PC_E, V1_E, V2_E,A1_E,A2_E,A3_E, EXTout_E,ALUCtrl_E,ALUSrc_E,MemToReg_E,RegWrite_E,MemWrite_E,MemRead_E,Instr_E,Tnew_E);

///////////////E//////////////////////////

assign ALU_A = (ALU_op1_Ctrl == 2'b01) ? WD_W:
					  (ALU_op1_Ctrl == 2'b10) ? AOM_PC8:
							                      V1_E;
							 
assign pre_ALU_B = (ALU_op2_Ctrl == 2'b01) ? WD_W:
				(ALU_op2_Ctrl == 2'b10) ?  AOM_PC8:
				                             V2_E;

MUX_1_32b my_ALUop2(.a0(pre_ALU_B),.a1(EXTout_E),.Ctrl(ALUSrc_E),.out(ALU_B));	

ALU my_ALU(.op1(ALU_A),.op2(ALU_B),.ALUCtrl(ALUCtrl_E),.out(ALUout_E));

E2M M_reg(clk,reset,
PC_E,V2_E,A2_E,ALUout_E,A3_E,MemToReg_E,RegWrite_E,MemWrite_E,MemRead_E,Tnew_E,Instr_E,
PC_M,V2_M,A2_M,ALUout_M,A3_M,MemToReg_M,RegWrite_M,MemWrite_M,MemRead_M,Tnew_M,Instr_M);

/////////////////M////////////////////////////////////

assign DIn_M = (DM_Ctrl == 1'b1) ? WD_W : V2_M;
	
DM my_DM(
	.clk(clk),.reset(reset),
	.Instr(Instr_M),.PC(PC_M),
	.MemWrite(MemWrite_M),.MemRead(MemRead_M),
	.A(ALUout_M),.MD(DR_M),
	.WD(DIn_M)
	);	

assign AOM_PC8 = (MemToReg_M == 2'b10) ? (PC_M+32'h8) : ALUout_M;

M2W W_reg(clk,reset,
PC_M,A3_M,ALUout_M,DR_M,MemToReg_M,RegWrite_M,Tnew_M,Instr_E,
PC_W,A3_W,ALUout_W,DR_W,MemToReg_W,RegWrite_W,Tnew_W,Instr_W);

///////////////////W/////////////////////////////

MUX_2_32b my_MemtoReg(.a0(ALUout_W),.a1(DR_W),.a2(PC_W+32'h8),.Ctrl(MemToReg_W),.out(WD_W));

endmodule