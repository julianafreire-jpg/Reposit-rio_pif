#include <stdio.h>
#include <math.h>

int main() {
    float coefA, coefB, coefC, deltaEquacao, raiz1, raiz2;
    
    printf("Digite os coeficientes a, b e c: ");
    scanf("%f %f %f", &coefA, &coefB, &coefC);
    
    if (coefA == 0) {
        printf("Nao e uma equacao do 2o grau (a = 0).\n");
    } else {
        deltaEquacao = (coefB * coefB) - (4 * coefA * coefC);
        
        if (deltaEquacao < 0) {
            printf("A equacao nao possui raizes reais.\n");
        } else if (deltaEquacao == 0) {
            raiz1 = -coefB / (2 * coefA);
            printf("Raiz unica: %.2f\n", raiz1);
        } else {
            raiz1 = (-coefB + sqrt(deltaEquacao)) / (2 * coefA);
            raiz2 = (-coefB - sqrt(deltaEquacao)) / (2 * coefA);
            printf("Raizes reais e distintas: %.2f e %.2f\n", raiz1, raiz2);
        }
    }
    
    return 0;
}