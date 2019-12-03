module im(
	input[9:0] pcAddr,
	output[31:0] instr
    );

	reg[31:0] IMmemory[1023:0];

	initial begin
		$readmemh("code.txt",IMmemory);
	end

	assign instr = IMmemory[pcAddr];

endmodule


