`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:09:57 09/18/2026 
// Design Name: 
// Module Name:    main 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module main(
		input j_top,
		input k_top,
		input clk_top,
		input reset_top,
		output pulso_top,
		output q_top,
		output nq_top
    );
	 
divisor div (
	.clk(clk_top),
	.reset(reset_top),
	.pulso(pulso_top)
);
	 
flipflop_jk ffjk(
	.clk(pulso_top),
	.reset(reset_top),
	.j(j_top),
	.k(k_top),
	.q(q_top),
	.nq(nq_top)
);


endmodule
