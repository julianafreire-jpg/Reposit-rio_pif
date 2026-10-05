#include <stdio.h>

int main() {
    int totalSegundos;
    int horas;
    int minutos;
    int segundosRestantes;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &totalSegundos);

    horas = totalSegundos / 3600;
    minutos = (totalSegundos % 3600) / 60;
    segundosRestantes = totalSegundos % 60;

    printf("%d hora(s), %d minuto(s) e %d segundo(s)\n",
           horas, minutos, segundosRestantes);

    return 0;
}