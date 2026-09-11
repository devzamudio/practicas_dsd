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
    input CLK,
    input RESET,
    output reg pulso_divisor
);

    reg [25:0] contador;

    always @(posedge CLK or posedge RESET) begin
        if (RESET) begin
            contador <= 0;
            pulso_divisor <= 0;
        end
        else begin
            if (contador == 4) begin
                pulso_divisor <= ~pulso_divisor;
                contador <= 0;
            end
            else begin
                contador <= contador + 1;
            end
        end
    end


endmodule
