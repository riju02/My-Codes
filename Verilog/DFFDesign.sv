module dff(input reset, input clk, input d, output reg q, output qbar);
	wire dbar;
	assign dbar=~d;
	assign qbar=~q;
	always @(negedge clk)
		begin if (reset) q<=1'b0;
		else case ({d, dbar}) 2'b00: q<=q;
			2'b01: q<=1'b0;
			2'b10: q<=1'b1;
			2'b11: q<=~q;
		endcase
	end
endmodule