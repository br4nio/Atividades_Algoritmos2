#include <stdio.h>

int dobro(int numero) {
    return numero * 2;
}

int main() {
    int n, resultado;

    printf("Digite um número: ");
    scanf("%d", &n);

    resultado = dobro(n);

    printf("O dobro é %d", resultado);

    return 0;
}

