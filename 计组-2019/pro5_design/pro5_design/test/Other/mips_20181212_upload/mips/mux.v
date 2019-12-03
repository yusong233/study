`timescale 1ns / 1ps

module MWAGE(
	input[1:0] RegDst,
	input[4:0] rt_D,
    input[4:0] rd_D,
    output[4:0] WAG
	);

	assign WAG = (RegDst==2'b00)?rt_D:
				 (RegDst==2'b01)?rd_D:
					 			5'd31;

endmodule

//MALUB MALUB(ALUSrc_E,MFALUBEO,EXT_E,0,0,MALUBO);
module MALUB(
	input[1:0] sel,
	input[31:0] MFALUBEO,
	input[31:0] EXT_E,
	output[31:0] datao
    );
	 
	 function[31:0] res;
		input[1:0] sel;
		input[31:0] MFALUBEO;
		input[31:0] EXT_E;
		case(sel)
			2'b00: res=MFALUBEO;
			2'b01: res=EXT_E;
			default: res=0;
		endcase
	endfunction
		 
	assign datao =  res(sel,MFALUBEO,EXT_E);
	
endmodule


//MMTR MMTR(MemtoReg_W,ALUO_W,RD_W,PC8_W,MMTRO);
module MMTR(
	input[1:0] sel,
	input[31:0] ALUO_W,
	input[31:0] RD_W,
	input[31:0] PC8_W,
	output[31:0] datao
    );
	 
	function[31:0] res;
		input[1:0] sel;
		input[31:0] ALUO_W;
		input[31:0] RD_W;
		input[31:0] PC8_W;
		case(sel)
			2'b00: res=ALUO_W;
			2'b01: res=RD_W;
			2'b10: res=PC8_W;
			default: res=0;
		endcase
	endfunction
	
	assign datao = res(sel,ALUO_W,RD_W,PC8_W);
	
endmodule



module MPC(
	input[1:0] sel,
	input[31:0] pc_F,
	input[31:0] signextimm16,
	input[31:0] grf_rs,
	input[25:0] imm26,
	output[31:0] npc
	);

	reg[27:0] temp;
	reg[31:0] pc_F4;
	
	function[31:0] result;
		input[1:0] sel;
		input[31:0] pc_F;
		input[31:0] signextimm16;
		input[31:0] grf_rs;
		input[25:0] imm26;
		case(sel)
			2'b00: result=pc_F+4;
			2'b01: result=pc_F+(signextimm16<<2);
			2'b10: result=grf_rs;
			2'b11: begin temp=(imm26<<2);
						 //pc_F4=pc_F+4;
				   		 result={pc_F[31:28],temp};
				   end
		endcase
	endfunction

	assign npc = result(sel,pc_F,signextimm16,grf_rs,imm26);

endmodule

module MFMUX(
	input[1:0] sel,
	input[31:0] exlow,
	input[31:0] low,
	input[31:0] mid,
	input[31:0] high,

	output[31:0] datao
	);

	assign datao = (sel==2'b11)? high:
				   (sel==2'b10)? mid:
				   (sel==2'b01)? low:
				   				exlow;

endmodule
//MFMUX MFRSD(MFRSD_sel,GRF_RD1,WDG_W,ALUO_M,RD1_E,MFRSDO);
//MFMUX MFRTD(MFRTD_sel,GRF_RD2,WDG_W,ALUO_M,RD2_E,MFRTDO);
//MFMUX MFALUAE(MFALUAE_sel,RD1_E,0,WDG_W,ALUO_M,MFALUAEO);
//MFMUX MFALUBE(MFALUBE_sel,RD2_E,0,WDG_W,ALUO_M,MFALUBEO);
//MFMUX MFWDD(MFWDD_sel,RD2_M,0,0,WDG_W,MFWDDO);
