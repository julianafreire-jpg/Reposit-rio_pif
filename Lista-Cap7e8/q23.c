#include <stdio.h>

#define TARIFA_HORA 5.0

typedef struct {
    int hora;
    int minuto;
} Hora;

typedef struct {
    char placa[10];
    Hora entrada;
    Hora saida;
} Veiculo;

int tempoPermanencia(Veiculo v);

int main() {
    Veiculo v;
    int minutos, horasCobradas;

    printf("Placa: ");
    scanf("%9s", v.placa);

    printf("Entrada (hora minuto): ");
    scanf("%d %d", &v.entrada.hora, &v.entrada.minuto);

    printf("Saida (hora minuto): ");
    scanf("%d %d", &v.saida.hora, &v.saida.minuto);

    minutos = tempoPermanencia(v);

    if (minutos < 0) {
        printf("O horario de saida deve ser depois do horario de entrada.\n");
        return 0;
    }

    // Cada fracao de hora e cobrada como hora cheia.
    horasCobradas = minutos / 60;
    if (minutos % 60 != 0) {
        horasCobradas++;
    }

    printf("\nVeiculo %s\n", v.placa);
    printf("Permanencia: %dh%02dmin\n", minutos / 60, minutos % 60);
    printf("Horas cobradas: %d\n", horasCobradas);
    printf("Valor a pagar: R$ %.2f\n", horasCobradas * TARIFA_HORA);

    return 0;
}

int tempoPermanencia(Veiculo v) {
    int minEntrada = v.entrada.hora * 60 + v.entrada.minuto;
    int minSaida = v.saida.hora * 60 + v.saida.minuto;

    return minSaida - minEntrada;
}
