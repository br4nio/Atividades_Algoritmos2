#include <stdio.h>

int soma_dobro(int *a, int *b)
{
    *a = *a * 2;
    *b = *b * 2;
    return *a + *b;
}

int main()
{
    int A, B, resultado;
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &A);
    printf("Digite o segundo valor: ");
    scanf("%d", &B);
    
    resultado = soma_dobro(&A, &B);
    
    printf("A soma dos valores dobrados: %d\n", resultado);

    return 0;
}
