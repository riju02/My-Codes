module fadder(y,c1,a,b,c);
input a,b,c;
output y,c1;
wire z,z1,z2;
xor(z,a,b);
xor(y,z,c);
and(z1,z,c);
and(z2,a,b);
or(c1,z1,z2);
endmodule