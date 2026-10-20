`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   07:44:19 10/06/2026
// Design Name:   main
// Module Name:   C:/Users/ESCOM/Desktop/practicas_dsd-main/p4/contador_johnson/main_tb.v
// Project Name:  contador_johnson
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
	reg init_top;

	// Outputs
	wire [3:0] q_top;
	wire pulso_top;

	// Instantiate the Unit Under Test (UUT)
	main uut (
		.clk_top(clk_top), 
		.init_top(init_top), 
		.q_top(q_top),
		.pulso_top(pulso_top)
	);
	
	always #5 clk_top = ~clk_top;

	initial begin
		// Initialize Inputs
		clk_top = 0;
		init_top = 1;

		// Wait 100 ns for global reset to finish
		#500;
		
		init_top = 0; 		#500;
		
		$stop;
        
		// Add stimulus here

	end
      
endmodule
