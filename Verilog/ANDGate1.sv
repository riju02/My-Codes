module test_myand;
reg a, b;
wire y;
myand a2(y,a,b);
initial
begin
$dumpfile("dump.vcd");
$dumpvars;
a=0; b=0;
#10 a=0;b=1;
#10 a=1;b=0;
#10 a=1;b=1;
#10 $finish;
end 
endmodule