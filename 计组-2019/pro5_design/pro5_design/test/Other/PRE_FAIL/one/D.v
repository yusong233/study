`timescale 1ns / 1ps

module D(
    input clk,
	 input reset,
	 input stall,
	 input [31:0] IR_0,
    input [31:0] pc4_0,
	 input [31:0] pc_0,
    output reg [31:0] IR_01,
    output reg [31:0] pc4_01,
	 output reg [31:0] pc_01
    );

	initial begin
		IR_01 = 0;
		pc4_01 = 32'h3004;
		pc_01 = 32'h3000;
	end

	always @(posedge clk) begin
		if(reset) begin
			IR_01 <= 0;
			pc4_01 <= 32'h3004;
			pc_01 <= 32'h3000;
		end
		else if(reset == 0 && !stall) begin
			IR_01 <= IR_0;
			pc4_01 <= pc4_0;
			pc_01 <= pc_0;
		end
		else if(reset == 0 && stall) begin	//冻结D级流水线
			IR_01 <= IR_01;
			pc4_01 <= pc4_01;
			pc_01 <= pc_01;
		end
	end

endmodule
