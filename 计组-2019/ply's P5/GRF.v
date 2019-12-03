`timescale 1ns / 1ps

module GRF(
	 input [31:0] WPC,
    input clk,
    input reset,
    input [4:0] A1_D,
    input [4:0] A2_D,
    input [4:0] A3_W,
    input RegWr_W,
    input [31:0] WD_W,
    output [31:0] RD1_D,
    output [31:0] RD2_D
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
		
		else if(RegWr_W && A3_W != 0) begin
			rf[A3_W] <= WD_W;
			$display("%d@%h: $%d <= %h", $time, WPC, A3_W, WD_W);
		end
	end
	
	assign RD1_D = (A1_D==0) ? 32'b0: rf[A1_D];
	assign RD2_D = (A2_D==0) ? 32'b0: rf[A2_D];	
	
endmodule

