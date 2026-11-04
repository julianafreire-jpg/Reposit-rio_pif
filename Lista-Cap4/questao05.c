// a) Saída exata: a = 0, b = 5, c = 8
// O incremento ++b foi IGNORADO. Como a != 0 é falso, a linguagem C aborta a verificação 
// da segunda parte do '&&', pula para o else (c -= 2), resultando em c = 8.

// b) Curto-circuito E (&&): Se a primeira condição for FALSA, o resultado já é garantidamente 
// falso, então a segunda condição não é avaliada.
// Curto-circuito OU (||): Se a primeira condição for VERDADEIRA, o resultado já é garantidamente 
// verdadeiro, então a segunda condição não é avaliada.

// c) Se fosse if (a == 0 || ++b > 5): 
// a == 0 é verdadeiro. O operador '||' faria curto-circuito, ignorando ++b. 
// O if seria verdadeiro, executando c += 10.
// Valor final: b = 5, c = 20.