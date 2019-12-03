`timescale 1ns / 1ps

`include "head.v"
module Ctr_E(
    input clk,
    input [5:0] op_12,
    input [5:0] func_12,
	 input RegWr_D,
    output reg MALUBE,
    output reg [2:0] ALUctr,
    output reg [5:0] op_23,
    output reg [5:0] func_23,
	 output  [1:0] Tnew_E,
	 output reg RegWr_E
    );
	 
	 initial begin
		MALUBE = 0;
		ALUctr = 0;
		RegWr_E = 0;
		op_23 = 0;
		func_23 = 0;
	 end
	
	
	wire addu, subu, ori, lui, lw, sw, beq, j, jal, jr;
	decoder instrdecode(.op(op_12), .func(func_12), .addu(addu), .subu(subu), .ori(ori), 
							.lui(lui), .lw(lw), .sw(sw), .beq(beq), .j(j), .jal(jal), .jr(jr));
	
	always @(*) begin
		MALUBE = ori|lw|sw|lui;
		ALUctr = subu? `ALU_SUBU:
					ori? `ALU_OR:
					lui? `ALU_LUI:
					`ALU_ADDU;
		RegWr_E = RegWr_D;
	end
	
	always @(posedge clk) begin
		/*MALUBE <= ori|lw|sw|lui;
		ALUctr<= subu? `ALU_SUBU:
					ori? `ALU_OR:
					lui? `ALU_LUI:
					`ALU_ADDU;
		RegWr_E<=RegWr_D;*/
		op_23<=op_12;
		func_23<=func_12;
	end
	
	`define T_ALU 2'b01
	`define T_DM  2'b10
	`define T_PC  2'b00
	
	wire adduu, subuu, orii, luii, lww;
	decoder instrdecodee(.op(op_23), .func(func_23), .addu(adduu), .subu(subuu), .ori(orii), 
							.lui(luii), .lw(lww));
	assign Tnew_E = (adduu|subuu|orii|luii)? `T_ALU:
											  lww ? `T_DM:
													 `T_PC;
endmodule
