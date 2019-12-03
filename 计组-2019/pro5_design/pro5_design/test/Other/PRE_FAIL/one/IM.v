`timescale 1ns / 1ps

module IM(
    input [31:0] imaddr,
    output [31:0] instr_0
    );

	reg [31:0] instrmemory [1023:0];
	
	integer i;
	
	initial begin
		for(i = 0; i<=1023; i = i+1)
			instrmemory[i] = 32'b0;
		$readmemh("code.txt",instrmemory);
	end
	
	wire [9:0] addr;
	assign addr = imaddr[11:2];
	assign instr_0 = instrmemory[addr];

endmodule
