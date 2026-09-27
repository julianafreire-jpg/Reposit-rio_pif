#include <stdio.h>

int main() {
    float altura_degrau, altura_total_metros, altura_total_cm;
    int degraus;

    printf("Digite a altura de cada degrau em cm: ");
    scanf("%f", &altura_degrau);

    printf("Digite a altura total desejada em metros: ");
    scanf("%f", &altura_total_metros);

    altura_total_cm = altura_total_metros * 100;

    degraus = altura_total_cm / altura_degrau;

    printf("Numero de degraus: %d\n", degraus);

    return 0;
}