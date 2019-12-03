`timescale 1ns / 1ps

//ControlUnit ControlUnit(instr_D,
	//RegDst_D,ALUSrc_D,MemtoReg_D,LdStType_D,RegWrite_D,MemRead_D,MemWrite_D,pre_nPC_sel_D,ALUctrl_D,EXTctrl_D);


module ControlUnit(
	input[31:0] instr_D,

	output[1:0] RegDst,
	output[1:0] ALUSrc,
	output[1:0] MemtoReg,
	output[2:0] LdStType,
	output RegWrite,
	output MemRead,
	output MemWrite,
	output[1:0] pre_nPC_sel,
	output[3:0] ALUctrl,
	output[1:0] EXTctrl
	);

	wire[5:0] op,func,shamt;
	wire[4:0] rt,rd,rs;
	wire rdnot0,notnop;

	assign op = instr_D[31:26];
	assign func = instr_D[5:0];
	assign rs = instr_D[25:21];
	assign rt = instr_D[20:16];
	assign rd = instr_D[15:11];
	assign rdnot0 = |{rd};
	assign notnop = |{instr_D};
	assign shamt = instr_D[10:6];

	wire addu,subu,ori,lw,sw,beq,jal,j,jr,lui;
	wire lb,lbu,lh,lhu,sb,sh;
	wire sll,srl,sra,sllv,srlv,srav;
	wire orz;
	wire slt,slti,bne,blez,bgtz,bltz,bgez;
	wire jalr;

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

	assign orz = ((op==6'b000_000) & (func==6'b100_101));

	assign slt = ((op==6'b000_000) & (func==6'b101_010));
	assign slti = (op==6'b001_010);
	assign bne = (op==6'b000_101);
	assign blez = (op==6'b000_110);
	assign bgtz = (op==6'b000_111);
	assign bltz = ((op==6'b000_001) & (rt==5'b00000));
	assign bgez = ((op==6'b000_001) & (rt==5'b00001));

	assign jalr = ((op==6'b000_000) & (func==6'b001_001));
	
	/////////////////////////////////////////////////////////////////////////////
	wire movz,beql,bgezal,lwl,lwr,rotr,rotrv,swl;

	assign movz = ((op==6'b000_000) & (func==6'b001_010) & (shamt==5'b00000));
	assign beql = (op==6'b010_100);
	assign bgezal = ((op==6'b000_001) & (rt==5'b10001));
	assign lwl = (op==6'b100_010);
	assign lwr = (op==6'b100_110);
	assign rotr = ((op==6'b000_000) & (func==6'b000_010) & (rs==5'b00001));
	assign rotrv = ((op==6'b000_000) & (func==6'b000_110) & (shamt==5'b00001));
	assign swl = (op==6'b101_010);
	
	

	//写入哪个寄存器
	assign RegDst = (jal|(jalr&(~rdnot0)))? 2'b10: //31
					(addu|subu|sll|srl|sllv|srlv|srav|sra|orz|slt|(jalr&(rdnot0))|movz|rotr|rotrv)? 2'b01: //rd
					2'b00;//rt

	//alu SourceB的来源
	assign ALUSrc = (ori|lui|lw|sw|lb|lbu|lh|lhu|sb|sh|slti|lwl|lwr|swl)? 2'b01: //16位立即数的扩展
																								2'b00; //rt
					
	assign MemtoReg =   (jalr|jal|bgezal)? 2'b10:	//pc+8
							(lw|lb|lbu|lh|lhu|lwl|lwr)? 2'b01: //DM的RD
							2'b00; //ALU的结果

	assign LdStType = lb? 3'b010: //byte
							lh? 3'b100: //
							(lbu|sb)? 3'b001:
							(lhu|sh)? 3'b011:
										3'b000;

	assign RegWrite = addu|subu|ori|lui|lw|jal|lb|lbu|lh|lhu|sll|srl|sra|sllv|srlv|srav|
							slt|slti|jalr|orz|movz|bgezal|lwl|lwr|rotr|rotrv; 
							
	assign MemRead = lw|lb|lbu|lh|lhu|lwl|lwr; 

	assign MemWrite = sw|sb|sh|swl; 

	assign pre_nPC_sel = (jal|j)? 2'b11:
						 (jr|jalr)? 2'b10:
						 (beq|bne|blez|bgtz|bltz|bgez|beql|bgezal)? 2'b01:
						 2'b00;

	assign ALUctrl = 	 		 
							 srlv? 4'b1101:
							 sllv? 4'b1100:
							 srav? 4'b1011:
							 sra? 4'b1010:
							 srl? 4'b0111:
							 sll? 4'b0110:
							 (slt|slti)? 4'b0100:
							 (ori|lui|orz)? 4'b0010:
							 (subu)? 4'b0001:
										4'b0000;

	assign EXTctrl = lui? 2'b10:
					(lw|sw|beq|lb|lbu|lh|lhu|sb|sh|slti|lwl|lwr|swl|bne|blez|bgtz|bltz|bgez|beql|bgezal)? 2'b01:
																																				2'b00;
	
	
endmodule
