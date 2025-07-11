#include <stdio.h>

int main() {
    float altura;

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    if (altura <= 1.50) {
        printf("O indivíduo é: muito baixo\n");
    } else if (altura <= 1.60) {
        printf("O indivíduo é: baixo\n");
    } else if (altura <= 1.80) {
        printf("O indivíduo é: mediano\n");
    } else {
        printf("O indivíduo é: alto\n");
    }

    return 0;
}
