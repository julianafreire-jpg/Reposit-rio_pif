#include <stdio.h>

int main() {
    int numero_analisado;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero_analisado);
    
    // Verificação de paridade
    if (numero_analisado % 2 == 0) {
        printf("O número é PAR e ");
    } else {
        printf("O número é ÍMPAR e ");
    }
    
    // Verificação de sinal
    if (numero_analisado > 0) {
        printf("POSITIVO.\n");
    } else if (numero_analisado < 0) {
        printf("NEGATIVO.\n");
    } else {
        printf("ZERO.\n");
    }
    
    return 0;
}