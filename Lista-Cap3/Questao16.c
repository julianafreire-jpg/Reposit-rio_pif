#include <stdio.h>

int main() {
    int senha, tentativas = 0;
    int senhaCorreta = 2026;

    while (tentativas < 3) {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        tentativas++;

        if (senha == senhaCorreta) {
            printf("Acesso Concedido!\n");
            printf("Tentativas utilizadas: %d\n", tentativas);
            return 0;
        }
    }

    printf("Conta Bloqueada por Segurança!\n");

    return 0;
}