#include <stdio.h>
#include <math.h>

int main() {
    double ladoA;
    double ladoB;
    double ladoC;
    double semiperimetro;
    double area;

    printf("Digite o lado A: ");
    scanf("%lf", &ladoA);

    printf("Digite o lado B: ");
    scanf("%lf", &ladoB);

    printf("Digite o lado C: ");
    scanf("%lf", &ladoC);

    semiperimetro = (ladoA + ladoB + ladoC) / 2.0;

    area = sqrt(semiperimetro *
                 (semiperimetro - ladoA) *
                 (semiperimetro - ladoB) *
                 (semiperimetro - ladoC));

    printf("Area do triangulo: %.3lf\n", area);

    return 0;
}