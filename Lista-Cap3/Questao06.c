// 06.

// a) O valor final de `x` será **6**.

// b) O `x++` usa primeiro o valor atual de `x` na comparação e depois aumenta 1. Então, começa com `0`, compara com `5` e aumenta para `1`. Isso continua até `x` chegar a `5`, quando a comparação `5 < 5` é falsa, mas o `x++` ainda aumenta o valor para `6`. Por isso, o valor final de `x` é **6**.

// c) Uma forma mais clara de escrever o mesmo código seria:

// ```c
// int x = 0;

// while (x < 5) {
//     x++;
// }

// x++;

// printf("Valor final de x = %d\n", x);
// ```

// Assim, o resultado final continua sendo 6.
