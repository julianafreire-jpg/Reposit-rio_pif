#include <stdio.h>

int main() {
    int opcaoMenuBanco;
    
    printf("Bem-vindo ao Banco!\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Efetuar Extrato\n");
    printf("3 - Fazer Transferencia\n");
    printf("4 - Falar com Atendente\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcaoMenuBanco);
    
    switch(opcaoMenuBanco) {
        case 1:
            printf("Direcionando para o menu de consulta de saldo do seu cartao...\n");
            break;
        case 2:
            printf("Seu extrato detalhado esta sendo impresso...\n");
            break;
        case 3:
            printf("Insira os dados da conta destino para transferencia...\n");
            break;
        case 4:
            printf("Aguarde na linha, o proximo atendente estara com voce...\n");
            break;
        default:
            printf("Erro: Opcao digitada e invalida. Desligando...\n");
    }
    
    return 0;
}