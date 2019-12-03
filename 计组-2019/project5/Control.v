module Control(
	input [31:0] Instr,
	output [1:0] EXTop,MemtoReg,RegDst,PC_Src,
	output [2:0] bCtrl,ALUCtrl,
	output branch,MemRead,MemWrite,ALUSrc,RegWrite
);

wire [5:0] op = Instr[31:26];
wire [5:0] func = Instr[5:0];
wire [4:0] rt = Instr[20:16];

wire addu, subu, ori, lui, lw, sw, beq, j, jal, jr, blezals;

decoder deinstr(.op(op), .func(func), .addu(addu), .subu(subu), .ori(ori), 
						.lui(lui), .lw(lw), .sw(sw), .beq(beq), .j(j), .jal(jal), .jr(jr), .blezals(blezals), .rev(rev));


assign EXTop = (sw || lw) ? 2'b01 :
							(lui) ? 2'b10 :
								(beq || blezals) ? 2'b11:
							       2'b00;

assign MemtoReg = (lw) ? 2'b01:
					  (jal || blezals) ? 2'b10:
				      //() ? 2'b11:
				             2'b00;

assign MemRead = (lw) ? 1'b1:1'b0;

assign MemWrite = (sw) ? 1'b1:1'b0;

assign bCtrl = (blezals) ? 3'b001:
(beq) ? 3'b010:
//() ? 3'b011:
//() ? 3'b100:
//() ? 3'b101:
//() ? 3'b110:
//() ? 3'b111:
3'b000;

assign ALUCtrl = (subu) ? 3'b001:
(ori) ? 3'b010:
(rev) ? 3'b011:
//() ? 3'b100:
//() ? 3'b101:
//() ? 3'b110:
//() ? 3'b111:
3'b000;

assign ALUSrc = (sw || lw || ori || lui) ? 1'b1:
					1'b0;
assign RegDst = (lw || ori || lui) ? 2'b01:
									  (jal || blezals) ? 2'b10:
			                     //() ? 2'b11:
				                         2'b00;


assign RegWrite = (addu || subu || lw || ori || lui || jal || blezals || rev) ? 1'b1: 1'b0;

assign PC_Src = (beq || blezals) ? 2'b01:
		     (j || jal) ? 2'b10:
			        (jr) ? 2'b11:
				            2'b00;

assign branch = (beq || blezals) ? 1 : 0;

endmodule