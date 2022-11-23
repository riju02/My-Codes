module test; 
reg clk=~0; 
reg cte; 
reg reset; 
wire q, qnot; 
suc dut(reset,clk,cte,a0,a1);
initial begin $dumpfile("durnp.vod");
$dumpvars; 
ete=1'b1; 
reset=1'b1; 
#10 reset=1'b0; 
#10 reset=1'b0;
#10 reset=1'b0;
#10 reset=1'b0;
$finish;
end always #5 elk=~elk;
endmodule 