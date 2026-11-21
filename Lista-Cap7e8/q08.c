#include <stdio.h>

int main() {
    int original[3][4], transposta[4][3];
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &original[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            transposta[j][i] = original[i][j];
        }
    }

    printf("\nMatriz original (3x4):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%5d", original[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz transposta (4x3):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%5d", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
