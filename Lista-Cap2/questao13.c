#include <stdio.h>

int main() {
    float lado, base, altura;
    float area_quadrado, area_retangulo, area_triangulo;

    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);

    area_quadrado = lado * lado;

    printf("Area do quadrado: %.2f\n", area_quadrado);

    printf("Digite a base do retangulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);

    area_retangulo = base * altura;

    printf("Area do retangulo: %.2f\n", area_retangulo);

    printf("Digite a base do triangulo: ");
    scanf("%f", &base);

    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura);

    area_triangulo = (base * altura) / 2.0;

    printf("Area do triangulo: %.2f\n", area_triangulo);

    return 0;
}