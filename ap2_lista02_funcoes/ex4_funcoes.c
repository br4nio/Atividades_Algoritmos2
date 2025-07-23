#include <stdio.h>
#include <math.h>

int QuadradoPerfeito(int num) {
    if (num < 0) {
        return 0;
    }

    int raiz = sqrt(num); 
    return (raiz * raiz == num); 
}

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (QuadradoPerfeito(numero)) {
        printf("%d é um quadrado perfeito.", numero);
    } else {
        printf("%d não é um quadrado perfeito.", numero);
    }

    return 0;
}
