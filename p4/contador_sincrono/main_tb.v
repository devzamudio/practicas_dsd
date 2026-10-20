`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   07:43:05 10/16/2026
// Design Name:   main
// Module Name:   C:/Users/ESCOM/Desktop/practicas_dsd-main/p4/contador_sincrono/main_tb.v
// Project Name:  contador_sincrono
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

	// Instantiate the Unit Under Test (UUT)
	main uut (
		.clk_top(clk_top), 
		.reset_top(reset_top), 
		.x_top(x_top), 
		.q_top(q_top), 
		.nq_top(nq_top)
	);
	
	always #5 clk_top = ~clk_top; 

	initial begin
		// Initialize Inputs
		#100;
		clk_top = 0;
		reset_top = 1;
		#10;
		reset_top = 0;
		x_top = 0; #50;
		x_top = 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		
		$finish;

	end
      
endmodule

