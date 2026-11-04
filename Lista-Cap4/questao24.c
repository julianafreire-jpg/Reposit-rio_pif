#include <stdio.h>

int main() {
    int angulo1, angulo2, angulo3;
    
    printf("Digite os tres angulos internos: ");
    scanf("%d %d %d", &angulo1, &angulo2, &angulo3);
    
    if ((angulo1 + angulo2 + angulo3) == 180) {
        if (angulo1 == 90 || angulo2 == 90 || angulo3 == 90) {
            printf("Triangulo Retangulo.\n");
        } else if (angulo1 > 90 || angulo2 > 90 || angulo3 > 90) {
            printf("Triangulo Obtusangulo.\n");
        } else {
            printf("Triangulo Acutangulo.\n");
        }
    } else {
        printf("A soma nao forma 180 graus.\n");
    }
    
    return 0;
}