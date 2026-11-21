#include <stdio.h>

#define N 8

int somaVetor(int v[], int n);
int maiorValor(int v[], int n);
int buscaValor(int v[], int n, int x);

int main() {
    int v[N];
    int i, x, posicao;

    for (i = 0; i < N; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("Valor a ser buscado: ");
    scanf("%d", &x);

    printf("\nSoma dos elementos: %d\n", somaVetor(v, N));
    printf("Maior valor: %d\n", maiorValor(v, N));

    posicao = buscaValor(v, N, x);
    if (posicao == -1) {
        printf("O valor %d nao foi encontrado.\n", x);
    } else {
        printf("O valor %d esta na posicao %d.\n", x, posicao);
    }

    return 0;
}

int somaVetor(int v[], int n) {
    int i, soma = 0;

    for (i = 0; i < n; i++) {
        soma = soma + v[i];
    }

    return soma;
}

int maiorValor(int v[], int n) {
    int i, maior = v[0];

    for (i = 1; i < n; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
    }

    return maior;
}

int buscaValor(int v[], int n, int x) {
    int i;

    for (i = 0; i < n; i++) {
        if (v[i] == x) {
            return i;
        }
    }

    return -1;
}
