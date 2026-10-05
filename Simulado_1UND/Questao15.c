#include <stdio.h>

int main() {
    int numeroLinhas;
    int numeroAtual = 1;

    printf("Digite o numero de linhas: ");
    scanf("%d", &numeroLinhas);

    for (int linha = 1; linha <= numeroLinhas; linha++) {

        for (int coluna = 1; coluna <= linha; coluna++) {
            printf("%d ", numeroAtual);
            numeroAtual++;
        }

        printf("\n");
    }

    return 0;
}