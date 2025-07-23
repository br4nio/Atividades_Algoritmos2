#include <stdio.h>

float volume_cilindro(float raio, float altura) {
    float pi = 3.141592;
    return pi * raio * raio * altura;
}

int main() {
    float raio, altura, volume;

    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);

    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);

    volume = volume_cilindro(raio, altura);

    printf("O volume do cilindro é: %.2f\n", volume);

    return 0;
}
