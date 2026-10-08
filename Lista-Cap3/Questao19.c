#include <stdio.h>

int main() {
    int N, i;
    int a = 1, b = 1, proximo;

    printf("Digite o termo desejado: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Numero invalido.\n");
    } else {
        for (i = 1; i <= N; i++) {
            if (i == 1 || i == 2) {
                printf("%d ", 1);
            } else {
                proximo = a + b;
                printf("%d ", proximo);
                a = b;
                b = proximo;
            }
        }

        printf("\n");
    }

    return 0;
}