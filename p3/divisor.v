`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:13:35 09/11/2026 
// Design Name: 
// Module Name:    divisor 
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
module divisor (
    input clk,
    input reset,
    output reg pulso
);

    reg [25:0] contador;

always @(posedge clk or posedge reset) begin
  if (reset) begin
		contador <= 0;
		pulso <= 0;
  end
  else begin
		if (contador == 49999999) begin
			 pulso <= ~pulso;
			 contador <= 0;
		end
		else begin
			 contador <= contador + 1;
		end
  end
end


endmodule