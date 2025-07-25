#include <stdio.h>

int main()
{
    int inteiro, *ptr_inteiro;
    float real, *ptr_real;
    char caracter, *ptr_caracter;


    inteiro = 10;
    real = 5.5;
    caracter = 'A';

    ptr_inteiro = &inteiro;
    ptr_real = &real;
    ptr_caracter = &caracter;

    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caracter: %c\n", caracter);

    *ptr_inteiro = 20;
    *ptr_real = 6.28;
    *ptr_caracter = 'Z';

    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caracter: %c\n", caracter);

    return 0;
}
