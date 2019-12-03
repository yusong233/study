`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:13:24 12/18/2018 
// Design Name: 
// Module Name:    decoder 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
`include "head.v"
module decoder(
    input [5:0] op,
    input [5:0] func,
    output reg addu,
    output reg subu,
    output reg ori,
    output reg lui,
    output reg lw,
    output reg sw,
    output reg beq,
    output reg j,
    output reg jal,
    output reg jr
    );

	//identify the instruction
always@(*)begin
	addu = (op==`RTYPE && func == `R_ADDU);
	subu = (op==`RTYPE && func == `R_SUBU);
	jr = (op==`RTYPE && func == `R_JR);
	ori = (op==`ORI);
	lw = (op==`LW);
	sw = (op==`SW);
	beq = (op==`BEQ);
	lui = (op==`LUI);
	jal = (op==`JAL);
	j = (op==`J);
end
	//nop?
endmodule
