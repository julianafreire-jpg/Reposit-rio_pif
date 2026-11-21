#include <stdio.h>

int main() {
    char mensagem[100];
    int k, i;

    printf("Digite a mensagem em letras maiusculas: ");
    gets(mensagem); // gets() foi pedido no enunciado (em C moderno, prefira fgets())

    printf("Digite o deslocamento k: ");
    scanf("%d", &k);

    // Garante que k fique entre 0 e 25, mesmo se for negativo ou maior que 26.
    k = ((k % 26) + 26) % 26;

    for (i = 0; mensagem[i] != '\0'; i++) {
        if (mensagem[i] >= 'A' && mensagem[i] <= 'Z') {
            mensagem[i] = 'A' + (mensagem[i] - 'A' + k) % 26;
        }
    }

    printf("Mensagem criptografada: ");
    puts(mensagem);

    return 0;
}
