#include <stdio.h>

int ehPrimo(int n);

int main() {
    int numero, i;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (ehPrimo(numero) == 1) {
        printf("O numero e primo.\n");
    } else {
        printf("O numero nao e primo.\n");
    }

    printf("\nNumeros primos de 1 ate 50:\n");

    for (i = 1; i <= 50; i++) {
        if (ehPrimo(i) == 1) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}

int ehPrimo(int n) {
    int i;

    if (n < 2) {
        return 0;
    }

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}
