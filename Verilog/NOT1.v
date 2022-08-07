`include "NOT.v"

module test_mynot;
reg a;
wire y;
mynot a2(y,a);
initial
begin
$dumpfile ("dump.vcd");
$dumpvars ();
a=0; 
#10 a=1
#10 $finish;
end 
endmodule