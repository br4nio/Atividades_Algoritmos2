#include <stdio.h>

int main() {
    int array[5];
    int *ptr = array;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", ptr + i);
    }

    printf("\nDobro dos valores digitados:\n");

    for (i = 0; i < 5; i++) {
        printf("%d\n", 2 * (*(ptr + i)));
    }

    return 0;
}
