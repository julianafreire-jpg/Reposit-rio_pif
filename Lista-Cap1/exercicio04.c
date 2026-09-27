// #include <stdio.h> /*certo: Biblioteca pra printf*/
// #include <stdlib.h>;/* Errado: não se usa ; aqui*/
// int Main{} /*Errado: faltou() depois da função e Main tá maiusculo*/
// (
//  printf( Existem %d semanas no ano.,52); /*Errado: sem aspas*/
//  cout << endl;/*Errado*/
//  system("PAUSE");
//  return 0;
// ) /*Errado: seria chaves*/


// Versão certa

#include <stdio.h>
#include <stdlib.h>

int main(){ 
    printf("Existem %d semanas no ano.\n",52);
    system("PAUSE");

    return 0;
}