// a) O console imprimirá: "Opção B".
// Justificativa: A variável x é 15 (passa no primeiro if). A variável y é 5 (falha no segundo if). 
// Como o segundo if falhou e o else está associado a ele, a "Opção B" é exibida.

// b) A regra oficial (Dangling Else) diz que um comando 'else' sempre se associa 
// ao comando 'if' mais próximo (imediatamente anterior) que ainda não possua um 'else' associado, 
// dentro do mesmo bloco.

// c) Código reescrito com chaves:
// */
// int x = 15, y = 5;
// if (x > 10) {
//     if (y > 10) {
//         printf("Opção A\n");
//     }
// } else {
//     printf("Opção B\n");
// }