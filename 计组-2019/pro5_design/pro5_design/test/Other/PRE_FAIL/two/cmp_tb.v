`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:18:05 12/18/2018
// Design Name:   CMP
// Module Name:   C:/Users/panli/Desktop/CS/Work/P5/two/cmp_tb.v
// Project Name:  two
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: CMP
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module cmp_tb;

	// Inputs
	reg [31:0] D1_1;
	reg [31:0] D2_1;

	// Outputs
	wire zero;

	// Instantiate the Unit Under Test (UUT)
	CMP uut (
		.D1_1(D1_1), 
		.D2_1(D2_1), 
		.zero(zero)
	);

	initial begin
		// Initialize Inputs
		D1_1 = -1;
		D2_1 = -1;


	end
      
endmodule

