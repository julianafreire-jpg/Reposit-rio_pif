#include <stdio.h>

int main() {
    int numero;
    long long int fatorial = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Numero invalido! O fatorial nao existe para numeros negativos.\n");
    } else {
        for (int contador = 1; contador <= numero; contador++) {
            fatorial = fatorial * contador;
        }

        printf("%d! = %lld\n", numero, fatorial);
    }

    return 0;
}