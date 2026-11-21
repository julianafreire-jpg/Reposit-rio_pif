#include <stdio.h>

int main() {
    int a[3][3], b[3][3], soma[3][3];
    int i, j;

    printf("Matriz A:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nMatriz B:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            soma[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\n%-16s%-16s%-16s\n", "Matriz A", "Matriz B", "A + B");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%5d", a[i][j]);
        }
        printf(" ");
        for (j = 0; j < 3; j++) {
            printf("%5d", b[i][j]);
        }
        printf(" ");
        for (j = 0; j < 3; j++) {
            printf("%5d", soma[i][j]);
        }
        printf("\n");
    }

    return 0;
}
