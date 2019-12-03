module ALU(
    input [31:0] op1,
    input [31:0] op2,
    input [2:0] ALUCtrl,
    output [31:0] out
    );
	
	wire [31:0] rev = {op1[0],op1[1],op1[2],op1[3],op1[4],op1[5],op1[6],op1[7],op1[8],op1[9],op1[10],op1[11],op1[12],op1[13],op1[14],op1[15],op1[16],op1[17],op1[18],op1[19],op1[20],op1[21],op1[22],op1[23],op1[24],op1[25],op1[26],op1[27],op1[28],op1[29],op1[30],op1[31]};
	assign out = (ALUCtrl == 3'b001) ? (op1-op2):
					 (ALUCtrl == 3'b010) ? (op1|op2): 
					 (ALUCtrl == 3'b011) ? (rev):(op1+op2);


endmodule
