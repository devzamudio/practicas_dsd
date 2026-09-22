`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   07:41:55 09/18/2026
// Design Name:   main
// Module Name:   C:/Users/ESCOM/Desktop/temporal_p2/p2/tb_main.v
// Project Name:  p2
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

module tb_main;

	// Inputs
	reg t_top;
	reg clk_top;
	reg reset_top;

	// Outputs
	wire pulso_top;
	wire q_top;
	wire nq_top;

	// Instantiate the Unit Under Test (UUT)
	main uut (
		.t_top(t_top), 
		.clk_top(clk_top), 
		.reset_top(reset_top), 
		.pulso_top(pulso_top), 
		.q_top(q_top), 
		.nq_top(nq_top)
	);
	
	always #5 clk_top = ~clk_top;

	initial begin

		// Wait 100 ns for global reset to finish
		#100;
		clk_top = 0;
		t_top = 0; reset_top = 0; #100;
		t_top = 0; reset_top = 1; #100;
		t_top = 1; reset_top = 0; #100;
		t_top = 1; reset_top = 1; #100;
        
		// Add stimulus here

	end
      
endmodule

