#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char secreta, tentativa;
    int tentativas = 0;

    srand(time(NULL));

    secreta = rand() % 26 + 'a';

    do {
        printf("Digite uma letra de a a z: ");
        scanf(" %c", &tentativa);

        tentativas++;

        if (tentativa < secreta) {
            printf("A letra secreta vem depois.\n");
        } else if (tentativa > secreta) {
            printf("A letra secreta vem antes.\n");
        }

    } while (tentativa != secreta);

    printf("Parabens! Voce acertou!\n");
    printf("Tentativas: %d\n", tentativas);

    return 0;
}