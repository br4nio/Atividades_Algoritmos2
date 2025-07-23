#include <stdio.h>
#include <math.h> 

float calcular_hipotenusa(float a, float b) {
    return sqrt(a * a + b * b);
}

int main() {
    float cateto1, cateto2, hipotenusa;

    printf("Digite o valor do primeiro cateto: ");
    scanf("%f", &cateto1);

    printf("Digite o valor do segundo cateto: ");
    scanf("%f", &cateto2);

    hipotenusa = calcular_hipotenusa(cateto1, cateto2);

    printf("A hipotenusa do triângulo é: %.2f\n", hipotenusa);

    return 0;
}
