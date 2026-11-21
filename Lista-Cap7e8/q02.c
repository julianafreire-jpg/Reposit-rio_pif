#include <stdio.h>

#define TAMANHO 15

int main() {
    int vet[TAMANHO];
    int num, n = 0, i;

    printf("Digite numeros inteiros (0 para encerrar):\n");

    do {
        printf("Numero: ");
        scanf("%d", &num);
        if (num != 0) {
            if (n == TAMANHO) { printf("BUFFER LOTADO\n"); break; }
            vet[n++] = num;
        }
    } while (num != 0);

    if (n == 0) {
        printf("Nenhum numero foi armazenado.\n");
    } else {
        printf("\nValores na ordem inversa:\n");
        for (i = n - 1; i >= 0; i--) {
            printf("%d ", vet[i]);
        }
        printf("\n");
    }

    return 0;
}
