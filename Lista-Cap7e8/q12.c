#include <stdio.h>

void imprimeTabuleiro(char tab[3][3]);
char verificaResultado(char tab[3][3], int jogadas);

int main() {
    char tab[3][3];
    char jogador = 'X', resultado = ' ';
    int i, j, linha, coluna, jogadas = 0;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            tab[i][j] = ' ';
        }
    }

    imprimeTabuleiro(tab);

    while (resultado == ' ') {
        printf("\nJogador %c, informe linha e coluna (0 a 2): ", jogador);
        scanf("%d %d", &linha, &coluna);

        if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2) {
            printf("Posicao fora do tabuleiro. Tente novamente.\n");
            continue;
        }

        if (tab[linha][coluna] != ' ') {
            printf("Posicao ja ocupada. Tente novamente.\n");
            continue;
        }

        tab[linha][coluna] = jogador;
        jogadas++;

        imprimeTabuleiro(tab);

        resultado = verificaResultado(tab, jogadas);

        if (jogador == 'X') {
            jogador = 'O';
        } else {
            jogador = 'X';
        }
    }

    if (resultado == 'E') {
        printf("\nDeu velha! Empate.\n");
    } else {
        printf("\nJogador %c venceu!\n", resultado);
    }

    return 0;
}

void imprimeTabuleiro(char tab[3][3]) {
    int i;

    printf("\n    0   1   2\n");
    for (i = 0; i < 3; i++) {
        printf("%d   %c | %c | %c\n", i, tab[i][0], tab[i][1], tab[i][2]);
        if (i < 2) {
            printf("   ---+---+---\n");
        }
    }
}

// Devolve 'X' ou 'O' se houver vencedor, 'E' se houver empate
// e ' ' se o jogo ainda nao terminou.
char verificaResultado(char tab[3][3], int jogadas) {
    int i;

    for (i = 0; i < 3; i++) {
        // Linhas
        if (tab[i][0] != ' ' && tab[i][0] == tab[i][1] && tab[i][1] == tab[i][2]) {
            return tab[i][0];
        }
        // Colunas
        if (tab[0][i] != ' ' && tab[0][i] == tab[1][i] && tab[1][i] == tab[2][i]) {
            return tab[0][i];
        }
    }

    // Diagonal principal
    if (tab[0][0] != ' ' && tab[0][0] == tab[1][1] && tab[1][1] == tab[2][2]) {
        return tab[0][0];
    }

    // Diagonal secundaria
    if (tab[0][2] != ' ' && tab[0][2] == tab[1][1] && tab[1][1] == tab[2][0]) {
        return tab[0][2];
    }

    if (jogadas == 9) {
        return 'E';
    }

    return ' ';
}
