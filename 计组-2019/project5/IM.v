`define Rom_size 10'h3ff       //size of rom
module IM(PC_addr,Instr);
input [11:2] PC_addr;
output [31:0] Instr;
reg [31:0] Instr_memory [0:`Rom_size];
integer i;
initial begin
	for(i=0;i<1024;i=i+1) begin
		Instr_memory[i] = 32'h0;
	end
end
initial
$readmemh ("code.txt",Instr_memory);
assign Instr = Instr_memory[PC_addr];
endmodule