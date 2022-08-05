`include "ORGate.v"

module test_myor;
reg a,b;
wire y;
  myor A1(y,a,b);
initial
begin
$dumpfile("dump.vcd");
$dumpvars(0,test_myor);
a=0; b=0;
#10 a=0;b=1;
#10 a=1;b=0;
#10 a=1;b=1;
#10 $finish;
end 
endmodule