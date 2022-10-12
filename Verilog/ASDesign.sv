`import (JK.sv)

module twobitasyncounter(j,k, clk, reset, q_out, qbar_out);
input [1:0] j; input [1:0] k; input clk; input reset;
output wire [1:0] q_out;
output wire [1:0] qbar_out;
jkff M1(reset,clk, j[0], k[0], q_out[0], qbar_out[0]);
jkff M2(reset,q_out[0], j[1], k[1], q_out[1], qbar_out[1]);
endmodule