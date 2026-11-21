#include <stdio.h>

typedef struct { float x, y; } Ponto;
typedef struct { Ponto inf_esq; Ponto sup_dir; } Retangulo;

float area(Retangulo r);
float perimetro(Retangulo r);
int contemPonto(Retangulo r, Ponto p);

int main() {
    Retangulo r1, r2;
    Ponto p;

    printf("Canto inferior esquerdo do retangulo (x y): ");
    scanf("%f %f", &r1.inf_esq.x, &r1.inf_esq.y);

    printf("Canto superior direito do retangulo (x y): ");
    scanf("%f %f", &r1.sup_dir.x, &r1.sup_dir.y);

    printf("Ponto (x y): ");
    scanf("%f %f", &p.x, &p.y);

    printf("\nArea: %.2f\n", area(r1));
    printf("Perimetro: %.2f\n", perimetro(r1));

    if (contemPonto(r1, p) == 1) {
        printf("O ponto (%.2f, %.2f) esta dentro do retangulo.\n", p.x, p.y);
    } else {
        printf("O ponto (%.2f, %.2f) esta fora do retangulo.\n", p.x, p.y);
    }

    // Copia de estrutura com uma unica atribuicao.
    r2 = r1;
    printf("\nRetangulo r2 (copia de r1): (%.2f, %.2f) ate (%.2f, %.2f)\n",
           r2.inf_esq.x, r2.inf_esq.y, r2.sup_dir.x, r2.sup_dir.y);
    printf("Area de r2: %.2f\n", area(r2));

    return 0;
}

float area(Retangulo r) {
    float largura = r.sup_dir.x - r.inf_esq.x;
    float altura = r.sup_dir.y - r.inf_esq.y;

    return largura * altura;
}

float perimetro(Retangulo r) {
    float largura = r.sup_dir.x - r.inf_esq.x;
    float altura = r.sup_dir.y - r.inf_esq.y;

    return 2 * (largura + altura);
}

int contemPonto(Retangulo r, Ponto p) {
    if (p.x >= r.inf_esq.x && p.x <= r.sup_dir.x &&
        p.y >= r.inf_esq.y && p.y <= r.sup_dir.y) {
        return 1;
    }

    return 0;
}
