#include <stdio.h>

float converter_para_fahrenheit(float celsius) {
    return celsius * (9.0 / 5.0) + 32.0;
}

int main() {
    float celsius, fahrenheit;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = converter_para_fahrenheit(celsius);

    printf("A temperatura em Fahrenheit é: %.2f°F\n", fahrenheit);

    return 0;
}
