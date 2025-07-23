#include <stdio.h>

int eh_primo(int num) {
    if (num < 2) {
        return 0;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

int contar_primos_abaixo_de(int N) {
    int contador = 0;

    for (int i = 2; i < N; i++) {
        if (eh_primo(i)) {
            contador++;
        }
    }

    return contador;
}

int main() {
    int N;

    printf("Digite um número inteiro positivo N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Número inválido. N deve ser positivo.\n");
    } else {
        int quantidade = contar_primos_abaixo_de(N);
        printf("Quantidade de números primos menores que %d: %d\n", N, quantidade);
    }

    return 0;
}
