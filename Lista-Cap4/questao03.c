// a) O operador avalia a condição (media >= 7.0). Se for verdadeira, retorna o valor 
// após o '?' ('A'). Se for falsa, retorna o valor após o ':' ('R'). 
// Como 6.8 não é maior ou igual a 7.0, a condição é falsa. A variável 'situacao' receberá 'R'.

// b) Reescrita com if-else:
// */
// if (media >= 7.0) {
//     situacao = 'A';
// } else {
//     situacao = 'R';
// }
// /*
// c) Não. O operador ternário só deve ser usado para retornar valores em expressões simples. 
// Ele não pode conter múltiplos comandos (como vários printf, cálculos sequenciais ou loops) 
// dentro de suas opções, sendo o if-else obrigatório para blocos de comandos.