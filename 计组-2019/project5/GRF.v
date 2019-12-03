module GRF(reset,WE,RA1,RA2,WA,WD,clk,RD1,RD2,PC);
input reset,WE,clk;
input [4:0] RA1,RA2,WA;
input [31:0] WD;
input [31:0] PC;
output [31:0] RD1,RD2;
reg [31:0] registers [0:31];
integer i;
assign RD1 = registers[RA1];
assign RD2 = registers[RA2];
initial begin
	for(i=0;i<32;i=i+1) begin
			case(i)
			28: registers[i] <= 32'h0000_1800;
			29: registers[i] <= 32'h0000_2ffc;
			default: registers[i] <= 32'b0;
			endcase
		end
end
always@(posedge clk) begin
	if(reset == 1) begin
		for(i=0;i<32;i=i+1) begin
			case(i)
			28: registers[i] <= 32'h0000_1800;
			29: registers[i] <= 32'h0000_2ffc;
			default: registers[i] <= 32'b0;
			endcase
		end
	end
	else begin
		if(WA == 5'b0) begin
			registers[WA] <= 32'b0;
		end
		else if(WE==1) begin
			registers[WA] <= WD;
			$display("%d@%h: $%d <= %h", $time, PC, WA, WD);
		end
	end
end

endmodule