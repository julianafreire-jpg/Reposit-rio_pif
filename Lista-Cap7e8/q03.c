#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LANCAMENTOS 30
#define FACES 6

int main() {
    int dado[LANCAMENTOS];
    int frequencia[FACES] = {0};
    int i;

    srand(time(NULL));

    for (i = 0; i < LANCAMENTOS; i++) {
        dado[i] = rand() % 6 + 1;
        frequencia[dado[i] - 1]++;
    }

    printf("Lancamentos: ");
    for (i = 0; i < LANCAMENTOS; i++) {
        printf("%d ", dado[i]);
    }
    printf("\n\n");

    for (i = 0; i < FACES; i++) {
        printf("Face %d: %d vezes\n", i + 1, frequencia[i]);
    }

    return 0;
}
