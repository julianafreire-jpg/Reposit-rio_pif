// 02.
// a) A variável `soma` foi declarada dentro das chaves do `for`, por isso ela só pode ser utilizada 
// dentro desse bloco. Quando o programa chega ao `printf` que está fora das chaves, a variável `soma` 
// não está mais disponível naquele local. Por esse motivo, o compilador informa que a variável não foi
// declarada.

// b)Mesmo colocando o `printf` dentro do `for`, o resultado ainda estaria errado, porque a variável `soma`
// seria criada novamente a cada repetição do laço e receberia o valor `0` novamente. Dessa forma, ela não
// conseguiria guardar o resultado das somas anteriores e acumular os quadrados dos números a cada repetição.

// c)Código corrigido fica assim:

// #include <stdio.h>

// int main() {
//     int numeroAtual;
//     int somaTotal = 0;

//     for (numeroAtual = 1; numeroAtual < 10; numeroAtual++) {
//         somaTotal += numeroAtual * numeroAtual;
//     }

//     printf("Soma final = %d\n", somaTotal);

//     return 0;
// }

// A variável somaTotal foi declarada antes do for, então ela pode ser utilizada dentro e depois do laço.
// O escopo de bloco determina onde uma variável pode ser utilizada. Uma variável declarada dentro de um bloco entre { } só pode ser
// acessada dentro desse bloco. O tempo de vida é o período em que a variável existe durante a execução. Nesse caso, 
// uma variável local criada dentro do bloco do for existe enquanto aquele bloco está sendo executado.
// Já somaTotal, por estar declarada dentro da função main, continua disponível durante a execução da função.    