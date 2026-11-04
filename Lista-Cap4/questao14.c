#include <stdio.h>

int main() {
    float nota_final;
    int quantidade_faltas;
    char conceito_atribuido;
    
    printf("Digite a nota e o número de faltas: ");
    scanf("%f %d", &nota_final, &quantidade_faltas);
    
    if (nota_final >= 9.0) {
        if (quantidade_faltas <= 20) conceito_atribuido = 'A';
        else conceito_atribuido = 'B';
    } else if (nota_final >= 7.5) {
        if (quantidade_faltas <= 20) conceito_atribuido = 'B';
        else conceito_atribuido = 'C';
    } else if (nota_final >= 5.0) {
        if (quantidade_faltas <= 20) conceito_atribuido = 'C';
        else conceito_atribuido = 'D';
    } else if (nota_final >= 4.0) {
        if (quantidade_faltas <= 20) conceito_atribuido = 'D';
        else conceito_atribuido = 'E';
    } else {
        conceito_atribuido = 'E';
    }
    
    printf("Conceito final: %c\n", conceito_atribuido);
    
    return 0;
}