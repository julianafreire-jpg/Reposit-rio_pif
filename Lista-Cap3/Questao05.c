// 05.

// a) O laço executará 5 iterações, pois começa com `i = 0` e `j = 10` e, a cada repetição, `i` aumenta 1 e `j` diminui 1, até `i` ficar igual a `j`.

// b) A saída será:

// ```text
// i = 0, j = 10 | soma = 10
// i = 1, j = 9 | soma = 10
// i = 2, j = 8 | soma = 10
// i = 3, j = 7 | soma = 10
// i = 4, j = 6 | soma = 10
// ```

// c) Usando `while`, a lógica fica:

// ```c
// int i = 0, j = 10;

// while (i < j) {
//     printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
//     i++;
//     j--;
// }
// ```
