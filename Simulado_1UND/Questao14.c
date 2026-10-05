#include <stdio.h>

int main() {
    int senha;
    int senhaSecreta = 2026;
    int tentativas = 0;
    int limiteTentativas = 3;
    int acessoConcedido = 0;

    while (tentativas < limiteTentativas && acessoConcedido == 0) {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        tentativas++;

        if (senha == senhaSecreta) {
            printf("Acesso Concedido!\n");
            acessoConcedido = 1;
        } else {
            printf("Senha incorreta!\n");
        }
    }

    if (acessoConcedido == 0) {
        printf("Conta Bloqueada por Seguranca!\n");
    }

    return 0;
}