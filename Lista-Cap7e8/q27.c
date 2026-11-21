#include <stdio.h>

typedef union {
    int i;
    float f;
    char c;
} Valor;

typedef enum { INTEIRO, REAL, CARACTERE } Tipo;

typedef struct {
    Tipo tipo;
    Valor valor;
} Registro;

int main() {
    Registro r[3];
    int k, opcao;

    for (k = 0; k < 3; k++) {
        printf("\nRegistro %d\n", k + 1);

        do {
            printf("Tipo (0 = Inteiro, 1 = Real, 2 = Caractere): ");
            scanf("%d", &opcao);
        } while (opcao < INTEIRO || opcao > CARACTERE);

        r[k].tipo = (Tipo) opcao;

        switch (r[k].tipo) {
            case INTEIRO:
                printf("Valor inteiro: ");
                scanf("%d", &r[k].valor.i);
                break;
            case REAL:
                printf("Valor real: ");
                scanf("%f", &r[k].valor.f);
                break;
            case CARACTERE:
                printf("Caractere: ");
                scanf(" %c", &r[k].valor.c);
                break;
        }
    }

    printf("\nRegistros:\n");
    for (k = 0; k < 3; k++) {
        switch (r[k].tipo) {
            case INTEIRO:
                printf("Registro %d (inteiro): %d\n", k + 1, r[k].valor.i);
                break;
            case REAL:
                printf("Registro %d (real): %.2f\n", k + 1, r[k].valor.f);
                break;
            case CARACTERE:
                printf("Registro %d (caractere): %c\n", k + 1, r[k].valor.c);
                break;
        }
    }

    printf("\nsizeof(Valor) = %d bytes\n", (int) sizeof(Valor));

    /*
    Em uma union, todos os membros compartilham a mesma area de memoria,
    entao o tamanho da union e o tamanho do seu maior membro. Aqui,
    int e float ocupam 4 bytes cada e char ocupa 1 byte, por isso
    sizeof(Valor) vale 4 (na maioria dos compiladores atuais).
    */

    return 0;
}
