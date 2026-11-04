// a) Saída exata:
// Prata
// Ouro

// Ocorreu mais de uma impressão porque não há um comando "break;" após o case 2. 
// O programa continuou executando as instruções do case abaixo (case 3) até encontrar um break.

// b) O comando 'break' serve para interromper a execução do bloco switch, impedindo 
// que o código continue executando os 'cases' seguintes. A omissão do break 
// causa o fenômeno conhecido como "Fall-Through" (cascata/escorregamento).

// c) O argumento do switch só pode receber números inteiros (int) ou caracteres (char). 
// NÃO é permitido usar float ou double, pois o switch exige valores exatos e discretos, 
// e números de ponto flutuante podem sofrer problemas de precisão na memória.