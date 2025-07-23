#include <stdio.h>

void imprime_exclamacoes(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("!");
        }
        printf("\n");
    }
}

int main() {
    int numero;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero > 0) {
        imprime_exclamacoes(numero);
    } else {
        printf("Número inválido. Digite um valor maior que zero.\n");
    }

    return 0;
}
