#include <stdio.h>

int main() {
    int n1, n2;
    float divisao;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &n2);

    printf("Soma: %d\n", n1 + n2);
    printf("Subtracao: %d\n", n1 - n2);
    printf("Multiplicacao: %d\n", n1 * n2);

    divisao = (float)n1 / n2;
    printf("Divisao: %.2f\n", divisao);

    // Para evitar matematicamente a divisao por zero, deve-se verificar se n2 e diferente de zero.

    return 0;
}