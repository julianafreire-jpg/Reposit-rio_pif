#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float notasValidas;

    


      do
      {
       printf ("Insira a nota de 0.0 a 10.0:");
       scanf("%f",&notasValidas); 

       if (notasValidas <0.0 || notasValidas > 10.0){
       printf("Erro na nota inserida. Fora do Intervalo.\n");
       }

      } while (notasValidas < 0.0 || notasValidas > 10.0);

    printf("Nota registrada com sucesso!\n");

    return 0;

     


}