#include <stdio.h>

int somaAlgarismos(int num) {
    int soma = 0;
    while (num > 0) {
        soma += num % 10;
        num /= 10;
    }
    return soma;
}

int main() {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Numero invalido");
    } else {
        int resultado = somaAlgarismos(numero);
        printf("Soma dos algarismos: %d", resultado);
    }

    return 0;
}
