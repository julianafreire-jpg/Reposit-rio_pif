#include <stdio.h>

float calculaIMC(float peso, float altura);
void classificaIMC(float imc);

int main() {
    float peso, altura, imc;

    printf("Digite o peso (kg): ");
    scanf("%f", &peso);

    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    if (peso <= 0 || altura <= 0) {
        printf("Valores invalidos.\n");
        return 0;
    }

    imc = calculaIMC(peso, altura);

    printf("IMC: %.2f\n", imc);

    classificaIMC(imc);

    return 0;
}

float calculaIMC(float peso, float altura) {
    return peso / (altura * altura);
}

void classificaIMC(float imc) {
    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc < 25.0) {
        printf("Peso normal\n");
    } else if (imc < 30.0) {
        printf("Sobrepeso\n");
    } else {
        printf("Obesidade\n");
    }
}
