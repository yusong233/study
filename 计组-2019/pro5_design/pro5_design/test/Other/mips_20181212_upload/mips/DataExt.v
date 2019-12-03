//DataEXT DataEXT(ALUO_W,LdStType_W,RD_W,DataEXTO);

module DataEXT(
	input[31:0] Addr_full,
	input[2:0] LdStType,
	input[31:0] datai,
	output[31:0] datao
    );
	 
	 wire[1:0] LSB;
	 assign LSB = Addr_full[1:0];
	 
	 function[31:0] res;
		input[1:0] LSB;
		input[2:0] LdStType;
		input[31:0] datai;
		case(LdStType)
			3'b000: res=datai; //lw
			3'b001: begin  //lbu
						case(LSB)
							2'b00: res={{24{1'b0}},datai[7:0]};
							2'b01: res={{24{1'b0}},datai[15:8]};
							2'b10: res={{24{1'b0}},datai[23:16]};
							2'b11: res={{24{1'b0}},datai[31:24]};
						endcase
					end
			3'b010: begin //lb
						case(LSB)
							2'b00: res={{24{datai[7]}},datai[7:0]};
							2'b01: res={{24{datai[15]}},datai[15:8]};
							2'b10: res={{24{datai[23]}},datai[23:16]};
							2'b11: res={{24{datai[31]}},datai[31:24]};
						endcase
					end
			3'b011: begin//lhu
						if(LSB[1]) res={{16{1'b0}},datai[31:16]};
						else res={{16{1'b0}},datai[15:0]};
					end
			3'b100: begin//lh
						if(LSB[1]) res={{16{datai[31]}},datai[31:16]};
						else res={{16{datai[15]}},datai[15:0]};
					end
			default: res=datai;
		endcase	
	endfunction

		assign datao = res(LSB,LdStType,datai);
		
endmodule
