// O1.

// a) A principal diferença entre o `while` e o `do-while` está no momento em que a condição é avaliada. 
// No `while`, o teste é feito antes de qualquer execução, o que significa que, se a condição começar falsa, 
// o bloco de código pode nem chegar a rodar. Já no `do-while`, o bloco é executado primeiro e a verificação 
// acontece apenas no final, garantindo que ele rode pelo menos uma vez, mesmo que a condição seja falsa desde o início.

// b) O uso de cada estrutura varia conforme o objetivo: o `for` é ideal quando já sabemos ou conseguimos controlar
// facilmente o número de repetições (como ao contar de 1 a 100); o `while` é indicado quando a quantidade de voltas
// é incerta e depende exclusivamente de uma condição dinâmica; e o `do-while` é perfeito para situações em que o bloco
// precisa rodar obrigatoriamente ao menos uma vez, como na exibição de um menu ou na validação de dados de entrada.

// c) Escrever "while (condicao);" com um ponto e vírgula logo após não resulta em erro de compilação, pois esse caractere
// passa a funcionar como o corpo vazio do laço. Se a condição for verdadeira, o programa fica preso testando infinitamente
// sem executar nenhuma instrução real. Vale lembrar que, devido a isso, qualquer código colocado logo em seguida fica 
// fora do escopo do laço.