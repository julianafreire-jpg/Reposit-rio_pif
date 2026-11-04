#include <stdio.h>

int main() {
    int valor_a, valor_b, valor_c, variavel_temporaria;
    
    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &valor_a, &valor_b, &valor_c);
    
    // Usando trocas sequenciais (método de bolha simplificado com ifs)
    if (valor_a > valor_b) {
        variavel_temporaria = valor_a;
        valor_a = valor_b;
        valor_b = variavel_temporaria;
    }
    if (valor_b > valor_c) {
        variavel_temporaria = valor_b;
        valor_b = valor_c;
        valor_c = variavel_temporaria;
    }
    // Uma última verificação para garantir que o menor foi pro início
    if (valor_a > valor_b) {
        variavel_temporaria = valor_a;
        valor_a = valor_b;
        valor_b = variavel_temporaria;
    }
    
    printf("Ordem crescente: %d, %d, %d\n", valor_a, valor_b, valor_c);
    
    return 0;
}