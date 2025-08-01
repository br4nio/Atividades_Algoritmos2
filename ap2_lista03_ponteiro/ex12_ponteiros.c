#include <stdio.h>
#include <math.h>

void frac(float num, int *inteiro, float *frac) {
    *inteiro = (int)num;
    *frac = num - *inteiro;
}

int main() {
    float numero_real = 123.456;
    int parte_inteira;
    float parte_fracionaria;

    frac(numero_real, &parte_inteira, &parte_fracionaria);

    printf("Número original: %f\n", numero_real);
    printf("Parte inteira: %d\n", parte_inteira);
    printf("Parte fracionária: %f\n", parte_fracionaria);

    return 0;
}
