`timescale 1ns / 1ps

module F2D(
	input clk,
	input reset,
	input stop,
	input [1:0] EXTop_F,
	input [1:0] MemtoReg_F,
	input [1:0] RegDst_F,
	input [1:0] PC_Src_F,
	input [2:0] bCtrl_F,
	input [2:0] ALUCtrl_F,
	input branch_F,
	input MemRead_F,
	input MemWrite_F,
	input ALUSrc_F,
	input RegWrite_F,
	input [31:0] PC_F,
	input [31:0] Instr_F,

	output reg [1:0] EXTop_D,
	output reg [1:0] MemtoReg_D,
	output reg [1:0] RegDst_D,
	output reg [1:0] PC_Src_D,
	output reg [2:0] bCtrl_D,
	output reg [2:0] ALUCtrl_D,
	output reg branch_D,
	output reg MemRead_D,
	output reg MemWrite_D,
	output reg ALUSrc_D,
	output reg RegWrite_D,
	output reg [31:0] PC_D,
	output reg [31:0] Instr_D
);
	initial begin
		PC_D = 0;
		Instr_D = 0;
		EXTop_D = 0;
		MemtoReg_D = 0;
		RegDst_D = 0;
		PC_Src_D = 0;
		bCtrl_D = 0;
		ALUCtrl_D = 0;
		branch_D = 0;
		MemRead_D = 0;
		MemWrite_D = 0;
		ALUSrc_D = 0;
		RegWrite_D = 0;
	end

	always @(posedge clk) begin
		if(reset) begin
			PC_D <= 0;
			Instr_D <= 0;
			EXTop_D <= 0;
			MemtoReg_D <= 0;
			RegDst_D <= 0;
			PC_Src_D <= 0;
			bCtrl_D <= 0;
			ALUCtrl_D <= 0;
			branch_D <= 0;
			MemRead_D <= 0;
			MemWrite_D <= 0;
			ALUSrc_D <= 0;
			RegWrite_D <= 0;

		end
		else if(stop) begin
			PC_D <= PC_D;
			Instr_D <= Instr_D;
			EXTop_D <= EXTop_D;
			MemtoReg_D <= MemtoReg_D;
			RegDst_D <= RegDst_D;
			PC_Src_D <= PC_Src_D;
			bCtrl_D <= bCtrl_D;
			ALUCtrl_D <= ALUCtrl_D;
			branch_D <= branch_D;
			MemRead_D <= MemRead_D;
			MemWrite_D <= MemWrite_D;
			ALUSrc_D <= ALUSrc_D;
			RegWrite_D <= RegWrite_D;
		end
		else begin
			PC_D <= PC_F;
			Instr_D <= Instr_F;
			EXTop_D <= EXTop_F;
			MemtoReg_D <= MemtoReg_F;
			RegDst_D <= RegDst_F;
			PC_Src_D <= PC_Src_F;
			bCtrl_D <= bCtrl_F;
			ALUCtrl_D <= ALUCtrl_F;
			branch_D <= branch_F;
			MemRead_D <= MemRead_F;
			MemWrite_D <= MemWrite_F;
			ALUSrc_D <= ALUSrc_F;
			RegWrite_D <= RegWrite_F;
		end
	end
endmodule


module D2E(
	input clk,
	input reset,
	input stop,
	input [31:0] PC_D,
	input [31:0] V1_D,
	input [31:0] V2_D,
	input [4:0] A1_D,
	input [4:0] A2_D,
	input [4:0] A3_D,
	input [31:0] EXTout_D,
	input [2:0] ALUCtrl_D,
	input ALUSrc_D,
	input [1:0] MemToReg_D,
	input RegWrite_D,
	input MemWrite_D,
	input [31:0] Instr_D,
	output reg [31:0] PC_E,
	output reg [31:0] V1_E,
	output reg [31:0] V2_E,
	output reg [4:0] A1_E,
	output reg [4:0] A2_E,
	output reg [4:0] A3_E,
	output reg [31:0] EXTout_E,
	output reg [2:0] ALUCtrl_E,
	output reg ALUSrc_E,
	output reg [1:0] MemToReg_E,
	output reg RegWrite_E,
	output reg MemWrite_E,
	output reg [31:0] Instr_E,
	output [1:0] Tnew_E
);
	initial begin
		PC_E=0;
		V1_E=0;
		V2_E=0;
		A1_E=0;
		A2_E=0;
		A3_E=0;
		EXTout_E=0;
		ALUCtrl_E=0;
		ALUSrc_E=0;
		MemToReg_E=0;
		RegWrite_E=0;
		MemWrite_E=0;
		Instr_E = 0;
	end
	
	always @(posedge clk) begin
		if(reset) begin
			PC_E=0;
			V1_E=0;
			V2_E=0;
			A1_E=0;
			A2_E=0;
			A3_E=0;
			EXTout_E=0;
			ALUCtrl_E=0;
			ALUSrc_E=0;
			MemToReg_E=0;
			RegWrite_E=0;
			MemWrite_E=0;
			Instr_E = 0;
		end
		else if(stop) begin
			PC_E=0;
			V1_E=0;
			V2_E=0;
			A1_E=0;
			A2_E=0;
			A3_E=0;
			EXTout_E=0;
			ALUCtrl_E=0;
			ALUSrc_E=0;
			MemToReg_E=0;
			RegWrite_E=0;
			MemWrite_E=0;
			Instr_E = 0;
		end
		else begin
			PC_E <= PC_D;
			V1_E <= V1_D;
			V2_E <= V2_D;
			A1_E <= A1_D;
			A2_E <= A2_D;
			A3_E <= A3_D;
			EXTout_E <= EXTout_D;
			ALUCtrl_E <= ALUCtrl_D;
			ALUSrc_E <= ALUSrc_D;
			MemToReg_E <= MemToReg_D;
			RegWrite_E <= RegWrite_D;
			MemWrite_E <= MemWrite_D;
			Instr_E <= Instr_D;
		end
	end
	
	wire [5:0] op_E, func_E;
	assign op_E = Instr_E[31:26];
	assign func_E = Instr_E[5:0];
	
	wire addu, subu, ori, lui, lw, jal;
	decoder deInstr(.op(op_E), .func(func_E), .addu(addu), .subu(subu), .ori(ori), .lui(lui), .lw(lw), .jal(jal));
	assign Tnew_E = (addu|subu|ori|lui)? `T_ALU:
											(lw) ? `T_DM:	
													 `T_PC;
	
