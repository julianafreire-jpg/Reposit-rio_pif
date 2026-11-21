#include <stdio.h>

float soma(float a, float b);
float subtrai(float a, float b);
float multiplica(float a, float b);
float divide(float a, float b);

int main() {
    int opcao;
    float numero1, numero2, resultado;

    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");

    printf("Escolha uma operacao: ");
    scanf("%d", &opcao);

    printf("Digite dois numeros: ");
    scanf("%f %f", &numero1, &numero2);

    switch (opcao) {
        case 1:
            resultado = soma(numero1, numero2);
            printf("Resultado: %.2f\n", resultado);
            break;

        case 2:
            resultado = subtrai(numero1, numero2);
            printf("Resultado: %.2f\n", resultado);
            break;

        case 3:
            resultado = multiplica(numero1, numero2);
            printf("Resultado: %.2f\n", resultado);
            break;

        case 4:
            if (numero2 == 0) {
                printf("Nao e possivel dividir por zero.\n");
            } else {
                resultado = divide(numero1, numero2);
                printf("Resultado: %.2f\n", resultado);
            }
            break;

        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}

float soma(float a, float b) {
    return a + b;
}

float subtrai(float a, float b) {
    return a - b;
}

float multiplica(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}
