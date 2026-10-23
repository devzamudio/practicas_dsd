`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   07:54:40 10/20/2026
// Design Name:   main
// Module Name:   C:/Users/ESCOM/Desktop/practicas_dsd-main/practicas_dsd-main/p4/detector_mealy/main_tb.v
// Project Name:  detector_mealy
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
	reg x_top;

	// Outputs
	wire [1:0] q_top;
	wire [1:0] nq_top;
	wire z_top;

	// Instantiate the Unit Under Test (UUT)
	main uut (
		.clk_top(clk_top), 
		.reset_top(reset_top), 
		.x_top(x_top), 
		.q_top(q_top), 
		.nq_top(nq_top), 
		.z_top(z_top)
	);

	always #5 clk_top = ~clk_top;

	initial begin
		// Initialize Inputs
		clk_top = 0;
		reset_top = 1;
		x_top = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		x_top = 1;
		
		#500;
		x_top = 0;
		#100;
		reset_top = 0;
		x_top = 1;
		#100;
		x_top = 0;
		
		#500
		
		$finish;
        
		// Add stimulus here

	end
      
endmodule

