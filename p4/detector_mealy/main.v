`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:01:52 10/16/2026 
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
	input clk_top,
	input reset_top,
	input x_top,
	output wire [1:0] q_top,
	output wire [1:0] nq_top,
	output wire z_top
    );
	 
	wire t_top;
	wire d_top;
	
	ec_ex ec_ex(
		.q(q_top),
		.x(x_top),
		.d(d_top),
		.t(t_top)
	);
	
	flipflop_t fft(
	.clk(clk_top),
	.reset(reset_top),
	.t(t_top),
	.q(q_top[0]),
	.nq(nq_top[0])
	);
	
	flipflop_d ffd(
	.clk(clk_top),
	.reset(reset_top),
	.d(d_top),
	.q(q_top[1]),
	.nq(nq_top[1])
	);
	
	comb comb(
	.q(q_top),
	.z(z_top)
	);


endmodule
