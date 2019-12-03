`define E2D 2'b11
`define M2D 2'b10
`define W2D 2'b01
`define M2E 2'b11
`define W2E 2'b10
`define W2M 2'b11

module MFSEL(
	//address
	input[4:0] rs_D,
	input[4:0] rt_D,
	input[4:0] RA1_E,
	input[4:0] RA2_E,
	input[4:0] RA2_M,
	input[4:0] WAG_E,
	input[4:0] WAG_M,
	input[4:0] WAG_W,
	//Tnew
	input[1:0] Tnew_E,
	input[1:0] Tnew_M,
	//RegWrite
	input RegWrite_E,
	input RegWrite_M,
	input RegWrite_W,
	//output select signal
	output[1:0] MFRSD_sel,
	output[1:0] MFRTD_sel,
	output[1:0] MFALUAE_sel,
	output[1:0] MFALUBE_sel,
	output[1:0] MFWDD_sel
	);


	assign MFRSD_sel = ((rs_D==WAG_E) & |{WAG_E} & (Tnew_E==2'b00) & RegWrite_E)? `E2D:
					   ((rs_D==WAG_M) & |{WAG_M} & (Tnew_M==2'b00) & RegWrite_M)? `M2D:
					   ((rs_D==WAG_W) & |{WAG_W}                   & RegWrite_W)? `W2D:
					   												  		  2'b00;
	assign MFRTD_sel = ((rt_D==WAG_E) & |{WAG_E} & (Tnew_E==2'b00) & RegWrite_E)? `E2D:
					   ((rt_D==WAG_M) & |{WAG_M} & (Tnew_M==2'b00) & RegWrite_M)? `M2D:
					   ((rt_D==WAG_W) & |{WAG_W}                   & RegWrite_W)? `W2D:
					   												  		  2'b00;
																				  
	assign MFALUAE_sel = ((RA1_E==WAG_M) & |{WAG_M} & (Tnew_M==2'b00) & RegWrite_M)? `M2E:
						 ((RA1_E==WAG_W) & |{WAG_W}  				   & RegWrite_W)? `W2E:
						 												 		 2'b00;
    assign MFALUBE_sel = ((RA2_E==WAG_M) & |{WAG_M} & (Tnew_M==2'b00) & RegWrite_M)? `M2E:
						 ((RA2_E==WAG_W) & |{WAG_W}  				   & RegWrite_W)? `W2E:
						 												 		 2'b00;

	assign MFWDD_sel = ((RA2_M==WAG_W) & |{WAG_W} & RegWrite_W)? `W2M:
													 		 2'b00;


	
	
 endmodule