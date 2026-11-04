#include <stdio.h>
#include <math.h>

int main() {
    float numero_digitado, resultado_calculo;
    
    printf("Digite um número real: ");
    scanf("%f", &numero_digitado);
    
    if (numero_digitado >= 0) {
        resultado_calculo = sqrt(numero_digitado);
        printf("A raiz quadrada é: %.2f\n", resultado_calculo);
    } else {
        resultado_calculo = numero_digitado * numero_digitado;
        printf("O quadrado do número é: %.2f\n", resultado_calculo);
    }
    
    return 0;
}