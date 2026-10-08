#include <stdio.h>

int main() {
    int A, B, i, j;
    int primo;
    int soma = 0;

    printf("Digite A: ");
    scanf("%d", &A);

    printf("Digite B: ");
    scanf("%d", &B);

    printf("Primos no intervalo:\n");

    for (i = A; i <= B; i++) {
        primo = 1;

        if (i < 2) {
            primo = 0;
        }

        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                primo = 0;
                break;
            }
        }

        if (primo == 1) {
            printf("%d ", i);
            soma += i;
        }
    }

    printf("\nSoma dos primos: %d\n", soma);

    return 0;
}