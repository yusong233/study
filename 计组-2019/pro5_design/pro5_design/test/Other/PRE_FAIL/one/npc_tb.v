`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:08:00 12/18/2018
// Design Name:   NPC
// Module Name:   C:/Users/panli/Desktop/CS/Work/P5/two/npc_tb.v
// Project Name:  two
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: NPC
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module npc_tb;

	// Inputs
	reg [31:0] pc_1;
	reg [31:0] pc4_1;
	reg zero;
	reg [2:0] npc_sel;
	reg [25:0] Imm26_1;

	// Outputs
	wire [31:0] npc_1;

	// Instantiate the Unit Under Test (UUT)
	NPC uut (
		.pc_1(pc_1), 
		.pc4_1(pc4_1), 
		.zero(zero), 
		.npc_sel(npc_sel), 
		.Imm26_1(Imm26_1), 
		.npc_1(npc_1)
	);

	initial begin
		// Initialize Inputs
		pc_1 = 32'h3000;
		pc4_1 = 32'h3004;
		zero = 0;
		npc_sel = 0;
		Imm26_1 = 1;
		
		#10
		npc_sel = 0;		//非跳转指令
		
		#10
		npc_sel = 3'b001;	//beq
		zero = 0;			//不跳转
		#10
		zero = 1;			//正跳转
		#10
		Imm26_1 = -1;	//负跳转
		
		#10
		Imm26_1 = 26'h233;
		npc_sel = 3'b010;	//jal	//正跳转
		#10
		Imm26_1 = -26'h233;	//负跳转
		
		#10
		npc_sel = 3'b100;	//j
		
	end
      
endmodule

