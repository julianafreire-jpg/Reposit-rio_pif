#include <stdio.h>

int soma(int a, int b);

int main() {
    int numero1, numero2, resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    resultado = soma(numero1, numero2);

    printf("Resultado: %d\n", resultado);

    return 0;
}

int soma(int a, int b) {
    return a + b;
}
