module test;
reg clk=0;
reg d=0;
reg reset;
wire q, qnot;
jkff dut(reset, clk,d,q,qnot);
initial begin $dumpfile("dump.vcd");
$dumpvars;
reset=1'b1;
#10 reset=1'b0;
d=1'b0;
#20 reset=1'b0;
d=1'b1;
#40 $finish;
end always #5 clk=~clk;
endmodule