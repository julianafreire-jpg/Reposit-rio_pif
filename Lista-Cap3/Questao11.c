#include <stdio.h>

int main() {
    int A, B, i;

    printf("Digite A: ");
    scanf("%d", &A);

    printf("Digite B: ");
    scanf("%d", &B);

    if (A <= B) {
        for (i = A; i <= B; i++) {
            printf("%d ", i);
        }
    } else {
        for (i = A; i >= B; i--) {
            printf("%d ", i);
        }
    }

    return 0;
}