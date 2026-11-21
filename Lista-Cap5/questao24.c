#include <stdio.h>

int somaAteN(int n);

int main() {
    int numero, resultado;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    resultado = somaAteN(numero);

    printf("Soma total: %d\n", resultado);

    return 0;
}

int somaAteN(int n) {
    int soma = 0;
    int i;

    for (i = 1; i <= n; i++) {
        soma = soma + i;

#ifdef DEBUG
        printf("Soma parcial: %d\n", soma);
#endif
    }

    return soma;
}

/*
Sem DEBUG:
O programa mostra somente o resultado final.

Com DEBUG:
O programa mostra a soma parcial a cada repeticao do laco.

Para compilar com depuracao, define-se DEBUG antes da compilacao, por exemplo:
gcc questao24.c -o questao24
gcc -DDEBUG questao24.c -o questao24_debug
*/
