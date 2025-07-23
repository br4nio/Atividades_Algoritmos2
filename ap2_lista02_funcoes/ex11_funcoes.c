#include <stdio.h>

float calcular_media(float n1, float n2, float n3, char tipo) {
    if (tipo == 'A' || tipo == 'a') {
        return (n1 + n2 + n3) / 3;
    } else if (tipo == 'P' || tipo == 'p') {
        return (n1 * 5 + n2 * 3 + n3 * 2) / 10;
    } else {
        printf("Tipo inválido! Use 'A' para média aritmética ou 'P' para ponderada.\n");
        return -1; 
    }
}

int main() {
    float nota1, nota2, nota3, resultado;
    char tipo;

    printf("Digite as três notas do aluno:\n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    printf("Digite o tipo de média (A para aritmética, P para ponderada): ");
    scanf(" %c", &tipo);

    resultado = calcular_media(nota1, nota2, nota3, tipo);

    if (resultado != -1) {
        printf("Média calculada: %.2f\n", resultado);
    }

    return 0;
}
