#include <stdio.h>

float calculaSubtotal(float preco, int quantidade);
float aplicaDesconto(float valor, int opcaoPagamento);
float calculaTroco(float total, float pago);

int main() {
    float preco, subtotal, total, valorPago, troco;
    int quantidade, opcaoPagamento;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    subtotal = calculaSubtotal(preco, quantidade);

    printf("\nForma de pagamento:\n");
    printf("1 - A vista\n");
    printf("2 - Outra forma de pagamento\n");
    printf("Escolha: ");
    scanf("%d", &opcaoPagamento);

    total = aplicaDesconto(subtotal, opcaoPagamento);

    printf("\nSubtotal: R$ %.2f\n", subtotal);
    printf("Total a pagar: R$ %.2f\n", total);

    printf("Valor pago: R$ ");
    scanf("%f", &valorPago);

    if (valorPago >= total) {
        troco = calculaTroco(total, valorPago);
        printf("Troco: R$ %.2f\n", troco);
    } else {
        printf("Valor insuficiente para o pagamento.\n");
    }

    return 0;
}

float calculaSubtotal(float preco, int quantidade) {
    return preco * quantidade;
}

float aplicaDesconto(float valor, int opcaoPagamento) {
    if (opcaoPagamento == 1) {
        return valor * 0.90;
    }

    return valor;
}

float calculaTroco(float total, float pago) {
    return pago - total;
}
