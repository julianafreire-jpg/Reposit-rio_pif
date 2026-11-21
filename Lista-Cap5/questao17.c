#include <stdio.h>

long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main() {
    int numero;
    long resultadoIterativo, resultadoRecursivo;

    printf("Digite um numero nao negativo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Numero invalido.\n");
    } else {
        resultadoIterativo = fatorialIterativo(numero);
        resultadoRecursivo = fatorialRecursivo(numero);

        printf("Fatorial iterativo: %ld\n", resultadoIterativo);
        printf("Fatorial recursivo: %ld\n", resultadoRecursivo);

        if (resultadoIterativo == resultadoRecursivo) {
            printf("Os resultados sao iguais.\n");
        } else {
            printf("Os resultados sao diferentes.\n");
        }
    }

    return 0;
}

long fatorialIterativo(int n) {
    long resultado = 1;
    int i;

    for (i = 1; i <= n; i++) {
        resultado = resultado * i;
    }

    return resultado;
}

long fatorialRecursivo(int n) {
    if (n == 0) {
        return 1;
    }

    return n * fatorialRecursivo(n - 1);
}
