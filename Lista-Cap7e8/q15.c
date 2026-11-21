#include <stdio.h>

int meuStrlen(char s[]);
void inverte(char s[]);
void removeChar(char s[], int pos);

int main() {
    char texto[100];
    int pos;

    printf("Digite uma string: ");
    scanf(" %99[^\n]", texto);

    printf("Tamanho: %d\n", meuStrlen(texto));

    inverte(texto);
    printf("Invertida: %s\n", texto);

    inverte(texto); // volta ao original para testar a remocao
    printf("\nString original: %s\n", texto);
    printf("Posicao do caractere a remover (0 a %d): ", meuStrlen(texto) - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= meuStrlen(texto)) {
        printf("Posicao invalida.\n");
    } else {
        removeChar(texto, pos);
        printf("Apos remover: %s\n", texto);
    }

    return 0;
}

int meuStrlen(char s[]) {
    int i = 0;

    while (s[i] != '\0') {
        i++;
    }

    return i;
}

void inverte(char s[]) {
    int inicio = 0;
    int fim = meuStrlen(s) - 1;
    char aux;

    while (inicio < fim) {
        aux = s[inicio];
        s[inicio] = s[fim];
        s[fim] = aux;
        inicio++;
        fim--;
    }
}

void removeChar(char s[], int pos) {
    int i;

    // Desloca os caracteres seguintes para a esquerda, incluindo o '\0'.
    for (i = pos; s[i] != '\0'; i++) {
        s[i] = s[i + 1];
    }
}
