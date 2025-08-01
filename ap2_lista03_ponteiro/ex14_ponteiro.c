#include <stdio.h>

void ler_notas(float *nota1, float *nota2) {
    printf("Digite a primeira nota: ");
    scanf("%f", nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", nota2);
}

void calcular_medias(float n1, float n2, float *media_simples, float *media_ponderada) {
    *media_simples = (n1 + n2) / 2;
    *media_ponderada = (n1 + (n2 * 2)) / 3;
}

int main() {
    float nota1, nota2;
    float media_simples, media_ponderada;

    ler_notas(&nota1, &nota2);
    calcular_medias(nota1, nota2, &media_simples, &media_ponderada);

    printf("Notas lidas:%.2f e %.2f\n", nota1, nota2);
    printf("Media simples: %.2f\n", media_simples);
    printf("Media ponderada:%.2f\n", media_ponderada);

    return 0;
}
