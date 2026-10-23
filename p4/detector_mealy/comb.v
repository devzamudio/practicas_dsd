`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:33:22 10/20/2026 
// Design Name: 
// Module Name:    comb 
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
module comb(
		input wire [1:0] q,
		output wire z
    );
	 
	 assign z = q[0] & q[1];


endmodule
