module Judge(RD1,RD2,judge,b_Ctrl);
input [31:0] RD1,RD2;
input [2:0] b_Ctrl;
output judge;

wire b_equal = (RD1 >= RD2);
wire blezals = (RD1 >= 0);
wire equal = (RD1 == RD2);
wire s_equal = (RD1 == RD2);
wire smal = (RD1 <= RD2);

assign judge =  (b_Ctrl == 3'b001) ? blezals :
			   (b_Ctrl == 3'b010) ? equal:
			    (b_Ctrl == 3'b011) ? smal:
			 (b_Ctrl == 3'b100) ? s_equal:
				                  b_equal;

endmodule