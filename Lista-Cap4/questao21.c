#include <stdio.h>

int main() {
    float salarioAtual, valorAumento, novoSalario;
    int codigoCargo; // 1 = Tecnico, 2 = Gerente, 3 = Demais
    
    printf("Digite o salario e o codigo do cargo: ");
    scanf("%f %d", &salarioAtual, &codigoCargo);
    
    if (codigoCargo == 1) {
        if (salarioAtual <= 3000) valorAumento = salarioAtual * 0.15;
        else valorAumento = salarioAtual * 0.10;
    } 
    else if (codigoCargo == 2) {
        if (salarioAtual <= 5000) valorAumento = salarioAtual * 0.10;
        else valorAumento = salarioAtual * 0.05;
    } 
    else if (codigoCargo == 3) {
        valorAumento = salarioAtual * 0.08;
    } 
    else {
        printf("Cargo invalido.\n");
        return 1;
    }
    
    novoSalario = salarioAtual + valorAumento;
    printf("Aumento: R$ %.2f\n", valorAumento);
    printf("Novo Salario: R$ %.2f\n", novoSalario);
    
    return 0;
}