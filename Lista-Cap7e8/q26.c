#include <stdio.h>

#define QTD 6

typedef enum { PENDENTE, PAGO, ENTREGUE } Status;

typedef struct {
    int codigo;
    float valor;
    Status status;
} Pedido;

int main() {
    Pedido pedidos[QTD];
    char nomes[3][10] = {"Pendente", "Pago", "Entregue"};
    int quantidade[3] = {0, 0, 0};
    float total[3] = {0, 0, 0};
    int i, st, codigo, novoStatus, encontrado = 0;

    for (i = 0; i < QTD; i++) {
        printf("\nPedido %d\n", i + 1);

        printf("Codigo: ");
        scanf("%d", &pedidos[i].codigo);

        printf("Valor: ");
        scanf("%f", &pedidos[i].valor);

        do {
            printf("Status (0 = Pendente, 1 = Pago, 2 = Entregue): ");
            scanf("%d", &st);
        } while (st < PENDENTE || st > ENTREGUE);

        pedidos[i].status = (Status) st;
    }

    printf("\nCodigo do pedido para mudar o status: ");
    scanf("%d", &codigo);

    for (i = 0; i < QTD; i++) {
        if (pedidos[i].codigo == codigo) {
            do {
                printf("Novo status (0 = Pendente, 1 = Pago, 2 = Entregue): ");
                scanf("%d", &novoStatus);
            } while (novoStatus < PENDENTE || novoStatus > ENTREGUE);

            pedidos[i].status = (Status) novoStatus;
            encontrado = 1;
            break;
        }
    }

    if (encontrado == 0) {
        printf("Pedido %d nao encontrado.\n", codigo);
    }

    for (i = 0; i < QTD; i++) {
        quantidade[pedidos[i].status]++;
        total[pedidos[i].status] = total[pedidos[i].status] + pedidos[i].valor;
    }

    printf("\nResumo por status:\n");
    for (i = PENDENTE; i <= ENTREGUE; i++) {
        printf("%-9s: %d pedido(s), total R$ %.2f\n", nomes[i], quantidade[i], total[i]);
    }

    return 0;
}
