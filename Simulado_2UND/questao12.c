#include <stdio.h>

#define TAM 10

int main() {
    float temperaturas[TAM];
    float soma = 0, media, maior;
    int i, posicaoMaior = 0, acimaDaMedia = 0;

    for (i = 0; i < TAM; i++) {
        printf("Digite a temperatura maxima do dia %d: ", i + 1);
        scanf("%f", &temperaturas[i]);
        soma = soma + temperaturas[i];
    }

    media = soma / TAM;

    maior = temperaturas[0];
    for (i = 1; i < TAM; i++) {
        if (temperaturas[i] > maior) {
            maior = temperaturas[i];
            posicaoMaior = i;
        }
    }

    for (i = 0; i < TAM; i++) {
        if (temperaturas[i] > media) {
            acimaDaMedia++;
        }
    }

    printf("\nTemperatura media: %.2f\n", media);
    printf("Maior temperatura: %.2f (dia %d, posicao %d do vetor)\n",
           maior, posicaoMaior + 1, posicaoMaior);
    printf("Dias acima da media: %d\n", acimaDaMedia);

    return 0;
}
