
//dm dm(clk,reset,LdStType_M,ALUO_M,MFWDDO,MemRead_M,MemWrite_M,pc_M,RD_M);

module dm(
	input clk,
	input reset,
	input[2:0] LdStType,
	input[31:0] Addr_full,
	input[31:0] WD,
	input RE,
	input WE,
	input[31:0] pc,
	output[31:0] RD
    );
	 
	wire[3:0] BE;
	reg[31:0] DMmemory[1023:0];
	integer i=0;
	wire[1:0] LSB;
	wire[29:0] Addr_fu;
	wire[31:0] Addr_fu00;
	
	assign LSB = Addr_full[1:0];
	assign Addr_fu = Addr_full[31:2];
	assign Addr_fu00 = {Addr_fu,{2'b00}}; 

	//BE产生,如果是写存储器指令,可以单独在主控单元给一个LdStType,然后产生独特的BE,在always里搞
	function[3:0] func_be;
		input[2:0] LdStType;
		input[1:0] LSB;
		case(LdStType)
			3'b000: func_be=4'b1111;//sw
			3'b011: begin //sh
						if(LSB[1]) func_be=4'b1100;
						else func_be=4'b0011;
					  end
			3'b001: begin //sb
						case(LSB)
							2'b00: func_be=4'b0001;
							2'b01: func_be=4'b0010;
							2'b10: func_be=4'b0100;
							2'b11: func_be=4'b1000;							
						endcase
					  end
			default: func_be=0;
		endcase
	endfunction
	assign BE=func_be(LdStType,LSB); 
	
	// 读存储器函数,如果是读指令的修改,可以先在主控单元单独给一个LdStType,特判
	function[31:0] rd_result;
		input RE;
		input[31:0] datai;
		if(RE) rd_result = datai;
		else rd_result = 0;
	endfunction 
	assign RD = rd_result(RE,DMmemory[Addr_fu]);
	
	
	
	initial begin
		for(i=0;i<1024;i=i+1) begin
			DMmemory[i]<=0;
		end
	end

	always @(posedge clk) begin
		if(reset) begin
			for(i=0;i<1024;i=i+1) begin
				DMmemory[i]<=0;
			end
		end
		else begin
			if(WE) begin
				case(BE)
					4'b1111: begin 
								DMmemory[Addr_fu] = WD;
								$display("%d@%h: *%h <= %h",$time,pc,Addr_fu00,WD);
						     end 
				    4'b1100: begin
				    			DMmemory[Addr_fu][31:16] = WD[15:0];
								$display("%d@%h: *%h <= %h",$time,pc,Addr_fu00,DMmemory[Addr_fu]);
				    		 end
				    4'b0011: begin
				    			DMmemory[Addr_fu][15:0] = WD[15:0];
								$display("%d@%h: *%h <= %h",$time,pc,Addr_fu00,DMmemory[Addr_fu]);
				    		 end
				    4'b1000: begin
				    			DMmemory[Addr_fu][31:24] = WD[7:0];
								$display("%d@%h: *%h 	<= %h",$time,pc,Addr_fu00,DMmemory[Addr_fu]);
			   			     end
			   	 4'b0100: begin
			   	    			DMmemory[Addr_fu][23:16] = WD[7:0];
									$display("%d@%h: *%h <= %h",$time,pc,Addr_fu00,DMmemory[Addr_fu]);
			   	    		 end
			   	 4'b0010: begin
			   	    			DMmemory[Addr_fu][15:8] = WD[7:0];
									$display("%d@%h: *%h <= %h",$time,pc,Addr_fu00,DMmemory[Addr_fu]);
			   	    		 end
			   	 4'b0001: begin
			   	    			DMmemory[Addr_fu][7:0] = WD[7:0];
									$display("%d@%h: *%h <= %h",$time,pc,Addr_fu00,DMmemory[Addr_fu]);
			   	     	     end
					 /*4'b1010: begin    //swl
									case(LSB)
										2'b00: begin DMmemory[Addr_fu][7:0] = WD[31:24];
												 $display("%d@%h: *%h <= %h",$time,pc,Addr_fu00,DMmemory[Addr_fu]); end
										2'b01: begin DMmemory[Addr_fu][15:0] = WD[31:16];
												 $display("%d@%h: *%h <= %h",$time,pc,Addr_fu00,DMmemory[Addr_fu]); end
										2'b10: begin DMmemory[Addr_fu][23:0] = WD[31:8];
												 $display("%d@%h: *%h <= %h",$time,pc,Addr_fu00,DMmemory[Addr_fu]); end
										2'b11: begin DMmemory[Addr_fu] = WD;
												 $display("%d@%h: *%h <= %h",$time,pc,Addr_fu00,DMmemory[Addr_fu]); end
									endcase
								end*/
			   	 default: ;
				endcase
			end
		end
	end
endmodule

