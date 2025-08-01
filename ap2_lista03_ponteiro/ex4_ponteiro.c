#include <stdio.h>

void troca(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int A, B;

    printf("Digite o valor de A:");
    scanf("%d", &A);

    printf("Digite o valor de B:");
    scanf("%d", &B);

    troca(&A, &B);

    printf("Após a troca:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);

    return 0;
}
