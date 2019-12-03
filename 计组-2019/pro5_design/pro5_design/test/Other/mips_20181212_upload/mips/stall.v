
`define oR_format 6'b000_000
`define olw 6'b100_011
`define osw 6'b101_011
`define obeq 6'b000_100
`define olui 6'b001_111
`define oori 6'b001_101
`define ojal 6'b000_011
`define oj  6'b000_010
`define olb 6'b100_000
`define osb 6'b101_000

`define faddu 6'b100_001
`define fsubu 6'b100_011
`define fand 6'b100_100
`define fjr 6'b001_000
`define fsll 6'b000_000
`define fsrl 6'b000_010

//Stall Stall(instr_D,Tnew_D,Tnew_E,Tnew_M,rs_D,rt_D,WAG_E,WAG_M,RegWrite_E,RegWrite_M,stall);
module Stall(
	input[31:0] instr_D,

	input[1:0] Tnew_D,
	input[1:0] Tnew_E,
	input[1:0] Tnew_M,

	input[4:0] rs_D,
	input[4:0] rt_D,
	input[4:0] WAG_E,
	input[4:0] WAG_M,

	input RegWrite_E,
	input RegWrite_M,

	output Stall
	);

	wire[5:0] op,func;
	wire[4:0] rt;
	wire notnop;
	
	assign op = instr_D[31:26];
	assign func = instr_D[5:0];
	assign rt = instr_D[20:16];
	assign notnop = |{instr_D};

	
	wire addu,subu,ori,lw,sw,beq,jal,j,jr,lui;
	wire lb,lbu,lh,lhu,sb,sh;
	wire sll,srl,sra,sllv,srlv,srav;
	wire slt,slti,bne,blez,bgtz,bltz,bgez;
	wire jalr,orz;
	
	wire Tuse_RS0,Tuse_RS1,Tuse_RT0,Tuse_RT1,Tuse_RT2;
	wire Stall_RS0_E1,Stall_RS0_E2,Stall_RS0_M1,Stall_RS1_E2,Stall_RS;
	wire Stall_RT0_E1,Stall_RT0_E2,Stall_RT0_M1,Stall_RT1_E2,Stall_RT;

	assign addu = ((op==6'b000_000)&(func==6'b100_001));
	assign subu = ((op==6'b000_000)&(func==6'b100_011));
	assign ori = (op==6'b001_101);
	assign lui = (op==6'b001_111);
	assign lw = (op==6'b100_011);
	assign sw = (op==6'b101_011);
	assign beq = (op==6'b000_100);
	assign jal = (op==6'b000_011);
	assign j = (op==6'b000_010);
	assign jr = ((op==6'b000_000)&(func==6'b001_000));

	assign lb = (op==6'b100_000);
	assign lbu = (op==6'b100_100);
	assign lh = (op==6'b100_001);
	assign lhu = (op==6'b100_101);
	assign sb = (op==6'b101_000);
	assign sh = (op==6'b101_001);

	assign sll = ((op==6'b000_000) & (func==6'b000_000) & notnop);
	assign srl = ((op==6'b000_000) & (func==6'b000_010));
	assign sra = ((op==6'b000_000) & (func==6'b000_011));
	assign sllv = ((op==6'b000_000) & (func==6'b000_100));
	assign srlv = ((op==6'b000_000) & (func==6'b000_110));
	assign srav = ((op==6'b000_000) & (func==6'b000_111));

	assign slt = ((op==6'b000_000) & (func==6'b101_010));
	assign slti = (op==6'b001_010);
	assign bne = (op==6'b000_101);
	assign blez = (op==6'b000_110);
	assign bgtz = (op==6'b000_111);
	assign bltz = ((op==6'b000_001) & (rt==5'b00000));
	assign bgez = ((op==6'b000_001) & (rt==5'b00001));

	assign jalr = ((op==6'b000_000) & (func==6'b001_001));
	assign orz = ((op==6'b000_000) & (func==6'b100_101));



	assign Tuse_RS0 = beq|jr|bne|blez|bltz|bgez|bgtz|jalr;  					
	assign Tuse_RS1 = addu|subu|ori|orz|lw|lb|lbu|lh|lhu|sw|sh|sb|
							sllv|srlv|srav|slt|slti;		

	assign Tuse_RT0 = beq|bne;				
	assign Tuse_RT1 = addu|subu|orz|
							sll|srl|sra|sllv|srlv|srav|slt;							
	assign Tuse_RT2 = sw|sb|sh;									
	
	assign Stall_RS0_E1 = Tuse_RS0 & (Tnew_E==2'b01) & (rs_D==WAG_E) & RegWrite_E;
	assign Stall_RS0_E2 = Tuse_RS0 & (Tnew_E==2'b10) & (rs_D==WAG_E) & RegWrite_E;
	assign Stall_RS0_M1 = Tuse_RS0 & (Tnew_M==2'b01) & (rs_D==WAG_M) & RegWrite_M;
	assign Stall_RS1_E2 = Tuse_RS1 & (Tnew_E==2'b10) & (rs_D==WAG_E) & RegWrite_E;
	assign Stall_RS = Stall_RS0_E1 | Stall_RS0_E2 | Stall_RS0_M1 | Stall_RS1_E2;

	assign Stall_RT0_E1 = Tuse_RT0 & (Tnew_E==2'b01) & (rt_D==WAG_E) & RegWrite_E;
	assign Stall_RT0_E2 = Tuse_RT0 & (Tnew_E==2'b10) & (rt_D==WAG_E) & RegWrite_E;
	assign Stall_RT0_M1 = Tuse_RT0 & (Tnew_M==2'b01) & (rt_D==WAG_M) & RegWrite_M;
	assign Stall_RT1_E2 = Tuse_RT1 & (Tnew_E==2'b10) & (rt_D==WAG_E) & RegWrite_E;
	assign Stall_RT = Stall_RT0_E1 | Stall_RT0_E2 | Stall_RT0_M1 | Stall_RT1_E2;

	assign Stall = Stall_RS | Stall_RT; 
	
 endmodule

