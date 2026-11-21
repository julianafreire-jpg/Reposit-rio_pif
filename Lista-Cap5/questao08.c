#include <stdio.h>

float celsius(float fahr);

int main() {
    float temperaturaFahrenheit, temperaturaCelsius;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &temperaturaFahrenheit);

    temperaturaCelsius = celsius(temperaturaFahrenheit);

    printf("Temperatura em Celsius: %.2f\n", temperaturaCelsius);

    return 0;
}

float celsius(float fahr) {
    return (fahr - 32) * 5 / 9;
}
