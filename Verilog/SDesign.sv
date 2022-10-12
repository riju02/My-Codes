module suc2b(input reset, input clk, input cte, output reg a0, output reg a1);
wire c0;
assign c0=cte&a0;
always @(negedge clk)
begin if (reset) a0<=1'b0;
else case ({cte,cte}) 2'b00: a0<=a0;
2'b01: a0<=1'b0;
2'b10: a0<=1'b1;
2'b11: a0<=~a0;
endcase
end

always @(negedge clk)
begin if (reset) a1<=1'b0;
else case ({c0, c0}) 2'b00: a1<=a1;
2'b01: a1<=1'b0;
2'b10: a1<=1'b1;
2'b11: a1<=~a1;
endcase
end
endmodule