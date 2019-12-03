`timescale 1ns / 1ps

//alu alu(MFALUAEO,MALUBO,shamt_E,ALUctrl_E,ALUO_E);
module alu(
	input[31:0] SourceA,
	input[31:0] SourceB,
	input[4:0] sa,
	input[3:0] ALUctrl,
	output[31:0] ALUresult
    );

	wire[4:0] temp_sa;
	assign temp_sa = SourceA[4:0];

	function [31:0] result;
		input[31:0] SourceA;
		input[31:0] SourceB;
		input[4:0] sa;
		input[3:0] ALUctrl;
		input[4:0] temp_sa;
		
		case(ALUctrl)
			4'b0000: result=SourceA+SourceB;
			4'b0001: result=SourceA-SourceB;
			4'b0010: result=SourceA|SourceB;
			4'b0011: result=SourceA&SourceB;
			4'b0100: begin 
							if(($signed(SourceA))<($signed(SourceB))) result=1;
							else result=0;
						end
			4'b0101: begin 
							if(SourceA<SourceB) result=1;
							else result=0;
						end
			4'b0110: result=SourceB<<sa;
			4'b0111: result=SourceB>>sa;
			4'b1010: result=(($signed(SourceB))>>>sa);  // À„ ı”““∆
			4'b1011: result=(($signed(SourceB))>>>temp_sa); // À„ ıø…±‰”““∆
			4'b1100: result=SourceB<<temp_sa;  // ¬ﬂº≠ø…±‰◊Û“∆
			4'b1101: result=SourceB>>temp_sa;  //¬ﬂº≠ø…±‰”““∆		
			default: result=0;
		endcase
	endfunction

	assign ALUresult = result(SourceA,SourceB,sa,ALUctrl,temp_sa);

endmodule
