// a) Porque não são padrões e podem não funcionar em diferentes compiladores.

// b) Getchar e putchar. A primeira armazena e lê a entrada de dados e, a segunda mostra ao usuário.

// c)

#include <stdio.h>

int main(){
    char nome [7];
    printf("Digite seu nome:");
    scanf("%s", &nome);

    printf("Seja bem- vinda(o), %s\n", nome);
    return 0;
}