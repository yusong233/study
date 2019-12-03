`timescale 1ns / 1ps

module DM(
	 input [31:0] DPC,
    input clk,
    input reset,
    input [31:0] dmAd_3,
    input MemWr_3,
    input [31:0] DIn_3,
    output [31:0] DO_3
    );
//pay attention to synchronous

	reg [31:0] datamemory [1023:0];
	integer i;
	
	wire [9:0] Ad;
	assign Ad = dmAd_3[11:2];
	
	initial begin
		for(i = 0; i<=1023; i = i+1)
			datamemory[i]=32'b0;
	end
	
	always @(posedge clk) begin
		if(reset) begin
			for(i = 1023; i>=0; i=i-1)
				datamemory[i] <= 32'b0;
		end
		
		else if(MemWr_3) begin
			datamemory[Ad] <= DIn_3;
			$display("%d@%h: *%h <= %h", $time, DPC, dmAd_3, DIn_3);
		end
	end

	assign DO_3 = datamemory[Ad];

endmodule
