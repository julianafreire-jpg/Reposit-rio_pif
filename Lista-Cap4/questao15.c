#include <stdio.h>

int main() {
    int idade_trabalhador, tempo_contribuicao;
    
    printf("Digite a idade e o tempo de serviço (em anos): ");
    scanf("%d %d", &idade_trabalhador, &tempo_contribuicao);
    
    if (idade_trabalhador >= 65 || tempo_contribuicao >= 30 || 
       (idade_trabalhador >= 60 && tempo_contribuicao >= 25)) {
        printf("Pode se aposentar.\n");
    } else {
        printf("Não pode se aposentar.\n");
    }
    
    return 0;
}