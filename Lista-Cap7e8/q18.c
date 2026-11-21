#include <stdio.h>
#include <string.h>

int main() {
    char n1[30], n2[30], n3[30], aux[30];

    printf("Primeiro nome: ");
    scanf(" %29[^\n]", n1);

    printf("Segundo nome: ");
    scanf(" %29[^\n]", n2);

    printf("Terceiro nome: ");
    scanf(" %29[^\n]", n3);

    if (strcmp(n1, n2) > 0) {
        strcpy(aux, n1);
        strcpy(n1, n2);
        strcpy(n2, aux);
    }

    if (strcmp(n1, n3) > 0) {
        strcpy(aux, n1);
        strcpy(n1, n3);
        strcpy(n3, aux);
    }

    if (strcmp(n2, n3) > 0) {
        strcpy(aux, n2);
        strcpy(n2, n3);
        strcpy(n3, aux);
    }

    printf("\nOrdem alfabetica:\n");
    printf("%s\n%s\n%s\n", n1, n2, n3);

    return 0;
}