endmodule


module E2M(
	input clk,
	input reset,
	input [31:0] PC_E,
	input [31:0] V2_E,
	input [4:0] A2_E,
	input [31:0] AO_E,
	input [4:0] A3_E,
	input [1:0] MemToReg_E,
	input RegWrite_E,
	input MemWrite_E,
	input [1:0] Tnew_E,
	output reg [31:0] PC_M,
	output reg [31:0] V2_M,
	output reg [4:0] A2_M,
	output reg [31:0] AO_M,
	output reg [4:0] A3_M,
	output reg [1:0] MemToReg_M,
	output reg RegWrite_M,
	output reg MemWrite_M,
	output reg [1:0] Tnew_M
);
	initial begin
		PC_M=0;
		V2_M=0;
		A2_M=0;
		AO_M=0;
		A3_M=0;
		MemToReg_M=0;
		RegWrite_M=0;
		MemWrite_M=0;
		Tnew_M = 0;
	end

	always @(posedge clk) begin
		if(reset) begin
			PC_M=0;
			V2_M=0;
			A2_M=0;
			AO_M=0;
			A3_M=0;
			MemToReg_M=0;
			RegWrite_M=0;
			MemWrite_M=0;
			Tnew_M = 0;
		end
		else begin
			PC_M <= PC_E;
			V2_M <= V2_E;
			A2_M <= A2_E;
			AO_M <= AO_E;
			A3_M <= A3_E;
			MemToReg_M <= MemToReg_E;
			RegWrite_M <= RegWrite_E;
			MemWrite_M <= MemWrite_E;
			if(Tnew_E>0)
				Tnew_M <= Tnew_E - 1;
			else
				Tnew_M <= 0;
		end
	end

endmodule


module M2W(
	input clk,
	input reset,
	input [31:0] PC_M,
	input [4:0] A3_M,
	input [31:0] AO_M,
	input [31:0] DR_M,
	input [1:0] MemToReg_M,
	input RegWrite_M,
	input [1:0] Tnew_M,
	output reg [31:0] PC_W,
	output reg [4:0] A3_W,
	output reg [31:0] AO_W,
	output reg [31:0] DR_W,
	output reg [1:0] MemToReg_W,
	output reg RegWrite_W,
	output reg [1:0] Tnew_W
);
	initial begin
		PC_W=0;
		A3_W=0;
		AO_W=0;
		DR_W=0;
		MemToReg_W=0;
		RegWrite_W=0;
		Tnew_W = 0;
	end
	
	always @(posedge clk) begin
		if(reset) begin
			PC_W=0;
			A3_W=0;
			AO_W=0;
			DR_W=0;
			MemToReg_W=0;
			RegWrite_W=0;
			Tnew_W = 0;
		end
		else begin
			PC_W <= PC_M;
			A3_W <= A3_M;
			AO_W <= AO_M;
			DR_W <= DR_M;
			MemToReg_W <= MemToReg_M;
			RegWrite_W <= RegWrite_M;
			if(Tnew_M>0 )
				Tnew_W <= Tnew_M - 1;
			else
				Tnew_W <= 0;
		end
	end

endmodule
