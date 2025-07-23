#include <stdio.h>

int exponenciacao(int x, int z) {
    int resultado = 1;

    for(int i = 0; i < z; i++) {
        resultado *= x;
    }

    return resultado;
}

int main() {
    int base, expoente;

    printf("Digite a base (x): ");
    scanf("%d", &base);

    printf("Digite o expoente (z): ");
    scanf("%d", &expoente);

    int resultado = exponenciacao(base, expoente);
    printf("%d elevado a %d é igual a %d\n", base, expoente, resultado);

    return 0;
}
