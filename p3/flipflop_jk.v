`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:10:59 09/18/2026 
// Design Name: 
// Module Name:    fft 
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
module flipflop_jk(
    input clk,
    input reset,
    input j,
	 input k,
    output reg q,
    output reg nq
    );
	 
always @( posedge clk or posedge reset )
begin
	if (reset) begin
	 q <= 1'b0;
	 nq <= 1'b1;
	end
	else begin
	 q <= ((~q)&j)|(q&(~k));
	 nq <= ~(((~q)&j)|(q&(~k)));
	end
end


endmodule
