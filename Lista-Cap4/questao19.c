#include <stdio.h>

int main() {
    float ladoA, ladoB, ladoC;
    
    printf("Digite os tres lados do triangulo: ");
    scanf("%f %f %f", &ladoA, &ladoB, &ladoC);
    
    if (ladoA < (ladoB + ladoC) && ladoB < (ladoA + ladoC) && ladoC < (ladoA + ladoB)) {
        if (ladoA == ladoB && ladoB == ladoC) {
            printf("Triangulo Equilatero.\n");
        } else if (ladoA == ladoB || ladoB == ladoC || ladoA == ladoC) {
            printf("Triangulo Isosceles.\n");
        } else {
            printf("Triangulo Escaleno.\n");
        }
    } else {
        printf("Erro: Os lados fornecidos nao formam um triangulo!\n");
    }
    
    return 0;
}