#include <stdio.h>

int soma_entre(int a, int b) {
    int soma = 0;

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    for (int i = a + 1; i < b; i++) {
        soma += i;
    }

    return soma;
}

int main() {
    int num1, num2, resultado;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    resultado = soma_entre(num1, num2);
    printf("Soma dos números entre %d e %d: %d\n", num1, num2, resultado);

    return 0;
}
