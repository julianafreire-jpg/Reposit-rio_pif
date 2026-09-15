#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("Decimal: %d\nHexadecimal: %x\nOctal: %o\nCaractere ASCII: %c\n",
           numero, numero, numero, numero);

    return 0;
}