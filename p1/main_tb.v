`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   07:40:46 09/11/2026
// Design Name:   main
// Module Name:   C:/Users/ESCOM/Desktop/practicas_temporal/p1/main_tb.v
// Project Name:  p1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: main
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module main_tb;

	// Inputs
	reg D;
	reg CLK;
	reg RESET;

	// Outputs
	wire Q;
	wire Qn;
	wire pulso_divisor;

	// Instantiate the Unit Under Test (UUT)
	main uut (
		.D(D), 
		.CLK(CLK), 
		.RESET(RESET), 
		.Q(Q), 
		.Qn(Qn), 
		.pulso_divisor(pulso_divisor)
	);
	
	initial CLK = 0;
	always #5 CLK = ~CLK;

	initial begin

		// Wait 100 ns for global reset to finish
		#100;
      
		D = 0; RESET = 0; #10;
		D = 0; RESET = 1; #10;
		D = 1; RESET = 0; #10;
		D = 1; RESET = 1; #10;
		// Add stimulus here

	end
      
endmodule

