#include <stdio.h>

float calculadoraSimples(float numero1, float numero2, char simbolo) {
    if (simbolo == '+') {
        return numero1 + numero2;
    } else if (simbolo == '-') {
        return numero1 - numero2;
    } else if (simbolo == '*') {
        return numero1 * numero2;
    } else if (simbolo == '/') {
        if (numero2 != 0) {
            return numero1 / numero2;
        } else {
            printf("Erro: Divisão por zero não é permitida.\n");
            return 0;
        }
    } else {
        printf("Símbolo de operação inválido. Use '+', '-', '*' ou '/'.\n");
        return 0;
    }
}

int main() {
    float num1, num2;
    char op;
    float resultado;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    resultado = calculadoraSimples(num1, num2, op);

    if (!((op == '/' && num2 == 0) || (op != '+' && op != '-' && op != '*' && op != '/'))) {
        printf("Resultado: %.2f\n", resultado);
    }

    return 0;
}
