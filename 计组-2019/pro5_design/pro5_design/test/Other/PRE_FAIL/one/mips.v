`timescale 1ns / 1ps

`include "head.v"
module mips(
    input clk,
    input reset
    );

//hazard ctr
//
wire [1:0] Tnew_E, Tnew_M, Tnew_W;
wire stall;

wire [31:0] V1_12, V2_12, E32_12, pc4_12, pc_12;
wire [4:0] A1_12, A2_12, A3_12;
wire [31:0] V2_23, AO_23, pc4_23, pc_23;
wire [4:0] A2_23, A3_23;
wire [31:0] AO_34, DR_34, pc4_34;

//F
//F_Control
wire [5:0] op, func;
wire [31:0] npc_0, pc_0, instr_0, pc4_0;	//move up
wire [31:0] RD1_1, RD2_1;						//move up
wire [31:0] npc_1;								//move up
assign op = instr_0[	31:26];
assign func = instr_0[5:0];


wire [1:0] MPCF;
wire zero;
//funtional MUX
assign npc_0 = (MPCF==`PC_RD1)? MFRD1D://RD1_1:
					(MPCF==`PC_NPC)? npc_1:
					pc4_0;

PC F_pc_module (.clk(clk), .stall(stall), .reset(reset), .npc_0(npc_0), .pc_0(pc_0));

IM F_im_module (.imaddr(pc_0), .instr_0(instr_0));

ADD4 F_add4_module (.pc_0(pc_0), .pc4_0(pc4_0));

////////////////////////////////////////////////////////////////
//D
//D_Control
wire [1:0] MA3E;
wire ExtOp_1;
wire [2:0] npc_sel;
wire [5:0] op_12, func_12;
Ctr_D D_ctr (.clk(clk), .op_01(op), .func_01(func), .zero(zero), .MPCF(MPCF), .MA3E(MA3E), .ExtOp_1(ExtOp_1), .npc_sel(npc_sel),
				 .op_12(op_12), .func_12(func_12), .RegWr_D(RegWr_D));

wire [31:0] pc4_01, pc_01, IR_01;
D D_reg (.clk(clk), .reset(reset), .stall(stall), .IR_0(instr_0), .pc4_0(pc4_0), .pc_0(pc_0), .IR_01(IR_01), .pc4_01(pc4_01), .pc_01(pc_01));

wire [4:0] A1_1, A2_1, A3_1;
assign A1_1 = IR_01 [25:21];
assign A2_1 = IR_01 [20:16];

wire [4:0] rd, rt;
assign rd = IR_01 [15:11];
assign rt  = IR_01 [20:16];
assign A3_1 = (MA3E == `A3_RT)? rt:
				  (MA3E == `A3_1f)? 5'h1f:
				  rd;
wire RegWr_4;
wire [31:0] pc_34, WD_4;
wire [4:0] A3_34;
GRF D_grf_module (.WPC(pc_34), .clk(clk), .reset(reset), .A1_1(A1_1), .A2_1(A2_1), 
						 .A3_4(A3_34), .RegWr_4(RegWr_W), .WD_4(WD_4), .RD1_1(RD1_1), .RD2_1(RD2_1));

wire [15:0] Imm_1;
assign Imm_1 = IR_01[15:0];
wire [31:0] E32_1;
EXT D_ext_module (.ExtOp_1(ExtOp_1), .Imm_1(Imm_1), .E32_1(E32_1));

wire [25:0] Imm26_1;
assign Imm26_1 = IR_01 [25:0];
NPC D_npc_module (.pc_1(pc_01), .pc4_1(pc4_01), .zero(zero), .npc_sel(npc_sel), .Imm26_1(Imm26_1), .npc_1(npc_1));

//forward
wire [31:0] MFRD1D, MFRD2D;
wire [1:0] FRD1D, FRD2D;
assign MFRD1D = (FRD1D==`E2D)? V1_12:
					 (FRD1D==`M2D)? AO_23:
					 (FRD1D==`W2D)? WD_4://DR_34:
					 RD1_1;
assign MFRD2D = (FRD2D==`E2D)? V2_12:
					 (FRD2D==`M2D)? AO_23:
					 (FRD2D==`W2D)? WD_4://DR_34:
					 RD2_1;

CMP D_cmp_module (.D1_1(MFRD1D), .D2_1(MFRD2D), .zero(zero));


////////////////////////////////////////////////////////////////
//E
//E_Control
wire [5:0] op_23, func_23;
wire MALUBE;
wire [2:0] ALUctr;
Ctr_E E_ctr (.clk(clk), .RegWr_D(RegWr_D), .op_12(op_12), .func_12(func_12), .MALUBE(MALUBE),
				.ALUctr(ALUctr), .op_23(op_23), .func_23(func_23), .Tnew_E(Tnew_E), .RegWr_E(RegWr_E));

