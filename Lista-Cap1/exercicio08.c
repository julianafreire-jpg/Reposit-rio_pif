
// O programa daria erro porque o "PAUSE" está maiúsculo.
// Após ajustado, o programa pularia uma linha e daria um espaçamento de um tab, imprimiria assim:

//     "Primeiro programa" 
// Pressione qualquer tecla para continuar . . .  
// encerra código

#include <stdio.h>
#include <stdlib.h>
int main()
{
printf("\n\t\"Primeiro programa\"");
system("pause");
return 0;
}

