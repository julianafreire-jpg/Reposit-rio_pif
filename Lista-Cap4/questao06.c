// a) Saída para idade = 65:
// Idoso
// Adulto
// Jovem

// Múltiplas mensagens aparecem porque os comandos 'if' estão independentes. 
// 65 é maior que 60, maior que 18 e maior que 12, passando em todos os testes.

// b) Sequência de 'if' independentes testa TODAS as condições, mesmo que uma já 
// tenha sido verdadeira. A cadeia 'else if' testa as condições apenas até encontrar 
// a primeira verdadeira, ignorando automaticamente todas as subsequentes.

// c) Código corrigido:
// */
// int idade = 25;
// if (idade >= 60) {
//     printf("Idoso\n");
// } else if (idade >= 18) {
//     printf("Adulto\n");
// } else if (idade >= 12) {
//     printf("Jovem\n");
// } else {
//     printf("Criança\n");
// }