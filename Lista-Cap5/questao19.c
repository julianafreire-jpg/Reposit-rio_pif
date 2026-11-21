#include <stdio.h>

void contagem(int n);
void contagemCrescente(int n);

int main() {
    int numero;

    printf("Digite um numero positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Numero invalido.\n");
    } else {
        printf("Contagem regressiva:\n");
        contagem(numero);

        printf("\nContagem crescente:\n");
        contagemCrescente(numero);
    }

    return 0;
}

void contagem(int n) {
    if (n == 0) {
        printf("Fogo!\n");
        return;
    }

    printf("%d\n", n);
    contagem(n - 1);
}

void contagemCrescente(int n) {
    if (n == 0) {
        return;
    }

    contagemCrescente(n - 1);
    printf("%d\n", n);
}

/*
Explicacao: Na contagem regressiva, o printf() aparece antes da chamada
recursiva, por isso os numeros sao exibidos de n ate 1. Na crescente, o
printf() aparece depois da chamada recursiva, entao os numeros sao exibidos
de 1 ate n.
*/
