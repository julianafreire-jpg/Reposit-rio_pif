#include <stdio.h>

int main() {
    int idade, dia;
    float valor = 40.0;

    printf("Digite a idade do cliente: ");
    scanf("%d", &idade);

    printf("Digite o dia da semana (1 = Domingo, ..., 7 = Sabado): ");
    scanf("%d", &dia);

    if (dia < 1 || dia > 7) {
        printf("Dia da semana invalido.\n");
        return 0;
    }

    // O desconto nao e acumulativo: basta uma das condicoes para pagar metade.
    if (idade < 12 || idade > 60 || dia == 4) {
        valor = valor / 2;
    }

    printf("Valor do ingresso: R$ %.2f\n", valor);

    return 0;
}
