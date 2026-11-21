#include <stdio.h>

typedef struct {
    char nome[50];
    int matricula;
    float nota1;
    float nota2;
} Aluno;

int main() {
    Aluno a;
    float media;

    printf("Nome: ");
    scanf(" %49[^\n]", a.nome);

    printf("Matricula: ");
    scanf("%d", &a.matricula);

    printf("Nota 1: ");
    scanf("%f", &a.nota1);

    printf("Nota 2: ");
    scanf("%f", &a.nota2);

    media = (a.nota1 + a.nota2) / 2;

    printf("\nAluno: %s (matricula %d)\n", a.nome, a.matricula);
    printf("Media: %.2f\n", media);

    if (media >= 7.0) {
        printf("Aprovado\n");
    } else if (media >= 4.0) {
        printf("Final\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}
