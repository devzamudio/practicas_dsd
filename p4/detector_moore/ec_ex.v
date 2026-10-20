`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:06:57 10/16/2026 
// Design Name: 
// Module Name:    ec_ex 
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

module ec_ex(
		input wire [1:0] q,
		input wire x,
		output wire t,
		output wire j,
		output wire k
    );
	 
assign t = (x & ~q[1] & ~q[0]) | (~x & q[1]);
assign j = x;
assign k = ~x | q[1];

endmodule
