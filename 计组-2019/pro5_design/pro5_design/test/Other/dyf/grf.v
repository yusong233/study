`timescale 1ns / 1ps


//grf grf(clk,reset,rs_D,rt_D,WAG_W,MMTRO,RegWrite_W,pc_W,GRF_RD1,GRF_RD2);//ok

module grf(
	input clk,
	input reset,
	input[4:0] RA1,
	input[4:0] RA2,
	input[4:0] WA,
	input[31:0] WD,
//	input[31:0] ADDR, // ALUO_W
//	input[2:0] type,  // LdStType
	input WE,
	input[31:0] pc,
	output [31:0] RD1,
	output [31:0] RD2
    );

	reg[31:0] grf[31:0];

	assign RD1 = grf[RA1];
	assign RD2 = grf[RA2];

	//wire[1:0] LSB;
	//	assign LSB = ADDR[1:0];

	integer i;
	
	initial begin
		for(i=0;i<32;i=i+1) begin
			grf[i] <= 0;
		end
	end

	always @(posedge clk) begin
		if(reset) begin
			for(i=0;i<32;i=i+1) begin
				grf[i] <= 0;
			end
		end
		else begin
			if(WE) begin
				if(WA!=0) begin 
					grf[WA]=WD;
					$display("%d@%h: $%d <= %h",$time, pc, WA,WD);
				end
			end
		end
	end

endmodule


				/*case(type)
						3'b110: begin //lwl
										case(LSB)
											2'b00: grf[WA][31:24] = WD[7:0];
											2'b01: grf[WA][31:16] = WD[15:0];
											2'b10: grf[WA][31:8] = WD[23:0];
											default : grf[WA] = WD;
										endcase
								  end
						3'b101: begin //lwr
										case(LSB)
											2'b00: grf[WA] = WD;
											2'b01: grf[WA][23:0] = WD[31:8];
											2'b10: grf[WA][15:0] = WD[31:16];
											2'b11: grf[WA][7:0] = WD[31:24];
										endcase
								  end
						default: grf[WA]=WD;
					endcase*/