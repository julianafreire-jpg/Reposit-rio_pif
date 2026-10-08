#include <stdio.h>

int main() {
   
    for (int i = 0; i <= 100; i++) {
        printf("%d ", i);
    }

    printf("\n\n");

    int i = 0;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }

    printf("\n\n");

       i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);

    return 0;
}

/*
A estrutura mais adequada para esse caso é o for,
porque já reúne a inicialização, a condição e o incremento
em uma única linha,

