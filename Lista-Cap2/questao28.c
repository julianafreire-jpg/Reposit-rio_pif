#include <stdio.h>

int main() {
    int horas_normais, horas_extras;
    float salario_bruto, imposto;

    printf("Digite o total de horas normais trabalhadas no ano: ");
    scanf("%d", &horas_normais);

    printf("Digite o total de horas extras trabalhadas no ano: ");
    scanf("%d", &horas_extras);

    salario_bruto = horas_normais * 10.0 + horas_extras * 15.0;

    imposto = salario_bruto > 12000
              ? (salario_bruto - 12000) * 0.10
              : 0;

    printf("Salario anual bruto: R$ %.2f\n", salario_bruto);
    printf("Imposto: R$ %.2f\n", imposto);

    return 0;
}