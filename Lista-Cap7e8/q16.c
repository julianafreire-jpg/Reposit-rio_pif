#include <stdio.h>
#include <string.h>

#define SENHA "c@esar2026"
#define MAX_TENTATIVAS 3

int main() {
    char digitada[50];
    int tentativas = 0, liberado = 0;

    while (tentativas < MAX_TENTATIVAS) {
        printf("Digite a senha: ");
        scanf("%49s", digitada);

        // Senha curta demais nao conta como tentativa.
        if (strlen(digitada) < 6) {
            printf("A senha deve ter pelo menos 6 caracteres.\n");
            continue;
        }

        tentativas++;

        if (strcmp(digitada, SENHA) == 0) {
            liberado = 1;
            break;
        }

        printf("Senha incorreta. Tentativas restantes: %d\n", MAX_TENTATIVAS - tentativas);
    }

    if (liberado == 1) {
        printf("Acesso liberado\n");
    } else {
        printf("Acesso bloqueado\n");
    }

    return 0;
}
