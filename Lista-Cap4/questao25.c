#include <stdio.h>

int main() {
    int valorPagar, valorEntregue, trocoAtual;
    int qtdNotas100, qtdNotas50, qtdNotas20, qtdNotas10, qtdNotas5, qtdNotas2;
    
    printf("Digite o valor a pagar e o valor entregue: ");
    scanf("%d %d", &valorPagar, &valorEntregue);
    
    if (valorEntregue < valorPagar) {
        printf("Erro: Valor insuficiente para pagamento.\n");
    } else {
        trocoAtual = valorEntregue - valorPagar;
        printf("Troco devido: R$ %d\n", trocoAtual);
        
        qtdNotas100 = trocoAtual / 100;
        trocoAtual = trocoAtual % 100;
        
        qtdNotas50 = trocoAtual / 50;
        trocoAtual = trocoAtual % 50;
        
        qtdNotas20 = trocoAtual / 20;
        trocoAtual = trocoAtual % 20;
        
        qtdNotas10 = trocoAtual / 10;
        trocoAtual = trocoAtual % 10;
        
        qtdNotas5 = trocoAtual / 5;
        trocoAtual = trocoAtual % 5;
        
        qtdNotas2 = trocoAtual / 2;
        trocoAtual = trocoAtual % 2;
        
        printf("Notas de 100: %d\n", qtdNotas100);
        printf("Notas de 50: %d\n", qtdNotas50);
        printf("Notas de 20: %d\n", qtdNotas20);
        printf("Notas de 10: %d\n", qtdNotas10);
        printf("Notas de 5: %d\n", qtdNotas5);
        printf("Notas de 2: %d\n", qtdNotas2);
        
        if (trocoAtual > 0) {
            printf("Aviso: Falta devolver R$ %d em moedas (1 real).\n", trocoAtual);
        }
    }
    
    return 0;
}