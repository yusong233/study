`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:42:02 12/18/2018
// Design Name:   IM
// Module Name:   C:/Users/panli/Desktop/CS/Work/P5/two/im_tb.v
// Project Name:  two
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module im_tb;

	// Inputs
	reg [31:0] imaddr;

	// Outputs
	wire [31:0] instr_0;

	// Instantiate the Unit Under Test (UUT)
	IM uut (
		.imaddr(imaddr), 
		.instr_0(instr_0)
	);

	initial begin
		
		imaddr = 0;
		#10
		imaddr = 20;

	end
      
endmodule

