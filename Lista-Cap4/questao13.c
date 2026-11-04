#include <stdio.h>
#include <math.h>

int main() {
    char operacao_escolhida;
    float operando_1, operando_2, resultado_operacao;
    
    printf("Escolha a operação (+, -, *, /, ^): ");
    scanf(" %c", &operacao_escolhida);
    
    printf("Digite os dois números: ");
    scanf("%f %f", &operando_1, &operando_2);
    
    switch (operacao_escolhida) {
        case '+':
            resultado_operacao = operando_1 + operando_2;
            printf("Resultado: %.2f\n", resultado_operacao);
            break;
        case '-':
            resultado_operacao = operando_1 - operando_2;
            printf("Resultado: %.2f\n", resultado_operacao);
            break;
        case '*':
            resultado_operacao = operando_1 * operando_2;
            printf("Resultado: %.2f\n", resultado_operacao);
            break;
        case '/':
            if (operando_2 == 0) {
                printf("Erro: Divisão por zero não permitida.\n");
            } else {
                resultado_operacao = operando_1 / operando_2;
                printf("Resultado: %.2f\n", resultado_operacao);
            }
            break;
        case '^':
            resultado_operacao = pow(operando_1, operando_2);
            printf("Resultado: %.2f\n", resultado_operacao);
            break;
        default:
            printf("Erro: Operação inválida.\n");
    }
    
    return 0;
}