#include <stdio.h>

int main() {
    float valorProduto, precoFinal;
    int estadoDestino;
    
    printf("Digite o valor do produto e o estado (1=MG, 2=SP, 3=RJ, 4=MS): ");
    scanf("%f %d", &valorProduto, &estadoDestino);
    
    switch(estadoDestino) {
        case 1: precoFinal = valorProduto * 1.07; break; // MG
        case 2: precoFinal = valorProduto * 1.12; break; // SP
        case 3: precoFinal = valorProduto * 1.15; break; // RJ
        case 4: precoFinal = valorProduto * 1.08; break; // MS
        default: 
            printf("Erro: Estado invalido!\n"); 
            return 1;
    }
    
    printf("Preco final com imposto: R$ %.2f\n", precoFinal);
    return 0;
}