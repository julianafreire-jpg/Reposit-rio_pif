#include <stdio.h>

int main() {
    int diasTrabalhados;
    double valorDiaria = 45.00;
    double salarioBruto;
    double gratificacao;
    double impostoRenda;
    double salarioLiquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &diasTrabalhados);

    salarioBruto = diasTrabalhados * valorDiaria;
    gratificacao = salarioBruto * 0.05;
    impostoRenda = salarioBruto * 0.08;
    salarioLiquido = salarioBruto + gratificacao - impostoRenda;

    printf("\n--- HOLERITE ---\n");
    printf("Salario bruto: R$ %.2lf\n", salarioBruto);
    printf("Gratificacao (5%%): R$ %.2lf\n", gratificacao);
    printf("Imposto de renda (8%%): R$ %.2lf\n", impostoRenda);
    printf("Salario liquido: R$ %.2lf\n", salarioLiquido);

    return 0;
}