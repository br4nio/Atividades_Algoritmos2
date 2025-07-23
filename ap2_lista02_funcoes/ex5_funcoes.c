#include <stdio.h>
#define PI 3.141592653589793

double volumeEsfera(double raio) {
    return (4.0 / 3.0) * PI * (raio * raio * raio);
}

int main() {
    double raio;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    double volume = volumeEsfera(raio);

    printf("O volume da esfera com raio %.2lf é: %.2lf\n", raio, volume);

    return 0;
}