E E_reg (.clk(clk), .stall(stall), .reset(reset), .V1_1(MFRD1D), .V2_1(MFRD2D), .A1_1(A1_1), .A2_1(A2_1), .A3_1(A3_1), .E32_1(E32_1), .pc4_1(pc4_01), 
					  .pc_1(pc_01), .V1_12(V1_12), .V2_12(V2_12), .A1_12(A1_12), .A2_12(A2_12), .A3_12(A3_12), .E32_12(E32_12), 
					  .pc4_12(pc4_12), .pc_12(pc_12));


wire [31:0] A_2, B_2, C_2;
//forward!
wire [1:0] FALUAE, FALUBE;
wire [31:0] MFALUAE, MFALUBE;
assign MFALUAE = (FALUAE==`M2D)? AO_23:
					  (FALUAE==`W2D)? WD_4://DR_34:
						V1_12;
assign MFALUBE = (FALUBE==`M2D)? AO_23:
					  (FALUBE==`W2D)? WD_4://DR_34:
						V2_12;
assign B_2 = (MALUBE)?E32_12:
				 MFALUBE;
				 
ALU E_alu_module (.ALUctr_2(ALUctr), .A_2(MFALUAE), .B_2(B_2), .C_2(C_2));


/////////////////////////////////////////////////////////////////
//M
//M_Control
wire [5:0] op_34, func_34;
wire MemWr_3;
Ctr_M M_ctr (.clk(clk),  .RegWr_E(RegWr_E), .op_23(op_23), .func_23(func_23), .MemWr_3(MemWr_3), .op_34(op_34), .func_34(func_34), 
				.Tnew_M(Tnew_M), .RegWr_M(RegWr_M));


M M_reg (.clk(clk), .reset(reset), .V2_2(MFALUBE), .A2_2(A2_12), .A3_2(A3_12), .AO_2(C_2), .pc4_2(pc4_12), .pc_2(pc_12), 
					  .V2_23(V2_23), .A2_23(A2_23), .A3_23(A3_23), .AO_23(AO_23), .pc4_23(pc4_23), .pc_23(pc_23));


//forward
wire FWDM;
wire [31:0] MFWDM;
assign MFWDM = (FWDM==1)?WD_4:
					V2_23;

wire [31:0] DO_3;
DM M_dm_module (.DPC(pc_23), .clk(clk), .reset(reset), .dmAd_3(AO_23), .MemWr_3(MemWr_3), .DIn_3(MFWDM), .DO_3(DO_3));


/////////////////////////////////////////////////////////////////
//W
//W_Control
wire [1:0] MRFWDW;
Ctr_W W_ctr (.clk(clk), .RegWr_M(RegWr_M), .op_34(op_34), .func_34(func_34), .MRFWDW(MRFWDW), 
				.Tnew_W(Tnew_W), .RegWr_W(RegWr_W));


W W_reg (.clk(clk), .reset(reset), .A3_3(A3_23), .AO_3(AO_23), .DR_3(DO_3), .pc4_3(pc4_23), .pc_3(pc_23), 
			.A3_34(A3_34), .AO_34(AO_34), .DR_34(DR_34), .pc4_34(pc4_34), .pc_34(pc_34));

assign WD_4 = (MRFWDW==`WD_DM)? DR_34:
				  (MRFWDW==`WD_PC4)? pc4_34+32'h4:	//delay plot pc+8
				  AO_34;
				  
////////////////////////////////////////////////////////////////////
//Hazard ctr
ForwardUnit forward_module (
    .instr_D(IR_01), 
    .A3_E(A3_12), 
    .A3_M(A3_23), 
    .A3_W(A3_34), 
    .A1_E(A1_12), 
    .A2_E(A2_12), 
    .A2_M(A2_23),
	 .RegWr_E(RegWr_E),
	 .RegWr_M(RegWr_M),
	 .RegWr_W(RegWr_W),
    .Tnew_E(Tnew_E), 
    .Tnew_M(Tnew_M), 
    .FRD1D(FRD1D), 
    .FRD2D(FRD2D), 
    .FALUAE(FALUAE), 
    .FALUBE(FALUBE), 
    .FWDM(FWDM)
    );
				  
STALL stall_module (
    .instr_D(IR_01), 
    .A3_E(A3_12), 
    .A3_M(A3_23), 
    .RegWr_E(RegWr_E), 
    .RegWr_M(RegWr_M), 
    .Tnew_E(Tnew_E), 
    .Tnew_M(Tnew_M), 
    .Tnew_W(Tnew_W), 
    .stall(stall)
    );
								  
endmodule
