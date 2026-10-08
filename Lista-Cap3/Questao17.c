#include <stdio.h>

int main() {
    float nota, maior = 0, menor = 10, soma = 0, media;
    int quantidade = 0;

    printf("Digite as notas (-1 para encerrar):\n");

    while (1) {
        scanf("%f", &nota);

        if (nota == -1) {
            break;
        }

        if (nota >= 0 && nota <= 10) {
            if (nota > maior) {
                maior = nota;
            }

            if (nota < menor) {
                menor = nota;
            }

            soma += nota;
            quantidade++;
        }
    }

    if (quantidade > 0) {
        media = soma / quantidade;

        printf("Total de alunos: %d\n", quantidade);
        printf("Maior nota: %.2f\n", maior);
        printf("Menor nota: %.2f\n", menor);
        printf("Media: %.2f\n", media);
    } else {
        printf("Nenhuma nota foi informada.\n");
    }

    return 0;
}