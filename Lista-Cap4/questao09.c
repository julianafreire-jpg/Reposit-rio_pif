#include <stdio.h>

int main() {
    float nota_laboratorio, nota_semestral, nota_exame, media_ponderada;
    
    printf("Nota do Trabalho de Laboratório: ");
    scanf("%f", &nota_laboratorio);
    printf("Nota da Avaliação Semestral: ");
    scanf("%f", &nota_semestral);
    printf("Nota do Exame Final: ");
    scanf("%f", &nota_exame);
    
    media_ponderada = (nota_laboratorio * 2.0 + nota_semestral * 3.0 + nota_exame * 5.0) / 10.0;
    
    printf("Média Ponderada: %.2f\n", media_ponderada);
    
    if (media_ponderada < 3.0) {
        printf("Situação: Reprovado\n");
    } else if (media_ponderada < 5.0) {
        printf("Situação: Em Recuperação\n");
    } else {
        printf("Situação: Aprovado\n");
    }
    
    return 0;
}