#include <stdio.h>

int main() {
    int numInt;
    int horas, minutos, segundos;

    printf("Insira os segundos:");
    scanf("%d",&numInt);

    horas = numInt / 3600;
    minutos = (numInt % 3600) / 60;
    segundos = numInt % 60;
   
    printf("%d segundos correspondem a %d hora(s), %d minuto e %d segundos\n", numInt,horas, minutos, segundos);
    
    return 0;
}