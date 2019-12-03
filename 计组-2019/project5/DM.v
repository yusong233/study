`define Ram_size 10'h3ff       //size of ram
`define Rom_size 10'h3ff       //size of rom
`define CYCLE    100           // generate clock
`define GRF31 5'b11111
module DM(A,WD,MD,MemWrite,MemRead,clk,reset,PC,Instr);
input reset,clk,MemWrite,MemRead;
input [31:0] Instr;
input [31:0] A;
input [31:0] WD;
input [31:0] PC;
output [31:0] MD;
reg  [31:0] Ram [0:`Ram_size];
wire [9:0] Addr = A[11:2];
assign MD = Ram[Addr];

wire [1:0] sb_byte = A[1:0];
wire sh_byte = A[1];
wire sw = (Instr[31:26] == 6'b101011);
wire sb = (Instr[31:26] == 6'b101000);
wire sh = (Instr[31:26] == 6'b101001);
integer i ;

always@(posedge clk) begin
	if(reset == 1) begin
		for(i = 0;i <= `Ram_size;i = i+1) begin
			Ram[i] <= 0;
		end
	end
	else begin
		if(MemWrite == 1) begin
			if(sw == 1) Ram[Addr] <= WD;
			else if(sb == 1) begin
				case (sb_byte)
					2'b01: begin
									Ram[Addr][15:8] <= WD[7:0];
								end
					2'b10: begin
									Ram[Addr][23:16] <= WD[7:0];
								end
					2'b11: begin
									Ram[Addr][31:24] <= WD[7:0];
								end
					default: begin
									Ram[Addr][7:0] <= WD[7:0];
								end
				endcase
			end
			else if(sh == 1) begin
				case(sh_byte)
					1'b1: begin
								Ram[Addr][31:16] <= WD[15:0];
							end
					default: begin
									Ram[Addr][15:0] <= WD[15:0];
								end
				endcase
			end
			$display("%d@%h: *%h <= %h", $time,PC, A,WD); 
		end
	end
end
endmodule