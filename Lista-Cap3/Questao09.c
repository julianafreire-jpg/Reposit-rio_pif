#include <stdio.h>

int main() {
    float valor, soma = 0, media;
    int quantidade = 0;

    printf("Digite valores positivos (valor negativo para parar):\n");

    while (1) {
        scanf("%f", &valor);

        if (valor < 0) {
            break;
        }

        soma += valor;
        quantidade++;
    }

    if (quantidade > 0) {
        media = soma / quantidade;

        printf("Quantidade de valores: %d\n", quantidade);
        printf("Soma total: %.2f\n", soma);
        printf("Media: %.2f\n", media);
    } else {
        printf("Nenhum valor valido foi digitado.\n");
    }

    return 0;
}

