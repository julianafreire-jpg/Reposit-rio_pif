#include <stdio.h>

int mdc(int a, int b);
void simplifica(int num, int den);

int main() {
    int numerador, denominador;

    printf("Digite o numerador: ");
    scanf("%d", &numerador);

    printf("Digite o denominador: ");
    scanf("%d", &denominador);

    if (numerador <= 0 || denominador <= 0) {
        printf("Digite valores positivos.\n");
    } else {
        simplifica(numerador, denominador);
    }

    return 0;
}

int mdc(int a, int b) {
    if (b == 0) {
        return a;
    }

    return mdc(b, a % b);
}

void simplifica(int num, int den) {
    int divisor = mdc(num, den);

    printf("Fracao simplificada: %d/%d\n",
           num / divisor, den / divisor);
}
