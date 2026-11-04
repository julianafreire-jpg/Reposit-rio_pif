#include <stdio.h>

int main() {
    int horasPermanecidas;
    float tarifaCobrada;
    
    printf("Digite o numero inteiro de horas no estacionamento: ");
    scanf("%d", &horasPermanecidas);
    
    if (horasPermanecidas <= 2) {
        tarifaCobrada = horasPermanecidas * 2.00;
    } else if (horasPermanecidas <= 4) {
        // Cobra 2 reais por cada uma das 2 primeiras horas, mais 2,50 por cada nova hora
        tarifaCobrada = (2 * 2.00) + ((horasPermanecidas - 2) * 2.50);
    } else {
        // Cobra as 2 primeiras horas a 2 reais, as proximas 2 a 2,50, e o restante a 3,00
        tarifaCobrada = (2 * 2.00) + (2 * 2.50) + ((horasPermanecidas - 4) * 3.00);
    }
    
    printf("Tempo total: %d hora(s)\n", horasPermanecidas);
    printf("Valor a pagar: R$ %.2f\n", tarifaCobrada);
    
    return 0;
}
