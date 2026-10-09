`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:53:11 10/06/2026 
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
	input init_top,
	output wire [3:0] q_top
    );
	 
wire feedback;
assign feedback = q_top[3];
	 
flipflop_d ffd0(
	.clk(clk_top),
	.preset(init_top),
	.reset(1'b0),
	.d(feedback),
	.q(q_top[0])
);

flipflop_d ffd1(
	.clk(clk_top),
	.reset(init_top),
	.preset(1'b0),
	.d(q_top[0]),
	.q(q_top[1])
);

flipflop_d ffd2(
	.clk(clk_top),
	.reset(init_top),
	.preset(1'b0),
	.d(q_top[1]),
	.q(q_top[2])
);

flipflop_d ffd3(
	.clk(clk_top),
	.reset(init_top),
	.preset(1'b0),
	.d(q_top[2]),
	.q(q_top[3])
);


endmodule
