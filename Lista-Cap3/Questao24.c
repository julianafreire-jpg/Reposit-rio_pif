#include <stdio.h>

int main() {
    int N, i, j;

    printf("Digite uma dimensao impar: ");
    scanf("%d", &N);

    if (N < 3 || N > 19 || N % 2 == 0) {
        printf("Valor invalido.\n");
    } else {
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                if (j == i || j == N - 1 - i) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }

            printf("\n");
        }
    }

    return 0;
}