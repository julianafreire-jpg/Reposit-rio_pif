#include <stdio.h>

typedef struct {
    int hora;
    int minuto;
} Horario;

int duracao(Horario ini, Horario fim);

int main() {
    Horario inicio, fim;
    int minutos;

    printf("Horario de inicio (hora minuto): ");
    scanf("%d %d", &inicio.hora, &inicio.minuto);

    printf("Horario de fim (hora minuto): ");
    scanf("%d %d", &fim.hora, &fim.minuto);

    minutos = duracao(inicio, fim);

    if (minutos < 0) {
        printf("O horario de fim deve ser depois do horario de inicio.\n");
    } else {
        printf("Duracao: %d minutos\n", minutos);
        printf("Duracao: %dh%02dmin\n", minutos / 60, minutos % 60);
    }

    return 0;
}

int duracao(Horario ini, Horario fim) {
    int minutosInicio = ini.hora * 60 + ini.minuto;
    int minutosFim = fim.hora * 60 + fim.minuto;

    return minutosFim - minutosInicio;
}
