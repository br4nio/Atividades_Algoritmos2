#include <stdio.h>

void soma_em_A(int *a, int b)
{
    *a = *a + b;
}

int main()
{
    int A, B;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    soma_em_A(&A, B);

    printf("Valor de A (soma): %d\n", A);
    printf("Valor de B: %d\n", B);

    return 0;
}
