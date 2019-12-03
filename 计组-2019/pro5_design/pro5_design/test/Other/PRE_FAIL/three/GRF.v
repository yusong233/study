`timescale 1ns / 1ps

module GRF(
	 input [31:0] WPC,
    input clk,
    input reset,
    input [4:0] A1_1,
    input [4:0] A2_1,
    input [4:0] A3_4,
    input RegWr_4,
    input [31:0] WD_4,
    output [31:0] RD1_1,
    output [31:0] RD2_1
    );
	//pay attention to synchronous
	
	reg [31:0] rf[31:1];
	integer i;
	initial begin
		for(i = 31; i>=1; i=i-1)
				rf[i] <= 32'b0;
	end
	
	always @(posedge clk) begin	
		if(reset) begin
			for(i = 31; i>=1; i=i-1)
				rf[i] <= 32'b0;
		end
		
		else if(RegWr_4 && A3_4 != 0) begin
			rf[A3_4] <= WD_4;
			$display("%d@%h: $%d <= %h", $time, WPC, A3_4, WD_4);
		end
	end
	
	//assign RD1_1 = (A1_1==A3_4 && A3_4!=0) ? WD_4: rf[A1_1];
	//assign RD2_1 = (A2_1==A3_4 && A3_4!=0) ? WD_4: rf[A2_1];
	assign RD1_1 = (A1_1==0) ? 32'b0: rf[A1_1];
	assign RD2_1 = (A2_1==0) ? 32'b0: rf[A2_1];	
	
endmodule

