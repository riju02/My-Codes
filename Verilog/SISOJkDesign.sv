module jkff(input reset, input clk, input d0, output reg q, output qbar);
reg q0;
wire q0bar;
wire dbar;
assign dbar=~d0;
assign q0bar=~q0;
assign qbar=~q;

always @(negedge clk)
begin if (reset) q0<=1'b0;
else case ({d0, dbar}) 2'b00: q0<=q;
2'b01: q0<=1'b0;
2'b10: q0<=1'b1;
2'b11: q0<=~q;
endcase
end

always @(negedge clk)
begin if (reset) q<=1'b0;
else case ({q0, q0bar}) 2'b00: q0<=q;
2'b01: q<=1'b0;
2'b10: q<=1'b1;
2'b11: q<=~q;
endcase
end

endmodule