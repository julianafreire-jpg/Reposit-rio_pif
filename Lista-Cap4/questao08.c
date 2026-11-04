#include <stdio.h>

int main() {
    int ano_informado;
    
    printf("Digite o ano: ");
    scanf("%d", &ano_informado);
    
    if ((ano_informado % 400 == 0) || (ano_informado % 4 == 0 && ano_informado % 100 != 0)) {
        printf("O ano %d é BISSEXTO.\n", ano_informado);
    } else {
        printf("O ano %d NÃO é bissexto.\n", ano_informado);
    }
    
    return 0;
}