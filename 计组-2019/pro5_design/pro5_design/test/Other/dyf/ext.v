`timescale 1ns / 1ps

module ext16(
	input[15:0] imm16,
	input[1:0] EXTop,
	output[31:0] EXTresult
    );
	 
	
	function[31:0] result;
		input[15:0] imm16;
		input[1:0] EXTop;
		case(EXTop)
			2'b00: result={{16{1'b0}},imm16};
			2'b01: result={{16{imm16[15]}},imm16};
			2'b10: result={imm16,{16{1'b0}}};
			default:result=0;
		endcase
	endfunction

	assign EXTresult = result(imm16,EXTop);

endmodule
