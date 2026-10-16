`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:30:52 10/06/2026 
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
	output wire [3:0] q_top,
	output pulso_top
    );
	 
wire feedback;
assign feedback = ~q_top[3];

divisor div(
	.clk(clk_top),
	.reset(reset_top),
	.pulso(pulso_top)
);

flipflop_d ffd0(
	.clk(pulso_top),
	.reset(reset_top),
	.d(feedback),
	.q(q_top[0])
);

flipflop_d ffd1(
	.clk(pulso_top),
	.reset(reset_top),
	.d(q_top[0]),
	.q(q_top[1])
);

flipflop_d ffd2(
	.clk(pulso_top),
	.reset(reset_top),
	.d(q_top[1]),
	.q(q_top[2])
);

flipflop_d ffd3(
	.clk(pulso_top),
	.reset(reset_top),
	.d(q_top[2]),
	.q(q_top[3])
);

endmodule
