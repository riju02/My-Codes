module test_decode;
  reg a,b,en;
  wire y0,y1,y2,y3;
  decode2to4 d1(y0,y1,y2,y3,a,b,en);
  initial
    begin
      $dumpfile("dump.vcd");
      $dumpvars;
      
      a=0;b=0;en=0;
      #10  a=0;b=1;en=0;
      #10  a=1;b=0;en=0;
      #10  a=1;b=1;en=0;
      #10  a=0;b=0;en=1;
      #10  a=0;b=1;en=1;
      #10  a=1;b=0;en=1;
      #10  a=1;b=1;en=1;
      #10 $finish;
    end
endmodule