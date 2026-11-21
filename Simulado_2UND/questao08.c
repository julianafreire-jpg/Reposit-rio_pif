#include <stdio.h>

int somaDigitos(int n);
long potencia(int base, int exp);

int main() {
    int numero, base, exp;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    printf("Soma dos digitos: %d\n", somaDigitos(numero));

    printf("\nDigite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente (nao negativo): ");
    scanf("%d", &exp);

    if (exp < 0) {
        printf("O expoente nao pode ser negativo.\n");
    } else {
        printf("%d elevado a %d = %ld\n", base, exp, potencia(base, exp));
    }

    return 0;
}

int somaDigitos(int n) {
    // Caso base
    if (n == 0) {
        return 0;
    }

    // Passo recursivo
    return (n % 10) + somaDigitos(n / 10);
}

long potencia(int base, int exp) {
    // Caso base
    if (exp == 0) {
        return 1;
    }

    // Passo recursivo
    return base * potencia(base, exp - 1);
}
