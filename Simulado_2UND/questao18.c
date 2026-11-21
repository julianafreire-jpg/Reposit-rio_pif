#include <stdio.h>

typedef struct {
    char nome[50];
    int codigo;
    float salario;
} Funcionario;

int main() {
    Funcionario funcionarios[4];
    float soma = 0, media;
    int i, indiceMaior = 0;

    for (i = 0; i < 4; i++) {
        printf("\nFuncionario %d\n", i + 1);

        printf("Nome: ");
        scanf(" %49[^\n]", funcionarios[i].nome);

        printf("Codigo: ");
        scanf("%d", &funcionarios[i].codigo);

        printf("Salario: ");
        scanf("%f", &funcionarios[i].salario);

        soma = soma + funcionarios[i].salario;

        if (funcionarios[i].salario > funcionarios[indiceMaior].salario) {
            indiceMaior = i;
        }
    }

    media = soma / 4;

    printf("\nFuncionario com maior salario: %s (codigo %d) - R$ %.2f\n",
           funcionarios[indiceMaior].nome,
           funcionarios[indiceMaior].codigo,
           funcionarios[indiceMaior].salario);

    printf("Media salarial: R$ %.2f\n", media);

    printf("\nReajuste de 10%% para salarios abaixo da media:\n");

    for (i = 0; i < 4; i++) {
        if (funcionarios[i].salario < media) {
            printf("%s: R$ %.2f -> R$ %.2f\n",
                   funcionarios[i].nome,
                   funcionarios[i].salario,
                   funcionarios[i].salario * 1.10);
        }
    }

    return 0;
}
