`timescale 1ns / 1ps

`include "head.v"
module IF_ID(
	input clk,
	input reset,
	input stall,
	input [31:0] pc_F,
	input [31:0] instr_F,
	
	output reg [31:0] pc_D,
	output reg [31:0] instr_D
);
	initial begin
		pc_D = 0;
		instr_D = 0;
	end

	always @(posedge clk) begin
		if(reset) begin
			pc_D <= 0;
			instr_D <= 0;
		end
		else if(stall) begin
			pc_D <= pc_D;
			instr_D <= instr_D;
		end
		else begin
			pc_D <= pc_F;
			instr_D <= instr_F;
		end
	end
endmodule


module ID_EXE(
	input clk,
	input reset,
	input stall,
	input [31:0] pc_D,
	input [31:0] V1_D,
	input [31:0] V2_D,
	input [4:0] A1_D,
	input [4:0] A2_D,
	input [4:0] A3_D,
	input [31:0] E32_D,
	input [2:0] ALUctr_D,
	input ALUBE_sel_D,
	input [1:0] RFWDW_sel_D,
	input RegWr_D,
	input MemWr_D,
	input [31:0] instr_D,
	output reg [31:0] pc_E,
	output reg [31:0] V1_E,
	output reg [31:0] V2_E,
	output reg [4:0] A1_E,
	output reg [4:0] A2_E,
	output reg [4:0] A3_E,
	output reg [31:0] E32_E,
	output reg [2:0] ALUctr_E,
	output reg ALUBE_sel_E,
	output reg [1:0] RFWDW_sel_E,
	output reg RegWr_E,
	output reg MemWr_E,
	output reg [31:0] instr_E,
	output /*reg*/ [1:0] Tnew_E
);
	initial begin
		pc_E=0;
		V1_E=0;
		V2_E=0;
		A1_E=0;
		A2_E=0;
		A3_E=0;
		E32_E=0;
		ALUctr_E=0;
		ALUBE_sel_E=0;
		RFWDW_sel_E=0;
		RegWr_E=0;
		MemWr_E=0;
		instr_E = 0;
		//Tnew_E = 0;
	end
	
	always @(posedge clk) begin
		if(reset) begin
			pc_E=0;
			V1_E=0;
			V2_E=0;
			A1_E=0;
			A2_E=0;
			A3_E=0;
			E32_E=0;
			ALUctr_E=0;
			ALUBE_sel_E=0;
			RFWDW_sel_E=0;
			RegWr_E=0;
			MemWr_E=0;
			instr_E = 0;
		end
		else if(stall) begin
			pc_E=0;
			V1_E=0;
			V2_E=0;
			A1_E=0;
			A2_E=0;
			A3_E=0;
			E32_E=0;
			ALUctr_E=0;
			ALUBE_sel_E=0;
			RFWDW_sel_E=0;
			RegWr_E=0;
			MemWr_E=0;
			instr_E = 0;
			//Tnew_E = 0;
		end
		else begin
			pc_E <= pc_D;
			V1_E <= V1_D;
			V2_E <= V2_D;
			A1_E <= A1_D;
			A2_E <= A2_D;
			A3_E <= A3_D;
			E32_E <= E32_D;
			ALUctr_E <= ALUctr_D;
			ALUBE_sel_E <= ALUBE_sel_D;
			RFWDW_sel_E <= RFWDW_sel_D;
			RegWr_E <= RegWr_D;
			MemWr_E <= MemWr_D;
			instr_E <= instr_D;
		end
	end
	
	wire [5:0] op_E, func_E;
	assign op_E = instr_E[31:26];
	assign func_E = instr_E[5:0];
	
	wire addu, subu, ori, lui, lw, jal;
	decoder deinstr(.op(op_E), .func(func_E), .addu(addu), .subu(subu), .ori(ori), .lui(lui), .lw(lw), .jal(jal));
	assign Tnew_E = (addu|subu|ori|lui)? `T_ALU:
											(lw) ? `T_DM:	
													 `T_PC;
	
endmodule


module EXE_MEM(
	input clk,
	input reset,
	input [31:0] pc_E,
	input [31:0] V2_E,
	input [4:0] A2_E,
	input [31:0] AO_E,
	input [4:0] A3_E,
	input [1:0] RFWDW_sel_E,
	input RegWr_E,
	input MemWr_E,
	input [1:0] Tnew_E,
	output reg [31:0] pc_M,
	output reg [31:0] V2_M,
	output reg [4:0] A2_M,
	output reg [31:0] AO_M,
	output reg [4:0] A3_M,
	output reg [1:0] RFWDW_sel_M,
	output reg RegWr_M,
	output reg MemWr_M,
	output reg [1:0] Tnew_M
);
	initial begin
		pc_M=0;
		V2_M=0;
		A2_M=0;
		AO_M=0;
		A3_M=0;
		RFWDW_sel_M=0;
		RegWr_M=0;
		MemWr_M=0;
		Tnew_M = 0;
	end

	always @(posedge clk) begin
		if(reset) begin
			pc_M=0;
			V2_M=0;
			A2_M=0;
			AO_M=0;
			A3_M=0;
			RFWDW_sel_M=0;
			RegWr_M=0;
			MemWr_M=0;
			Tnew_M = 0;
		end
		else begin
			pc_M <= pc_E;
			V2_M <= V2_E;
			A2_M <= A2_E;
			AO_M <= AO_E;
			A3_M <= A3_E;
			RFWDW_sel_M <= RFWDW_sel_E;
			RegWr_M <= RegWr_E;
			MemWr_M <= MemWr_E;
			if(Tnew_E>0)
				Tnew_M <= Tnew_E - 1;
			else
				Tnew_M <= 0;
		end
	end

endmodule


module MEM_WR(
	input clk,
	input reset,
	input [31:0] pc_M,
	input [4:0] A3_M,
	input [31:0] AO_M,
	input [31:0] DR_M,
	input [1:0] RFWDW_sel_M,
	input RegWr_M,
	input [1:0] Tnew_M,
	output reg [31:0] pc_W,
	output reg [4:0] A3_W,
	output reg [31:0] AO_W,
	output reg [31:0] DR_W,
	output reg [1:0] RFWDW_sel_W,
	output reg RegWr_W,
	output reg [1:0] Tnew_W
);
	initial begin
		pc_W=0;
		A3_W=0;
		AO_W=0;
		DR_W=0;
		RFWDW_sel_W=0;
		RegWr_W=0;
		Tnew_W = 0;
	end
	
	always @(posedge clk) begin
		if(reset) begin
			pc_W=0;
			A3_W=0;
			AO_W=0;
			DR_W=0;
			RFWDW_sel_W=0;
			RegWr_W=0;
			Tnew_W = 0;
		end
		else begin
			pc_W <= pc_M;
			A3_W <= A3_M;
			AO_W <= AO_M;
			DR_W <= DR_M;
			RFWDW_sel_W <= RFWDW_sel_M;
			RegWr_W <= RegWr_M;
			if(Tnew_M>0 )
				Tnew_W <= Tnew_M - 1;
			else
				Tnew_W <= 0;
		end
	end

endmodule
