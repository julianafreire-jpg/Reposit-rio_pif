#include <stdio.h>

#define DOBRO(x) x * 2

int dobro(int x);

int main() {
    int resultadoMacro, resultadoFuncao;

    resultadoMacro = DOBRO(2 + 3);
    resultadoFuncao = dobro(2 + 3);

    printf("Resultado da macro: %d\n", resultadoMacro);
    printf("Resultado da funcao: %d\n", resultadoFuncao);

    // A macro sem parenteses resulta em 2 + 3 * 2 = 8.
    // A funcao recebe o resultado de 2 + 3 e retorna 5 * 2 = 10.

    printf("\nMacro corrigida: %d\n", ((2 + 3) * 2));

    return 0;
}

int dobro(int x) {
    return x * 2;
}
