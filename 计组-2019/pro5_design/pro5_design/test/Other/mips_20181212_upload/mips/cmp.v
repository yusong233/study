
`define op 31:26
`define rs 25:21
`define rt 20:16
`define rd 15:11
`define shamt 10:6
`define func 5:0
`define immediate 15:0
`define instr_index 25:0

module cmp(
	input[31:0] instr,
	input[31:0] D1,
	input[31:0] D2,
	output branch	
	);

	wire[5:0] op;
	wire[4:0] rt;
	assign op = instr[`op];
	assign rt = instr[`rt];
	wire beq,bne,blez,bgtz,bltz,bgez;

	assign beq = (op==6'b000_100);
	assign bne = (op==6'b000_101);
	assign blez = (op==6'b000_110);
	assign bgtz = (op==6'b000_111);
	assign bltz = ((op==6'b000_001) & (rt==5'b00000));
	assign bgez = ((op==6'b000_001) & (rt==5'b00001));

	assign branch = (beq & (D1==D2))|
					(bne & (D1!=D2))|
					(blez & ((D1==0)|D1[31]))|
					(bgtz & (!D1[31]))|
					(bltz & (D1[31]))|
					(bgez & ((D1==0)|!D1[31]));
	
 endmodule