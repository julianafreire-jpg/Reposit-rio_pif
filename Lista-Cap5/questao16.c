#include <stdio.h>

int ehBissexto(int ano);

int main() {
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ehBissexto(ano) == 1) {
        printf("O ano e bissexto.\n");
    } else {
        printf("O ano nao e bissexto.\n");
    }

    return 0;
}

int ehBissexto(int ano) {
    if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
        return 1;
    }

    return 0;
}
