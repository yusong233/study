`timescale 1ns / 1ps

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
    output reg jr,
	 output reg blezals,
	 output reg rev
    );

initial begin
	 addu = 0;
    subu = 0;
    ori = 0;
    lui = 0;
    lw = 0;
    sw = 0;
    beq = 0;
    j = 0;
    jal = 0;
    jr = 0;
	 blezals = 0;
	 rev = 0;
end

	//identify the instruction
always@(*)begin
	addu = (op == 6'b000000) && (func == 6'b100001);
	subu = (op == 6'b000000) && (func == 6'b100011);
	sw = (op == 6'b101011);
   lw = (op == 6'b100011);
   ori = (op == 6'b001101);
   beq = (op == 6'b000100);
   lui = (op == 6'b001111);
   j = (op == 6'b000010);
   jal = (op == 6'b000011);
   jr = (op == 6'b000000) && (func == 6'b001000);
	blezals = (op == 6'b011000);
	rev = (op == 6'b0) && (func == 6'b010100);

end
 
	//nop?
endmodule