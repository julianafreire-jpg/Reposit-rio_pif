#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[200];
    char c;
    int i, tamanho;
    int vogais = 0, consoantes = 0, espacos = 0;

    printf("Digite uma frase: ");
    gets(frase); // gets() foi pedido no enunciado (em C moderno, prefira fgets())

    tamanho = strlen(frase);

    for (i = 0; i < tamanho; i++) {
        c = tolower(frase[i]);

        if (c == ' ') {
            espacos++;
        } else if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vogais++;
        } else if (c >= 'a' && c <= 'z') {
            consoantes++;
        }
    }

    printf("Vogais: %d\n", vogais);
    printf("Consoantes: %d\n", consoantes);
    printf("Espacos: %d\n", espacos);

    return 0;
}
