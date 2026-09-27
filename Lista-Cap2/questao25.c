#include <stdio.h>

int main() {
    float salario_base, gratificacao, imposto, salario_liquido;

    printf("Digite o salario-base: ");
    scanf("%f", &salario_base);

    gratificacao = salario_base * 0.05;
    imposto = salario_base * 0.07;

    salario_liquido = salario_base + gratificacao - imposto;

    printf("Salario liquido: R$ %.2f\n", salario_liquido);

    return 0;
}