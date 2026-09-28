// a) O final vai dar erro porque a variável soma está dentro do escopo do laço for e não fora, como o printf.
// b) As iterações do laço serão executadas do valor 1 até ao valor 8, instante em que a repetição é encerrada. O comando continue atua quando a variável $i$ atinge o valor 5, interrompendo apenas essa iteração específica ao saltar as instruções que o sucedem dentro do bloco e avançando imediatamente para o incremento do laço. O comando break é ativado quando $i$ atinge o valor 8, interrompendo definitivamente a execução do laço for e impedindo que os valores de 8 a 10 sejam processados. Em consequência deste fluxo, o corpo do laço com o cálculo da soma é efetivamente executado apenas para os valores de $i$ iguais a 1, 2, 3, 4, 6 e 7.
// c) Resultado é 115

#include <stdio.h>
#include <stdlib.h>

int main() {
int i;
int soma = 0;
for (i = 1; i <= 10; i++) {
if (i == 5) continue;
if (i == 8) break;

soma += i * i;
}
printf("Soma final = %d\n", soma);
system("PAUSE");

return 0;
}