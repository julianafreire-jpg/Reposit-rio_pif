// // Questão 06. 

// // a) Explique a diferença de fluxo e atribuição que ocorre entre o operador prefixado (++n) e o
// // pós-fixado (m++). Quais serão os valores impressos na tela por cada trecho?
// No operador prefixado (++n), primeiro acontece o incremento da variável e depois o valor é utilizado. 
// Já no operador pós-fixado (m++), primeiro o valor atual da variável é utilizado e depois acontece o 
// incremento. Por exemplo, se n e m começam com 5, o ++n vai imprimir 6, enquanto o m++ vai imprimir 5. 
// Depois das operações, as duas variáveis ficam com o valor 6.


// // b) Um programador júnior tentou imprimir uma variável em printf() modificando-a múltiplas
// // vezes de forma sequencial na mesma chamada: printf("%d\t%d\t%d\n", n, n+1, n++);. Explique
// // por que essa instrução pode gerar resultados inconsistentes e imprevisíveis dependendo do
// // compilador adotado (comportamento indefinido).

// Essa instrução pode gerar resultados diferentes porque a variável n está sendo usada e modificada ao mesmo
// tempo dentro da mesma chamada do printf(). Como a ordem em que os argumentos são avaliados não é garantida pela linguagem C, 
// não é possível saber exatamente quando o n++ será executado em relação aos outros valores. 
// Por isso, o resultado pode variar dependendo do compilador, caracterizando um comportamento indefinido.
