`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:25:13 10/16/2026 
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
	output wire pulso_top
    );
	 
wire [1:0] d_top;

divisor div (
	.clk(clk_top),
	.reset(reset_top),
	.pulso(pulso_top)
);

ec_ex ec_ex (
	.x(x_top),
	.q(q_top),
	.d(d_top)
);

flipflop_d ffd0 (
	.clk(pulso_top),
	.reset(reset_top),
	.d(d_top[0]),
	.q(q_top[0]),
	.nq(nq_top[0])
);

flipflop_d ffd1 (
	.clk(pulso_top),
	.reset(reset_top),
	.d(d_top[1]),
	.q(q_top[1]),
	.nq(nq_top[1])
);

endmodule
