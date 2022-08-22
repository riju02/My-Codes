module decode2to4(y0,y1,y2,y3,a,b,en);
  input wire a,b,en;
  output reg y0,y1,y2,y3;
  initial begin
    y0=0;y1=0;y2=0;y3=0;
  end
  always@(a or b or en) begin
    if (en==1'b0) begin
      {y0,y1,y2,y3}=4'b0000;
    end
    else
      begin
        
    case ({a,b})
      2'b00:{y0,y1,y2,y3}=4'b1000;
      2'b01:{y0,y1,y2,y3}=4'b0100;
      2'b10:{y0,y1,y2,y3}=4'b0010;
      2'b11:{y0,y1,y2,y3}=4'b0001;
    endcase
      end
  end
endmodule