#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define JOGOS 5

int main() {
    int jogos[JOGOS][6];
    int i, j, k, dezena, repetida;

    srand(time(NULL));

    for (i = 0; i < JOGOS; i++) {
        j = 0;
        while (j < 6) {
            dezena = rand() % 60 + 1;

            // Verifica se a dezena ja foi sorteada neste jogo.
            repetida = 0;
            for (k = 0; k < j; k++) {
                if (jogos[i][k] == dezena) {
                    repetida = 1;
                    break;
                }
            }

            if (repetida == 0) {
                jogos[i][j] = dezena;
                j++;
            }
        }
    }

    for (i = 0; i < JOGOS; i++) {
        printf("Jogo %d: ", i + 1);
        for (j = 0; j < 6; j++) {
            printf("%02d ", jogos[i][j]);
        }
        printf("\n");
    }

    return 0;
}
