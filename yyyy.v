// Verilog test fixture created from schematic /home/andr/test/bytes.sch - Mon Jun 10 03:50:54 2019

`timescale 1ns / 1ps

module bytes_bytes_sch_tb();

// Inputs
   reg CLK;
   reg DATAIN;
   reg [7:0] DATA;

// Output
   wire [12:0] D;
   wire XLXN_468;
   wire XLXN_487;
   wire XLXN_547;
   wire x2;
   wire y1;
   wire y2;
   wire XLXN_1212;
   wire XLXN_1248;
   wire XLXN_1249;
   wire XLXN_1251;
   wire [7:0] IN8;
   wire [7:0] IN7;
   wire [7:0] IN6;
   wire [7:0] IN5;
   wire [7:0] IN4;
   wire [7:0] IN3;
   wire [7:0] IN2;
   wire [7:0] IN1;
   wire [7:0] IN0;
   wire [7:0] DATARES;
   wire DATAOUT;
   wire XLXN_1328;
   wire x0;

// Bidirs

// Instantiate the UUT
   bytes UUT (
		.D(D), 
		.XLXN_468(XLXN_468), 
		.XLXN_487(XLXN_487), 
		.CLK(CLK), 
		.XLXN_547(XLXN_547), 
		.x2(x2), 
		.y1(y1), 
		.DATAIN(DATAIN), 
		.y2(y2), 
		.XLXN_1212(XLXN_1212), 
		.XLXN_1248(XLXN_1248), 
		.XLXN_1249(XLXN_1249), 
		.XLXN_1251(XLXN_1251), 
		.IN8(IN8), 
		.IN7(IN7), 
		.IN6(IN6), 
		.IN5(IN5), 
		.IN4(IN4), 
		.IN3(IN3), 
		.IN2(IN2), 
		.IN1(IN1), 
		.IN0(IN0), 
		.DATA(DATA), 
		.DATARES(DATARES), 
		.DATAOUT(DATAOUT), 
		.XLXN_1328(XLXN_1328), 
		.x0(x0)
   );

// Initialize Inputs
	reg[7:0] mem[(480)*(640-3)*3:0];
	integer i;
	integer fileId;
	
	initial begin
	#15 CLK = 0; DATAIN = 0; DATA = 0;

	#15 $readmemh("/home/andr/lnx/tstImg/input.txt", mem);
	#15 fileId = $fopen("/home/andr/lnx/tstImg/output.txt");
	 
	#80
	for(i=0;i<(480)*(640-3)*3; i=i+1)begin
		#24
		DATA = mem[i];
		DATAIN=~DATAIN;
		#24 DATAIN=~DATAIN;
	end
	
	#24 $fclose(fileId);
	
	end
	
	always #4 CLK=~CLK;
	always @(negedge D[11])
		$fwrite(fileId, "0x%02h ",  DATARES);
endmodule
