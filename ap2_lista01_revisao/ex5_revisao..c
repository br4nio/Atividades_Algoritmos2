#include <stdio.h>

int main() {
    int n, i, contador = 0;

    printf("digite um número: ");
    scanf("%d", &n);

    printf("primeiros números naturais: ");

    for(i = 1; contador < n; i += 2) {
        printf("%d", i);
        contador++;
        if (contador < n) {
            printf(", ");
        }
    }

    return 0;
}
