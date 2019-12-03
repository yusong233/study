`timescale 1ns / 1ps

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

initial begin
	 addu=0;
    subu=0;
    ori=0;
    lui=0;
    lw=0;
    sw=0;
    beq=0;
    j=0;
    jal=0;
    jr=0;
end

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