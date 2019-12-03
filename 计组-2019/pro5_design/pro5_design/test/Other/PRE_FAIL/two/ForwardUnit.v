`timescale 1ns / 1ps

`include "head.v"
module ForwardUnit(
	input [31:0] instr_D,
	input [4:0] A3_E,
	input [4:0] A3_M,
	input [4:0] A3_W,
	input [4:0] A1_E,
	input [4:0] A2_E,
	input [4:0] A2_M,
	input RegWr_E,
	input RegWr_M,
	input RegWr_W,
	input [1:0] Tnew_E,
	input [1:0]Tnew_M,
	output [1:0] FRD1D,
	output [1:0] FRD2D,
	output [1:0] FALUAE,
	output [1:0] FALUBE,
	output FWDM
    );
	
	wire [4:0] A1_D, A2_D;
	assign A1_D = instr_D[25:21];
	assign A2_D = instr_D[20:16];
	
	assign FRD1D = ((A1_D == A3_E) & (A3_E!=0) & (Tnew_E == 0) &RegWr_E)? `E2D:
						((A1_D == A3_M) & (A3_M!=0) & (Tnew_M == 0) &RegWr_M)? `M2D:
						((A1_D == A3_W) & (A3_W!=0)                 &RegWr_W)? `W2D:
						`ORIGIN;
	
	assign FRD2D = ((A2_D == A3_E) & (A3_E!=0) & (Tnew_E == 0) &RegWr_E)? `E2D:
						((A2_D == A3_M) & (A3_M!=0) & (Tnew_M == 0) &RegWr_M)? `M2D:
						((A2_D == A3_W) & (A3_W!=0)                 &RegWr_W)? `W2D:
						`ORIGIN;
	
	assign FALUAE = ((A1_E == A3_M) & (A3_M!=0) & (Tnew_M == 0) &RegWr_M)? `M2D:
						 ((A1_E == A3_W) & (A3_W!=0)  				   &RegWr_W)? `W2D:
						 `ORIGIN;
	
	assign FALUBE = ((A2_E == A3_M) & (A3_M!=0) & (Tnew_M == 0) &RegWr_M)? `M2D:
						 ((A2_E == A3_W) & (A3_W!=0)  				   &RegWr_W)? `W2D:
						 `ORIGIN;
	
	assign FWDM = ((A2_M == A3_W) & (A3_W!=0) &RegWr_W)? `W2D:
						`ORIGIN;

endmodule
