#include <stdio.h>

int main() {
    int numInt1;
    int numInt2;
    int numInt3;

    int media;

    printf("Insira o primeiro valor: ");
    scanf("%d", &numInt1);

    printf("Insira o segundo valor: ");
    scanf("%d", &numInt2);

    printf("Insira o terceiro valor: ");
    scanf("%d", &numInt3);

    media = (numInt1 + numInt2 + numInt3) / 3;

    printf("O resultado é %d\n", media);

    return 0;
}