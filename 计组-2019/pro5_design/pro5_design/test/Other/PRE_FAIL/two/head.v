`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:23:05 12/18/2018 
// Design Name: 
// Module Name:    haed 
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

// [2:0]npc_sel
`define NPC_NONE 3'b000
`define NPC_BEQ  3'b001
`define NPC_JAL  3'b010
`define NPC_JR   3'b011
`define NPC_J	  3'b100

// [2:0]ALU
`define ALU_ADDU 3'b000
`define ALU_SUBU 3'b001
`define ALU_OR   3'b010
`define ALU_LUI  3'b011

//instruction identify
`define RTYPE 6'b00_0000
//opcode
`define R_ADDU 6'b10_0001
`define R_SUBU 6'b10_0011
`define R_JR 6'b00_1000
//
`define ORI 6'b00_1101
`define LW 6'b10_0011
`define SW 6'b10_1011
`define BEQ 6'b00_0100
`define LUI 6'b00_1111
`define JAL 6'b00_0011
`define NOP 6'b00_0000
`define J   6'b00_0010

//funtional MUX symbol
// [1:0]MPCF
`define PC_ADD4 2'b00
`define PC_NPC  2'b01
`define PC_RD1  2'b10

// [1:0]MA3E
`define A3_RD   2'b00
`define A3_RT   2'b01
`define A3_1f   2'b10

// [1:0]MRFWDW
`define WD_ALU	 2'b00
`define WD_DM	 2'b01
`define WD_PC4	 2'b10

// Forward 
`define E2D 2'b11 //3
`define M2D 2'b10 //2
`define W2D 2'b01	//1
`define ORIGIN 2'b00






