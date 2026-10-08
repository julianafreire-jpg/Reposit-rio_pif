#include <stdio.h>

int main() {
    int NUM, i;
    int encontrou = 0;

    printf("Digite um numero limite: ");
    scanf("%d", &NUM);

    for (i = 1; i <= NUM; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            encontrou = 1;
        }
    }

    if (encontrou == 0) {
        printf("Nenhum numero encontrado.");
    }

    return 0;
}