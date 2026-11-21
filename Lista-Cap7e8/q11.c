#include <stdio.h>

int main() {
    int ocup[3][2][4];
    int b, a, ap, totalBloco, totalGeral = 0;

    for (b = 0; b < 3; b++) {
        for (a = 0; a < 2; a++) {
            for (ap = 0; ap < 4; ap++) {
                printf("Bloco %d, andar %d, apto %d - moradores: ", b + 1, a + 1, ap + 1);
                scanf("%d", &ocup[b][a][ap]);
            }
        }
    }

    printf("\n");

    for (b = 0; b < 3; b++) {
        totalBloco = 0;

        for (a = 0; a < 2; a++) {
            for (ap = 0; ap < 4; ap++) {
                totalBloco = totalBloco + ocup[b][a][ap];
            }
        }

        printf("Total de moradores do bloco %d: %d\n", b + 1, totalBloco);
        totalGeral = totalGeral + totalBloco;
    }

    printf("Total geral do condominio: %d\n", totalGeral);

    return 0;
}
