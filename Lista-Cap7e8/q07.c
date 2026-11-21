#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int m[4][4];
    int i, j;
    int diagPrincipal = 0, diagSecundaria = 0, acimaPrincipal = 0;

    srand(time(NULL));

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            m[i][j] = rand() % 20 + 1;
        }
    }

    printf("Matriz:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%4d", m[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (i == j) {
                diagPrincipal = diagPrincipal + m[i][j];
            }
            if (i + j == 3) {
                diagSecundaria = diagSecundaria + m[i][j];
            }
            if (j > i) {
                acimaPrincipal = acimaPrincipal + m[i][j];
            }
        }
    }

    printf("\nSoma da diagonal principal: %d\n", diagPrincipal);
    printf("Soma da diagonal secundaria: %d\n", diagSecundaria);
    printf("Soma acima da diagonal principal: %d\n", acimaPrincipal);

    return 0;
}
