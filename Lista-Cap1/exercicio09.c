#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Neste printf, o código de formatação indica que os proximos elementos serão caracteres"
// printf("%c%c%cPrimeiro programa", '\n', '\t', '\"'); São caracteres especiais com função de pular linha, dar uma tabulação e printar aspas
printf("%c", "\"");
// O pause precisa estar minúsculo para funcionar, usar getchar no lugar
system("PAUSE"); 
getchar();
return 0;
}