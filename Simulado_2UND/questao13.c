#include <stdio.h>

int main() {
    int vendas[4][3];
    int totalProduto[3] = {0, 0, 0};
    int i, j, totalLoja, produtoMaisVendido = 0;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("Loja %d - quantidade vendida do produto %d: ", i + 1, j + 1);
            scanf("%d", &vendas[i][j]);
        }
    }

    printf("\nTotal vendido por loja:\n");

    for (i = 0; i < 4; i++) {
        totalLoja = 0;

        for (j = 0; j < 3; j++) {
            totalLoja = totalLoja + vendas[i][j];
            totalProduto[j] = totalProduto[j] + vendas[i][j];
        }

        printf("Loja %d: %d unidades\n", i + 1, totalLoja);
    }

    for (j = 1; j < 3; j++) {
        if (totalProduto[j] > totalProduto[produtoMaisVendido]) {
            produtoMaisVendido = j;
        }
    }

    printf("\nProduto mais vendido na rede: produto %d (%d unidades)\n",
           produtoMaisVendido + 1, totalProduto[produtoMaisVendido]);

    return 0;
}
