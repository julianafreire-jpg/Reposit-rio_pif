# Lista de Exercícios — Capítulo 5: Funções

## Parte I — Questões teóricas e analíticas

### Questão 01 — Anatomia de uma Função e o Papel do Protótipo

**a)**

- **Protótipo:** `float celsius(float);` — informa ao compilador que existe uma função chamada `celsius`, que recebe um `float` e retorna um `float`.
- **Chamada:** `c = celsius(f);` — executa a função, enviando o valor de `f` como argumento.
- **Definição:** `float celsius(float fahr) { ... }` — contém as instruções que realizam a conversão de Fahrenheit para Celsius.

**b)** O protótipo informa ao compilador o nome da função, os tipos dos parâmetros e o tipo do retorno. Sem ele, se a função estiver definida depois da `main()`, o compilador não terá a declaração prévia necessária para verificar corretamente a chamada. Em C moderno, isso gera um diagnóstico de compilação.

**c)** O tipo da função é `float`, pois ela retorna um valor desse tipo por meio do `return`. Os parâmetros indicam os dados que a função recebe, enquanto o tipo antes do nome indica o tipo de dado que ela devolve.

### Questão 02 — O Comando return e suas Limitações

**a)** Uma função em C pode devolver apenas um valor por meio do `return`. O programador pretendia retornar a soma e a média, mas `return soma, media;` utiliza o operador vírgula. Nesse caso, as duas expressões são avaliadas, mas somente o último valor, `media`, é retornado.

**b)** O comando `return;` encerra imediatamente a execução da função `void`, sem devolver nenhum valor. Ele não é obrigatório no final de uma função `void`, pois a execução termina naturalmente quando chega ao fechamento das chaves.

**c)** As funções podem ser reescritas assim:

```c
int calcularSoma(int a, int b, int c) {
    return a + b + c;
}

float calcularMedia(int a, int b, int c) {
    int soma = a + b + c;
    return soma / 3.0;
}
```

São necessárias duas funções porque cada `return` devolve apenas um valor. Assim, uma função retorna a soma e a outra retorna a média.

### Questão 03 — Funções void, Parâmetros e Assinaturas

**a)**

- `void exibe_mensagem(char* msg);` — recebe um parâmetro do tipo texto e não retorna valor.
- `int obter_codigo(void);` — não recebe parâmetros e retorna um inteiro.
- `void limpar_tela(void);` — não recebe parâmetros e não retorna valor.

**b)** Uma função com retorno calcula ou obtém um valor que pode ser utilizado em outras partes do programa. Por exemplo, uma função que calcula a soma de dois números.

Um procedimento, ou função `void`, executa uma ação sem devolver um valor. Por exemplo, uma função que exibe uma mensagem na tela.

**c)** Não. A chamada `x = limpar_tela();` não é válida porque `limpar_tela()` é uma função `void`, ou seja, não retorna um valor que possa ser armazenado em `x`.

### Questão 04 — Recursão: Caso Base, Passo Recursivo e Pilha de Execução

**a)** O caso base é `n == 0`, que retorna `1` e encerra a recursão. O passo recursivo é `n * fatorial(n - 1)`, que chama a própria função com um valor menor.

Se o caso base fosse removido, a função continuaria chamando a si mesma sem parar, podendo causar estouro da pilha de execução.

**b)** Rastreamento da chamada `fatorial(4)`:

**Empilhamento:**

```
fatorial(4) = 4 * fatorial(3)
fatorial(3) = 3 * fatorial(2)
fatorial(2) = 2 * fatorial(1)
fatorial(1) = 1 * fatorial(0)
fatorial(0) = 1
```

**Desempilhamento:**

```
fatorial(0) = 1
fatorial(1) = 1 * 1 = 1
fatorial(2) = 2 * 1 = 2
fatorial(3) = 3 * 2 = 6
fatorial(4) = 4 * 6 = 24
```

Resultado: **24**.

**c)** A cada chamada recursiva, o programa armazena na pilha de execução as informações necessárias para continuar a função depois. Quando o caso base é encontrado, as chamadas começam a retornar seus resultados. Sem um caso base, as chamadas continuam sendo armazenadas até que a pilha fique sem espaço, causando uma falha no programa.

### Questão 05 — Diretiva #define, Constantes e Macros com Argumentos

**a)** Considerando a substituição das macros, as expressões resultam em:

```
SQR(2+3)   → 25
DOBRO(2+3) → 8
```

A macro `SQR(x)` possui parênteses de proteção. Assim, `SQR(2+3)` é substituída por `((2+3)*(2+3))`, resultando em `25`.

Já `DOBRO(x)` não possui parênteses de proteção. Portanto, `DOBRO(2+3)` é substituída por `2+3*2`, resultando em `8`, devido à prioridade da multiplicação.

**b)** A diretiva `#define` não termina com ponto e vírgula porque é uma instrução do pré-processador, não uma instrução comum da linguagem C. Por convenção, os identificadores são escritos em letras maiúsculas para facilitar a identificação de constantes e macros no código.

**c)** A forma `#define PRN (n) printf("%d", n)` está incorreta porque existe um espaço entre o nome da macro e os parênteses. Dessa forma, o pré-processador interpreta `PRN` como uma macro sem argumentos.

A forma correta é:

```c
#define PRN(n) printf("%d", n)
```

Uma diferença entre macros e funções comuns é que as macros são substituídas pelo pré-processador antes da compilação, enquanto as funções são executadas durante o programa.

### Questão 06 — Diretivas #include, #undef e Compilação Condicional

**a)**

- `#include <stdio.h>` é utilizado para incluir bibliotecas padrão da linguagem C, como a biblioteca que permite utilizar `printf()` e `scanf()`.
- `#include "areas.h"` é utilizado para incluir arquivos de cabeçalho criados pelo próprio programador, geralmente armazenados no projeto.

**b)** A diretiva `#undef SOMA` cancela a definição anterior da macro `SOMA`, impedindo que ela continue sendo utilizada como macro.

A forma `#undef SOMA(x,y)` está incorreta porque a diretiva recebe apenas o nome da macro, sem seus parâmetros.

**c)** Se `DEBUG` não tiver sido definido, será impressa a mensagem:

```
Modo normal
```

Essa decisão é tomada durante o pré-processamento, antes da compilação. As diretivas são utilizadas para selecionar ou modificar trechos do código, mas não aparecem como instruções no executável final.

## Parte II — Questões práticas

As questões 07 a 28 estão nos arquivos `questao07.c` a `questao28.c` desta pasta. A questão 22 usa também o arquivo `areas.h`.
