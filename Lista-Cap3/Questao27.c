#include <stdio.h>

int main() {
    int saque;
    int notas[] = {100, 50, 20, 10, 5, 2};
    int quantidade, i;

    printf("Digite o valor do saque: ");
    scanf("%d", &saque);

    for (i = 0; i < 6; i++) {
        quantidade = saque / notas[i];

        if (quantidade > 0) {
            printf("Cedulas de R$ %d: %d\n", notas[i], quantidade);
        }

        saque = saque % notas[i];
    }

    if (saque != 0) {
        printf("Nao e possivel sacar o valor exato com as cedulas disponiveis.\n");
    }

    return 0;
}