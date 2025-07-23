#include <stdio.h>

int verificar_se_eh_triangulo(double lado1, double lado2, double lado3) {
    if (lado1 > 0 && lado2 > 0 && lado3 > 0) {
        int condicao1 = lado1 < lado2 + lado3;
        int condicao2 = lado2 < lado1 + lado3;
        int condicao3 = lado3 < lado1 + lado2;
        return condicao1 && condicao2 && condicao3;
    } else {
        return 0;
    }
}

void determinar_tipo_triangulo(double lado1, double lado2, double lado3) {
    if (verificar_se_eh_triangulo(lado1, lado2, lado3)) {
        printf("Os lados %.2lf, %.2lf e %.2lf FORMAM um triângulo.\n", lado1, lado2, lado3);
        if (lado1 == lado2 && lado2 == lado3) {
            printf("Este é um triângulo do tipo: Equilátero.\n");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("Este é um triângulo do tipo: Isósceles.\n");
        } else {
            printf("Este é um triângulo do tipo: Escaleno.\n");
        }
    } else {
        printf("Os lados %.2lf, %.2lf e %.2lf NÃO FORMAM um triângulo.\n", lado1, lado2, lado3);
    }
}

int main() {
    double l1, l2, l3;

    while (1) {
        printf("Digite o comprimento do primeiro lado (maior que zero): ");
        if (scanf("%lf", &l1) != 1) {
            printf("Entrada inválida. Por favor, digite um número.\n");
            while (getchar() != '\n');
            continue;
        }

        printf("Digite o comprimento do segundo lado (maior que zero): ");
        if (scanf("%lf", &l2) != 1) {
            printf("Entrada inválida. Por favor, digite um número.\n");
            while (getchar() != '\n');
            continue;
        }

        printf("Digite o comprimento do terceiro lado (maior que zero): ");
        if (scanf("%lf", &l3) != 1) {
            printf("Entrada inválida. Por favor, digite um número.\n");
            while (getchar() != '\n');
            continue;
        }

        if (l1 <= 0 || l2 <= 0 || l3 <= 0) {
            printf("Todos os lados devem ser maiores que zero. Tente novamente.\n");
        } else {
            break;
        }
    }

    determinar_tipo_triangulo(l1, l2, l3);

    return 0;
}
