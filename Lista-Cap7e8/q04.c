#include <stdio.h>

int main() {
    int dmes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int dia, mes, i, passados = 0, faltam;

    printf("Digite o dia: ");
    scanf("%d", &dia);

    printf("Digite o mes: ");
    scanf("%d", &mes);

    if (mes < 1 || mes > 12 || dia < 1 || dia > dmes[mes - 1]) {
        printf("Data invalida.\n");
        return 0;
    }

    // Soma os dias dos meses completos antes do mes informado.
    for (i = 0; i < mes - 1; i++) {
        passados = passados + dmes[i];
    }

    // Soma os dias do mes atual (a data informada conta como dia corrido).
    passados = passados + dia;
    faltam = 365 - passados;

    printf("Dias corridos desde 1 de janeiro: %d\n", passados);
    printf("Dias que faltam para o fim do ano: %d\n", faltam);

    return 0;
}
