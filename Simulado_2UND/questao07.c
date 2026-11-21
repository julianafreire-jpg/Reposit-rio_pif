#include <stdio.h>

int ehPrimo(int n);

int main() {
    int n, i;

    printf("Digite um numero inteiro N: ");
    scanf("%d", &n);

    printf("Numeros primos de 1 ate %d:\n", n);

    for (i = 1; i <= n; i++) {
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

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}
