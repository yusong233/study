`timescale 1ns / 1ps

`include "head.v"
module Ctr_M(
    input clk,
    input [5:0] op_23,
    input [5:0] func_23,
	 input RegWr_E,
    output reg MemWr_3,
    output reg [5:0] op_34,
    output reg [5:0] func_34,
	 output  [1:0] Tnew_M,
	 output reg RegWr_M
    );
	
	initial begin
		MemWr_3 = 0;
		RegWr_M = 0;
		op_34 = 0;
		func_34 = 0;
	end
	
	wire addu, subu, ori, lui, lw, sw, beq, j, jal, jr;
	decoder instrdecode(.op(op_23), .func(func_23), .addu(addu), .subu(subu), .ori(ori), 
							.lui(lui), .lw(lw), .sw(sw), .beq(beq), .j(j), .jal(jal), .jr(jr));
	

	always @(posedge clk) begin
		MemWr_3 <= sw;
		RegWr_M<=RegWr_E;
		op_34<=op_23;
		func_34<=func_23;
	end
	
	wire lww;
	decoder instrdecodee(.op(op_34), .func(func_34), .lw(lww));
	assign Tnew_M = lww? 2'b01: 2'b00;
	
endmodule
