#include <stdio.h>

int main() {
    float distanciaKm, litrosConsumidos, consumoPorLitro;
    
    printf("Digite a distancia (km) e os litros consumidos: ");
    scanf("%f %f", &distanciaKm, &litrosConsumidos);
    
    consumoPorLitro = distanciaKm / litrosConsumidos;
    
    if (consumoPorLitro < 8.0) {
        printf("Venda o carro!\n");
    } else if (consumoPorLitro <= 14.0) {
        printf("Economico!\n");
    } else {
        printf("Super economico!\n");
    }
    
    return 0;
}