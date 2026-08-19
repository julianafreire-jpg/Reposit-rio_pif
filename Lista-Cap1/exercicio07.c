#include <stdio.h>
#include <stdlib.h>

int main(){

// letra a
printf("\n\tBom dia! Shirley.");
// Pulou uma linha e deu espaçamento de um tab.

// letra b
printf("Você já tomou café? \n");
// Pulou uma linha após a impressão da pergunta.

// letra c
printf("\n\nA solução não existe!\nNão insista.");
// Pulou duas linhas e mais uma antes da segunda frase.

// letra d
printf("Duas\tlinhas\tde\tsaída\nou\tuma?");

// Deu um espaço de um tab entre as palavras com \t e pulou uma linha antes do ou por causa do \n.

// letra e
printf("%s\n%s\n%s\n", "um", "dois", "três");
// Substituiu os valores nos especificadores e pulou uma linhas antes de cada um.
}