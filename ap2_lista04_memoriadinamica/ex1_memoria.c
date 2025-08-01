#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numeros;
    int i;

    numeros = malloc(5 * sizeof(int));

    if (numeros == NULL) {
        printf("Não foi possível alocar memória\n");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &numeros[i]);
    }

    printf("Os números digitados foram:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n");

    free(numeros);

    return 0;
}
