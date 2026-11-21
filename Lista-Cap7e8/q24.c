#include <stdio.h>

#define QTD 5

typedef struct {
    char alimento[30];
    float peso;
    int calorias;
} Dieta;

int main() {
    Dieta refeicao[QTD];
    int i, total = 0, maisCalorico = 0;

    for (i = 0; i < QTD; i++) {
        printf("\nAlimento %d\n", i + 1);

        printf("Nome: ");
        scanf(" %29[^\n]", refeicao[i].alimento);

        printf("Peso da porcao (g): ");
        scanf("%f", &refeicao[i].peso);

        printf("Calorias: ");
        scanf("%d", &refeicao[i].calorias);
    }

    printf("\n%-20s %10s %10s\n", "Alimento", "Peso (g)", "Calorias");

    for (i = 0; i < QTD; i++) {
        printf("%-20s %10.1f %10d\n",
               refeicao[i].alimento, refeicao[i].peso, refeicao[i].calorias);

        total = total + refeicao[i].calorias;

        if (refeicao[i].calorias > refeicao[maisCalorico].calorias) {
            maisCalorico = i;
        }
    }

    printf("\nTotal de calorias da refeicao: %d\n", total);
    printf("Alimento mais calorico: %s (%d calorias)\n",
           refeicao[maisCalorico].alimento, refeicao[maisCalorico].calorias);

    return 0;
}
