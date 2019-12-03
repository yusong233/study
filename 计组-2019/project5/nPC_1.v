module nPC_1(EXTout,PC_4,branch,judge,nPC_1);
	input [31:0] EXTout,PC_4;
	input branch,judge;
	output [31:0] nPC_1;

	wire Ctrl;
	wire [31:0] nPC_1;
	wire [31:0] PC_8 = PC_4 + 4;
	wire [31:0] sign;

	assign Ctrl = branch & judge;
	assign sign = EXTout + PC_4;
	assign nPC_1 =  (Ctrl == 0) ? (PC_8) : (sign);

endmodule

module nPC(
	input [31:0] PC,EXTout,RD1,Instr,
	input branch,judge,
	input[1:0] PC_Src,
	output [31:0] nPC
);
	wire [31:0] nPC_1;

	wire [31:0] nPC_0 = PC + 4;

	nPC_1 my_nPC_1(.EXTout(EXTout),.PC_4(nPC_0),.branch(branch),.judge(judge),.nPC_1(nPC_1));

	wire [31:0] nPC_2 = {PC[31:28],Instr[25:0],2'b00};

	wire [31:0] nPC_3 = RD1;

	assign nPC = (PC_Src == 2'b01) ? nPC_1:
				 (PC_Src == 2'b10) ? nPC_2:
				 (PC_Src == 2'b11) ? nPC_3:
				                     nPC_0;

endmodule

