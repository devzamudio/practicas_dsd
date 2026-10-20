`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:32:07 10/16/2026 
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
	input x,
	input wire [1:0] q,
	output wire [1:0] d
    );
	 
assign d[0] = x^q[1];
assign d[1] = ~(x^q[0]);


endmodule
