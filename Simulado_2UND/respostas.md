# Simulado — Capítulos 4, 5, 7 e 8

## Respostas das questões de múltipla escolha

| Questão | Alternativa |
|---------|-------------|
| 01 | b |
| 02 | c |
| 05 | d |
| 06 | a |
| 10 | c |
| 11 | b |
| 16 | c |
| 17 | d |

## Justificativas

**Questão 01 — b) Y e, em seguida, Z.**
O `else` se associa ao `if` mais próximo que ainda não tem `else`, ou seja, ao `if (b > 5)`. Como `a > 5` é verdadeiro e `b > 5` é falso, executa o `else` e imprime `Y`. Depois, o `printf("Z\n")` está fora do `if` e sempre é executado.

**Questão 02 — c) 5**
Com `op = 2`, a execução entra no `case 2` (`t = 2`) e, como não há `break`, continua no `case 3` (`t = 5`), onde o `break` encerra o `switch`.

**Questão 05 — d) 3 7**
Os parâmetros são passados por valor: a função `troca` recebe cópias de `x` e `y`. A troca acontece apenas nas cópias locais, e as variáveis da `main()` não são alteradas.

**Questão 06 — a) 10**
`f(4) = 4 + f(3) = 4 + 3 + f(2) = 4 + 3 + 2 + f(1) = 4 + 3 + 2 + 1 = 10`.

**Questão 10 — c) 15**
`m[0][2] = 3`, `m[1][1] = 5` e `m[2][0] = 7`. A soma é `3 + 5 + 7 = 15`.

**Questão 11 — b) 9 PROVA2026**
`strcat` concatena `"2026"` ao final de `"PROVA"`, resultando em `"PROVA2026"`. O `strlen` conta os caracteres sem o terminador nulo `'\0'`: 9.

**Questão 16 — c) 1 9**
A atribuição `b = a` copia todos os campos de `a` para `b`. Depois, alterar `b.x` não afeta `a`, pois são variáveis independentes. Assim, `a.x` continua 1 e `b.x` vale 9.

**Questão 17 — d) 8**
Em uma união, todos os membros compartilham a mesma área de memória. O tamanho é o do maior membro: `char c[8]` e `double d` ocupam 8 bytes.

## Questões práticas

As questões 03, 04, 07, 08, 09, 12, 13, 14, 15, 18, 19 e 20 estão nos arquivos `.c` correspondentes desta pasta.
