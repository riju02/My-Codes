module test;
reg clk=0;
reg j=0;
reg k=0;
reg reset;
wire q,qnot;
skff dut(reset,clk,j,k,q,qnot);
initial begin
    begin
        $dumpfile("dump.vcd");
        $dumpvars;
        reset =1'b1;
        #10 reset=1'b0;
        j=1'b0;k=1'b1;
        #20 reset =1'b0;
        j=1'b0;k=1'b0;
        #20 reset =1'b0;
        j=1'b1;k=1'b0;
        #20 reset =1'b0;
        j=1'b1;k=1'b1;
        #40 $finish;
end
always #5 clk=~clk;
endmodule