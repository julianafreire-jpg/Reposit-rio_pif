#include <stdio.h>

int main() {
    float valorTotalCompra, valorFinalCobrado, comissaoVendedor;
    int formaPagamento; // 1 = A vista, 2 = Parcelado
    
    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valorTotalCompra);
    printf("Pagamento (1 - A vista, 2 - Parcelado 3x): ");
    scanf("%d", &formaPagamento);
    
    if (formaPagamento == 1) {
        valorFinalCobrado = valorTotalCompra * 0.90; // 10% desconto
        comissaoVendedor = valorFinalCobrado * 0.05;
        printf("Total com desconto: R$ %.2f\n", valorFinalCobrado);
        printf("Comissao do vendedor: R$ %.2f\n", comissaoVendedor);
    } else if (formaPagamento == 2) {
        valorFinalCobrado = valorTotalCompra / 3.0;
        comissaoVendedor = valorTotalCompra * 0.05;
        printf("Valor da parcela (3x): R$ %.2f\n", valorFinalCobrado);
        printf("Comissao do vendedor: R$ %.2f\n", comissaoVendedor);
    } else {
        printf("Opcao de pagamento invalida.\n");
    }
    
    return 0;
}