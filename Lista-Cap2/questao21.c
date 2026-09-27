#include <stdio.h>

int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    // O numero inteiro representa o codigo ASCII correspondente ao caractere.
    printf("Caractere: %c\n", caractere);
    printf("Codigo ASCII: %d\n", caractere);

    return 0;
}