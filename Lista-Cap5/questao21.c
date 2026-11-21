#include <stdio.h>

#define SQR(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main() {
    int numero1, numero2;

    printf("Digite dois numeros: ");
    scanf("%d %d", &numero1, &numero2);

    printf("Quadrado do primeiro: %d\n", SQR(numero1));
    printf("Quadrado do segundo: %d\n", SQR(numero2));
    printf("Maior numero: %d\n", MAX(numero1, numero2));
    printf("Menor numero: %d\n", MIN(numero1, numero2));

    return 0;
}
