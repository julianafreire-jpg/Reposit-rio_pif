#include <stdio.h>

int maior(int a, int b);

int main() {
    int numero1, numero2;

    printf("Digite dois numeros: ");
    scanf("%d %d", &numero1, &numero2);

    printf("Maior numero: %d\n", maior(numero1, numero2));

    return 0;
}

int maior(int a, int b) {
    if (a > b) {
        return a;
    }

    return b;
}
