#include <stdio.h>

float celsiusParaFahrenheit(float temperatura);
float celsiusParaKelvin(float temperatura);
float fahrenheitParaCelsius(float temperatura);
float kelvinParaCelsius(float temperatura);

int main() {
    int opcao;
    float temperatura, resultado;

    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");

    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    switch (opcao) {
        case 1:
            resultado = celsiusParaFahrenheit(temperatura);
            printf("Resultado: %.2f Fahrenheit\n", resultado);
            break;

        case 2:
            resultado = celsiusParaKelvin(temperatura);
            printf("Resultado: %.2f Kelvin\n", resultado);
            break;

        case 3:
            resultado = fahrenheitParaCelsius(temperatura);
            printf("Resultado: %.2f Celsius\n", resultado);
            break;

        case 4:
            resultado = kelvinParaCelsius(temperatura);
            printf("Resultado: %.2f Celsius\n", resultado);
            break;

        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}

float celsiusParaFahrenheit(float temperatura) {
    return (temperatura * 9 / 5) + 32;
}

float celsiusParaKelvin(float temperatura) {
    return temperatura + 273.15;
}

float fahrenheitParaCelsius(float temperatura) {
    return (temperatura - 32) * 5 / 9;
}

float kelvinParaCelsius(float temperatura) {
    return temperatura - 273.15;
}
