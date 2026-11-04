#include <stdio.h>

int main() {
    int numeroMes, anoVerificado;
    
    printf("Digite o mes (1-12) e o ano: ");
    scanf("%d %d", &numeroMes, &anoVerificado);
    
    switch (numeroMes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Possui 31 dias.\n");
            break;
        case 4: case 6: case 9: case 11:
            printf("Possui 30 dias.\n");
            break;
        case 2:
            // Verificação de ano bissexto
            if (anoVerificado % 400 == 0 || (anoVerificado % 4 == 0 && anoVerificado % 100 != 0)) {
                printf("Fevereiro: 29 dias (Ano Bissexto).\n");
            } else {
                printf("Fevereiro: 28 dias.\n");
            }
            break;
        default:
            printf("Mes invalido.\n");
    }
    
    return 0;
}