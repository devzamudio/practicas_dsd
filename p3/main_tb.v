`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   07:43:32 09/29/2026
// Design Name:   main
// Module Name:   C:/Users/ESCOM/Desktop/practicas_dsd-main/p3/main_tb.v
// Project Name:  p3
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
	reg clk_top;
	reg reset_top;

	// Outputs
	wire [2:0] c_top;

	// Instantiate the Unit Under Test (UUT)
	main uut (
		.clk_top(clk_top), 
		.reset_top(reset_top), 
		.c_top(c_top)
	);
	
	always #20 clk_top = ~clk_top;

	initial begin
	
	
		// Initialize Inputs}
		reset_top = 0;
		clk_top = 0;
        // Wait 100 ns for global reset to finish
		#100;
		// Add stimulus here

reset_top = 1; 		#100;
reset_top = 0; 		#500;

$finish;

	end
      
endmodule

