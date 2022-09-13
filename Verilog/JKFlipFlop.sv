module jkff (input reset, input clk, input j, input k, output req q, output qnot);

assign qnot=~q;
always @(negedge clk)
begin
    if(reset) q<=1'b0;
else
case({j,k})
2'b00: q<=q;
2'b01: q<=1'b0;
2'b10:q<=1'b1;
2'b11:q<=~q;
endcase
end
endmodule