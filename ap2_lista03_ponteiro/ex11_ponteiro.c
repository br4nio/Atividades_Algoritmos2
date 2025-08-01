#include <stdio.h>

int main() {
    int array[5];
    int *ptr = array;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", ptr + i);
    }

    for (i = 0; i < 5; i++) {
        if (*(ptr + i) % 2 == 0) {
            printf("Endereco do elemento par %d: %p\n", *(ptr + i), (ptr + i));
        }
    }

    return 0;
}
