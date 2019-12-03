`timescale 1ns / 1ps

`define op 31:26
`define rs 25:21
`define rt 20:16
`define rd 15:11
`define shamt 10:6
`define func 5:0
`define immediate 15:0
`define instr_index 25:0

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

`define NONE 2'b00
`define ALU 2'b01
`define DM 2'b10
`define PC 2'b11  //???


//IF_ID IF_ID(clk,reset,halt,instr_F,pc_F,
			//instr_D,pc_D,op_D,rs_D,rt_D,rd_D,shamt_D,immediate_D,instr_index_D,PC4_D,PC8_D,Tnew_D);

module IF_ID(
	input clk,
	input reset,
	input halt,
	input[31:0] instr,
	input[31:0] pc_F,
	
	output reg[31:0] instr_D,
	output reg[31:0] pc_D,
	output reg[5:0] op,
	output reg[4:0] rs,
	output reg[4:0] rt,
	output reg[4:0] rd,
	output reg[4:0] shamt,
	output reg[15:0] immediate,
	output reg[25:0] instr_index,
	output reg[31:0] PC4,
	output reg[31:0] PC8,

	output reg[1:0] Tnew_D
	//output reg delay
	);
	
	wire notop;
	wire[5:0] OP,FUNC;
	wire[4:0] RT;
	
	assign notnop = |{instr};
	assign OP = instr[`op];
	assign FUNC = instr[`func];
	assign RT = instr[`rt];


	wire addu,subu,ori,lw,sw,beq,jal,j,jr,lui;
	wire lb,lbu,lh,lhu,sb,sh;
	wire sll,srl,sra,sllv,srlv,srav;
	wire slt,slti,bne,blez,bgtz,bltz,bgez;
	wire jalr,orz;

	assign addu = ((OP==6'b000_000)&(FUNC==6'b100_001));
	assign subu = ((OP==6'b000_000)&(FUNC==6'b100_011));
	assign ori = (OP==6'b001_101);
	assign lui = (OP==6'b001_111);
	assign lw = (OP==6'b100_011);
	assign sw = (OP==6'b101_011);
	assign beq = (OP==6'b000_100);
	assign jal = (OP==6'b000_011);
	assign j = (OP==6'b000_010);
	assign jr = ((OP==6'b000_000)&(FUNC==6'b001_000));

	assign lb = (OP==6'b100_000);
	assign lbu = (OP==6'b100_100);
	assign lh = (OP==6'b100_001);
	assign lhu = (OP==6'b100_101);
	assign sb = (OP==6'b101_000);
	assign sh = (OP==6'b101_001);

	assign sll = ((OP==6'b000_000) & (FUNC==6'b000_000) & notnop);
	assign srl = ((OP==6'b000_000) & (FUNC==6'b000_010));
	assign sra = ((OP==6'b000_000) & (FUNC==6'b000_011));
	assign sllv = ((OP==6'b000_000) & (FUNC==6'b000_100));
	assign srlv = ((OP==6'b000_000) & (FUNC==6'b000_110));
	assign srav = ((OP==6'b000_000) & (FUNC==6'b000_111));

	assign orz = ((op==6'b000_000) & (FUNC==6'b100_101));

	assign slt = ((OP==6'b000_000) & (FUNC==6'b101_010));
	assign slti = (OP==6'b001_010);
	assign bne = (OP==6'b000_101);
	assign blez = (OP==6'b000_110);
	assign bgtz = (OP==6'b000_111);
	assign bltz = ((OP==6'b000_001) & (RT==5'b00000));
	assign bgez = ((OP==6'b000_001) & (RT==5'b00001));

	assign jalr = ((OP==6'b000_000) & (FUNC==6'b001_001));

	initial begin
		instr_D <= 0;
		pc_D <= 32'h0000_3000;
		op <= 0;
		rs <= 0;
		rt <= 0;
		rd <= 0;
		shamt <= 0;
		immediate <= 0;
		instr_index <= 0;
		PC4 <= 32'h0000_3004;
		PC8 <= 32'h0000_3008;
		Tnew_D <= 0;
		//delay <= 0;
	end

	always @(posedge clk) begin
		if(reset) begin
			instr_D <= 0;
			pc_D <= 32'h0000_3000;
			op <= 0;
			rs <= 0;
			rt <= 0;
			rd <= 0;
			shamt <= 0;
			immediate <= 0;
			instr_index <= 0;
			PC4 <= 32'h0000_3000;
			PC8 <= 32'h0000_3004;
			Tnew_D <= 0;
		end
		else begin
			if(!halt) begin
				instr_D <= instr;
				pc_D <= pc_F;
				op <= instr[`op];
				rs <= instr[`rs];
				rt <= instr[`rt];
				rd <= instr[`rd];
				shamt <= instr[`shamt];
				immediate <= instr[`immediate];
				instr_index <= instr[`instr_index];
				PC4 <= pc_F+4;
				PC8 <= pc_F+8;

				if((OP==`oR_format)&!jr&!jalr) Tnew_D <= `ALU;
				else if(ori|lui|slti) Tnew_D <= `ALU;
				else if(jr|jalr) Tnew_D <= `NONE;
				else if(lw|lh|lhu|lb|lbu) Tnew_D <= `DM;
				else Tnew_D <= `NONE;

			end
		end
	end
		
 endmodule


//ID_EX ID_EX(clk,reset,E_clr,pc_D,rs_D,rt_D,shamt_D,MWAGEO,EXT_D,MFRSDO,MFRTDO,PC4_D,PC8_D,
//			RegDst_D,ALUSrc_D,MemtoReg_D,LdStType_D,RegWrite_D,MemRead_D,MemWrite_D,ALUctrl_D,Tnew_D,
//			pc_E,RA1_E,RA2_E,shamt_E,WAG_E,EXT_E,RD1_E,RD2_E,PC4_E,PC8_E,
//			RegDst_E,ALUSrc_E,MemtoReg_E,LdStType_E,RegWrite_E,MemRead_E,MemWrite_E,ALUctrl_E,Tnew_E);


 module ID_EX(
	input clk,
	input reset,
 	input clr,
 	input[31:0] pc_D,
 	input[4:0] rs_D,
 	input[4:0] rt_D,
 	input[4:0] shamt_D,
 	input[4:0] MWAGE,
 	input[31:0] EXT_D,
 	input[31:0] MFRSD,
 	input[31:0] MFRTD,
 	input[31:0] PC4_D,
 	input[31:0] PC8_D,

 	input[1:0] RegDst_D,
	input[1:0] ALUSrc_D,
	input[1:0] MemtoReg_D,
	input[2:0] LdStType_D,
	input RegWrite_D,
	input MemRead_D,
	input MemWrite_D,
	input[3:0] ALUctrl_D,

	input[1:0] Tnew_D,

	output reg[31:0] pc_E,
	output reg[4:0] RA1_E,
	output reg[4:0] RA2_E,
	output reg[4:0] shamt_E,
	output reg[4:0] WAG_E,
	output reg[31:0] EXT_E,
	output reg[31:0] RD1_E,
	output reg[31:0] RD2_E,
	output reg[31:0] PC4_E,
	output reg[31:0] PC8_E,

	output reg[1:0] RegDst_E,
	output reg[1:0] ALUSrc_E,
	output reg[1:0] MemtoReg_E,
	output reg[2:0] LdStType_E,
	output reg RegWrite_E,
	output reg MemRead_E,
	output reg MemWrite_E,
	output reg[3:0] ALUctrl_E,

	output reg[1:0] Tnew_E
 	);

 	initial begin
 		pc_E <= 0;
 		RA1_E <= 0;
 		RA2_E <= 0; 
 		WAG_E <= 0; 
 		RD1_E <= 0; 
 		RD2_E <= 0; 
 		EXT_E <= 0; 
 		PC4_E <= 0; 
 		PC8_E <= 0; 
 		RegDst_E <= 0;
 		ALUSrc_E <= 0;
 		MemtoReg_E <= 0; 
		LdStType_E <= 0;
 		RegWrite_E <= 0; 
 		MemRead_E <= 0; 
 		MemWrite_E <= 0; 
 		ALUctrl_E <= 0;  	
 		Tnew_E <= 0;
 		shamt_E <= 0;
 	end

 	always @(posedge clk) begin
	 	if(clr|reset) begin
	 		pc_E <= 0;
	 		RA1_E <= 0;
	 		RA2_E <= 0; 
	 		WAG_E <= 0; 
	 		RD1_E <= 0; 
	 		RD2_E <= 0; 
	 		EXT_E <= 0; 
	 		PC4_E <= 0; 
	 		PC8_E <= 0; 
	 		RegDst_E <= 0;
	 		ALUSrc_E <= 0;
	 		MemtoReg_E <= 0; 
			LdStType_E <= 0;
	 		RegWrite_E <= 0; 
	 		MemRead_E <= 0; 
	 		MemWrite_E <= 0; 
	 		ALUctrl_E <= 0;  	
	 		Tnew_E <= 0;
	 		shamt_E <= 0;
	 	end
	 	else begin
	 		pc_E <= pc_D;
	 		RA1_E <= rs_D;
	 		RA2_E <= rt_D;
	 		shamt_E <= shamt_D;
	 		WAG_E <= MWAGE;
	 		RD1_E <= MFRSD;
	 		RD2_E <= MFRTD;
	 		EXT_E <= EXT_D;
	 		PC4_E <= PC4_D;
	 		PC8_E <= PC8_D;
	 		RegDst_E <= RegDst_D;
	 		ALUSrc_E <= ALUSrc_D;
	 		MemtoReg_E <= MemtoReg_D;
			LdStType_E <= LdStType_D;
	 		RegWrite_E <= RegWrite_D;
	 		MemRead_E <= MemRead_D;
	 		MemWrite_E <= MemWrite_D;
	 		ALUctrl_E <= ALUctrl_D; 	
	 		Tnew_E <= Tnew_D;
	 	end
 	end
 		
endmodule

//EX_MEM EX_MEM(clk,reset,pc_E,RA2_E,WAG_E,MFALUBEO,ALUO_E,PC4_E,PC8_E,
//					MemtoReg_E,LdStType_E,RegWrite_E,MemRead_E,MemWrite_E,Tnew_E,
//					pc_M,RA2_M,WAG_M,RD2_M,ALUO_M,PC4_M,PC8_M,
//					MemtoReg_M,LdStType_M,RegWrite_M,MemRead_M,MemWrite_M,Tnew_M);


 module EX_MEM(
	input clk,
	input reset,
 	input[31:0] pc_E,
 	input[4:0] RA2_E,
	input[4:0] WAG_E,
	input[31:0] RD2_E,
	input[31:0] ALUO_E,
	input[31:0] PC4_E,
	input[31:0] PC8_E,

	input[1:0] MemtoReg_E,
	input[2:0] LdStType_E,
	input RegWrite_E,
	input MemRead_E,
	input MemWrite_E,

	input[1:0] Tnew_E,

	output reg[31:0] pc_M,
	output reg[4:0] RA2_M,
	output reg[4:0] WAG_M,
	output reg[31:0] RD2_M,
	output reg[31:0] ALUO_M,
	output reg[31:0] PC4_M,
	output reg[31:0] PC8_M,
	
	output reg[1:0] MemtoReg_M,
	output reg[2:0] LdStType_M,
	output reg RegWrite_M,
	output reg MemRead_M,
	output reg MemWrite_M,

	output reg[1:0] Tnew_M
 	);

 	initial begin
 		pc_M <= 0;
 		RA2_M <= 0;
 		RD2_M <= 0;
	 	ALUO_M <= 0;
	 	WAG_M <= 0;
		PC4_M <= 0;
		PC8_M <= 0;
	 	MemtoReg_M <= 0;
		LdStType_M <= 0;
		RegWrite_M <= 0;
		MemRead_M <= 0;
		MemWrite_M <= 0;
		Tnew_M <= 0;
 	end

 	always @(posedge clk) begin
	 	if(reset) begin
	 		pc_M <= 0;
	 		RA2_M <= 0;
	 		RD2_M <= 0;
		 	ALUO_M <= 0;
		 	WAG_M <= 0;
			PC4_M <= 0;
			PC8_M <= 0;
		 	MemtoReg_M <= 0;
			LdStType_M <= 0;
			RegWrite_M <= 0;
			MemRead_M <= 0;
			MemWrite_M <= 0;
			Tnew_M <= 0;
	 	end
	 	else begin
	 		pc_M <= pc_E;
	 		RA2_M <= RA2_E;
	 		RD2_M <= RD2_E;
		 	ALUO_M <= ALUO_E;
		 	WAG_M <= WAG_E;
			PC4_M <= PC4_E;
			PC8_M <= PC8_E;
		 	MemtoReg_M <= MemtoReg_E;
			LdStType_M <= LdStType_E;
			RegWrite_M <= RegWrite_E;
			MemRead_M <= MemRead_E;
			MemWrite_M <= MemWrite_E;

			if(Tnew_E) Tnew_M <= Tnew_E-1;
			else Tnew_M <= Tnew_E;
	 	end
 	end

 endmodule


//MEM_WB MEM_WB(clk,reset,pc_M,RD_M,ALUO_M,WAG_M,PC4_M,PC8_M,MemtoReg_M,RegWrite_M,
	//		  pc_W,RD_W,ALUO_W,WAG_W,PC4_W,PC8_W,MemtoReg_W,RegWrite_W);

module MEM_WB(
	input clk,
	input reset,
	input[31:0] pc_M,
	input[31:0] RD_M,
	input[31:0] ALUO_M,
	input[4:0] WAG_M,
	input[31:0] PC4_M,
	input[31:0] PC8_M,

	input[1:0] MemtoReg_M,
	input[2:0] LdStType_M,
	input RegWrite_M,

	output reg[31:0] pc_W,
	output reg[31:0] RD_W,
	output reg[31:0] ALUO_W,
	output reg[4:0] WAG_W,
	output reg[31:0] PC4_W,
	output reg[31:0] PC8_W,

	output reg[1:0] MemtoReg_W,
	output reg[2:0] LdStType_W,
	output reg RegWrite_W
 	);

	initial begin
		pc_W <= 0;
		WAG_W <= 0;
		RD_W <= 0;
		ALUO_W <= 0;
		PC4_W <= 0;
		PC8_W <= 0;
		MemtoReg_W <= 0;
		LdStType_W <= 0;
		RegWrite_W <= 0;
	end

	always @(posedge clk) begin
		if(reset) begin
			pc_W <= 0;
			WAG_W <= 0;
			RD_W <= 0;
			ALUO_W <= 0;
			PC4_W <= 0;
			PC8_W <= 0;
			MemtoReg_W <= 0;
			LdStType_W <= 0;
			RegWrite_W <= 0;
		end
		else begin
			pc_W <= pc_M;
			WAG_W <= WAG_M;
			RD_W <= RD_M;
			ALUO_W <= ALUO_M;
			PC4_W <= PC4_M;
			PC8_W <= PC8_M;
			MemtoReg_W <= MemtoReg_M;
			LdStType_W <= LdStType_M;
			RegWrite_W <= RegWrite_M;
		end
	end

endmodule
		