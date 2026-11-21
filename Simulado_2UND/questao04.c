#include <stdio.h>

int main() {
    int idade;
    float renda, valor;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite a renda mensal: ");
    scanf("%f", &renda);

    printf("Digite o valor solicitado: ");
    scanf("%f", &valor);

    if (idade >= 18 && idade <= 70 && renda >= 2000.0) {
        if (valor <= renda * 10) {
            printf("Emprestimo aprovado!\n");
        } else {
            printf("Valor acima do limite permitido.\n");
        }
    } else {
        printf("Emprestimo negado.\n");
    }

    return 0;
}
