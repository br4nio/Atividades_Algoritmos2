#include <stdio.h>

int main() {
    int n, i, j;
    int contador = 0;
    int numero = 0;

    printf("valor de n: ");
    scanf("%d", &n);

    printf("valor de i (positivo): ");
    scanf("%d", &i);

    printf("valor de j (positivo): ");
    scanf("%d", &j);

    while (contador < n) {
        if (numero % i == 0 || numero % j == 0) {
            printf("%d", numero);
            contador++;
            if (contador < n) {
                printf(", ");
            }
        }
        numero++;
    }

    return 0;
}
