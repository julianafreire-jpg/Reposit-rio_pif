#include <stdio.h>
#include <string.h>

int main() {
    char nomes[5][30];
    int i, maisLongo = 0, maisCurto = 0, mesmaLetra = 0;

    for (i = 0; i < 5; i++) {
        printf("Nome %d: ", i + 1);
        scanf(" %29[^\n]", nomes[i]);
    }

    for (i = 1; i < 5; i++) {
        if (strlen(nomes[i]) > strlen(nomes[maisLongo])) {
            maisLongo = i;
        }
        if (strlen(nomes[i]) < strlen(nomes[maisCurto])) {
            maisCurto = i;
        }
        // Compara a primeira letra com a do primeiro nome digitado.
        if (nomes[i][0] == nomes[0][0]) {
            mesmaLetra++;
        }
    }

    printf("\nNome mais longo: %s\n", nomes[maisLongo]);
    printf("Nome mais curto: %s\n", nomes[maisCurto]);
    printf("Outros nomes que comecam com '%c' (como o primeiro): %d\n",
           nomes[0][0], mesmaLetra);

    return 0;
}
