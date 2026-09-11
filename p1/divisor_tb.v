`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:15:20 09/11/2026
// Design Name:   divisor
// Module Name:   C:/Users/ESCOM/Desktop/practicas_temporal/p1/divisor_tb.v
// Project Name:  p1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: divisor
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module divisor_tb;

	// Inputs
	reg CLK;
	reg RESET;

	// Outputs
	wire pulso_divisor;

	// Instantiate the Unit Under Test (UUT)
	divisor uut (
		.CLK(CLK), 
		.RESET(RESET), 
		.pulso_divisor(pulso_divisor)
	);
	
	initial CLK = 0;
	always #5 CLK = ~CLK;

	initial begin

		// Wait 100 ns for global reset to finish
		#100;
		RESET = 0; #10;
		RESET = 1; #10;
        
		// Add stimulus here

	end
      
endmodule

