#include <stdio.h>
#include <string.h>

int ehPalindromo(char s[]);

int main() {
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%99s", palavra);

    if (ehPalindromo(palavra) == 1) {
        printf("\"%s\" e um palindromo.\n", palavra);
    } else {
        printf("\"%s\" nao e um palindromo.\n", palavra);
    }

    return 0;
}

int ehPalindromo(char s[]) {
    int inicio = 0;
    int fim = strlen(s) - 1;

    while (inicio < fim) {
        if (s[inicio] != s[fim]) {
            return 0;
        }
        inicio++;
        fim--;
    }

    return 1;
}
