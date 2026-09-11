module main (
    input D,
    input CLK,
    input RESET,
    output reg Q,
    output reg Qn,
    output reg pulso_divisor
);

    reg [25:0] contador;

    always @(posedge CLK or posedge RESET) begin
        if (RESET) begin
            contador <= 0;
            pulso_divisor <= 0;
        end
        else begin
            if (contador == 49_999_999) begin
                pulso_divisor <= ~pulso_divisor;
                contador <= 0;
            end
            else begin
                contador <= contador + 1;
            end
        end
    end

    always @(posedge pulso_divisor or posedge RESET) begin
        if (RESET) begin
            Q <= 0;
            Qn <= 1;
        end
        else begin
            Q <= D;
            Qn <= ~D;
        end
    end

endmodule
