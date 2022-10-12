module test;
reg clk=0;
reg cte;
reg reset;
wire a0, a1;
suc2b dut(reset,clk,cte,a0,a1);
initial begin $dumpfile("dump.vcd");
$dumpvars;
cte=1'b1;
reset=1'b1;
#10 reset=1'b0;
#10 reset=1'b0;
#10 reset=1'b0;
#10 reset=1'b0;
$finish;
end always #5 clk=~clk;
endmodule