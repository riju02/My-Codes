`include "NOT.v"

module test_mynot;
reg a;
wire y;
mynot a2(y,a);
initial
begin
$dumpfile ("not.vcd");
$dumpvars (0, "test_mynot");
a=0; 
#10 a=1
#10 $finish;
end 
endmodule