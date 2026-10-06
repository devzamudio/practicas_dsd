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
		input clk_top,
		input reset_top,
		//output pulso_top,
		output wire [2:0] c_top
    );
	 
wire [2:0] qn_top;

/*	 
divisor div (
	.clk(clk_top),
	.reset(reset_top),
	.pulso(pulso_top)
);
*/
	 
flipflop_d ffd0(
	.clk(clk_top),
	.reset(reset_top),
	.d(qn_top[0]),
	.q(c_top[0]),
	.nq(qn_top[0])
);

flipflop_d ffd1(
	.clk(qn_top[0]),
	.reset(reset_top),
	.d(qn_top[1]),
	.q(c_top[1]),
	.nq(qn_top[1])
);

flipflop_d ffd2(
	.clk(qn_top[1]),
	.reset(reset_top),
	.d(qn_top[2]),
	.q(c_top[2]),
	.nq(qn_top[2])
);

endmodule
