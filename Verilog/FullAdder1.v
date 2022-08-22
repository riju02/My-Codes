`include "FullAdder.v"
module test_fadder;
reg a,b,c;
wire y,c1;
fadder f(y,c1,a,b,c);
initial
begin
$dumpfile("adder.vcd");
$dumpvars(1,"test_fadder");
a=0;b=0;c=0;
#10 a=0;b=0;c=1;
#10 a=0;b=1;c=0;
#10 a=0;b=1;c=1;
#10 a=1;b=0;c=0;
#10 a=1;b=0;c=1;
#10 a=1;b=1;c=0;
#10 a=1;b=1;c=1;
#10 $finish;
end
endmodule
