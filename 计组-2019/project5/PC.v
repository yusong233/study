module PC(
input clk,reset,D_branch,stop,
input [31:0] nPC,Instr,
output reg [31:0] PC
);
wire [31:0] PC_4 = PC + 4;

wire j = (Instr[31:26] == 6'b000010);
wire jal = (Instr[31:26] == 6'b000011);
wire jr = ((Instr[31:26] == 6'b0) && (Instr[5:0] == 6'b001000));
initial PC = 32'h0000_3000;
always@(posedge clk ) begin
	if(reset == 1) begin
		PC <= 32'h0000_3000;
	end
	else begin
		if(stop == 1) PC <= PC;
		else begin
			if(D_branch | j | jr | jal)
				PC <= nPC;
			else 
				PC <= PC_4;
		end
	end
end

endmodule