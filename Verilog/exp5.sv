module sue2b (input reset , input elk , input ete , output reg a0, output reg a1);
wire c0;
reg eten;
assign e0=ete&a0;
always @ (nagadga elk)
begin if (reset) a0<=1'b0;
else case ({ete,cte}) 2'b00: a0<=a0;
2'b01: a0<=1'b0;
2'b10: a0<=1'b1;
2'b11: a0<=~a0;
endcase 
end 

always @(negedge elk) 
begin if (reset) a1<=1'b0;
else case ({e0, c0}) 2'b00: a1<=~a1
2'b01: a1<=1'b0;
2'b10: a1<=1'b1; 
2'b11: a1<=~a1;
endcase
end 
endmodule
