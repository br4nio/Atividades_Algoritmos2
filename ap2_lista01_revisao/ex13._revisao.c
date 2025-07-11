#include <stdio.h>

typedef struct {
    float x;
    float y;
} Ponto;

typedef struct {
    Ponto inferiorEsquerdo;
    Ponto superiorDireito;
} Retangulo;

int main() {
    Retangulo r;

    printf("Digite as coordenadas do ponto inferior esquerdo (x y): ");
    scanf("%f %f", &r.inferiorEsquerdo.x, &r.inferiorEsquerdo.y);

    printf("Digite as coordenadas do ponto superior direito (x y): ");
    scanf("%f %f", &r.superiorDireito.x, &r.superiorDireito.y);

    float largura = r.superiorDireito.x - r.inferiorEsquerdo.x;
    float altura = r.superiorDireito.y - r.inferiorEsquerdo.y;

    float area = largura * altura;

    printf("A área do retângulo é: %.2f\n", area);

    return 0;
}
