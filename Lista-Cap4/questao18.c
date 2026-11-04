#include <stdio.h>

int main() {
    int opcaoMenu;
    float temperaturaEntrada, temperaturaConvertida;
    
    printf("1 - Celsius p/ Fahrenheit\n");
    printf("2 - Celsius p/ Kelvin\n");
    printf("3 - Fahrenheit p/ Celsius\n");
    printf("4 - Kelvin p/ Celsius\n");
    printf("Escolha a conversao: ");
    scanf("%d", &opcaoMenu);
    
    printf("Digite a temperatura de origem: ");
    scanf("%f", &temperaturaEntrada);
    
    switch(opcaoMenu) {
        case 1:
            temperaturaConvertida = temperaturaEntrada * 1.8 + 32;
            printf("Em Fahrenheit: %.2f\n", temperaturaConvertida);
            break;
        case 2:
            temperaturaConvertida = temperaturaEntrada + 273.15;
            printf("Em Kelvin: %.2f\n", temperaturaConvertida);
            break;
        case 3:
            temperaturaConvertida = (temperaturaEntrada - 32) / 1.8;
            printf("Em Celsius: %.2f\n", temperaturaConvertida);
            break;
        case 4:
            temperaturaConvertida = temperaturaEntrada - 273.15;
            printf("Em Celsius: %.2f\n", temperaturaConvertida);
            break;
        default:
            printf("Opcao invalida!\n");
    }
    
    return 0;
}