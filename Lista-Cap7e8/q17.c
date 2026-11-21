#include <stdio.h>
#include <string.h>

int main() {
    char nome[30], sobrenome[30], completo[65];

    printf("Primeiro nome: ");
    scanf(" %29[^\n]", nome);

    printf("Sobrenome: ");
    scanf(" %29[^\n]", sobrenome);

    strcpy(completo, sobrenome);
    strcat(completo, ", ");
    strcat(completo, nome);

    puts(completo);
    printf("Quantidade de caracteres: %d\n", (int) strlen(completo));

    return 0;
}
