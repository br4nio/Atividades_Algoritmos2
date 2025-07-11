#include <stdio.h>

int main() {
    int numeros[5];
    int i;
    int maior, menor;
    float soma = 0, media;

    for(i = 0; i < 5; i++) {
        printf("Entre com o número %d: ", i + 1);
        scanf("%d", &numeros[i]);

        soma += numeros[i];

        if(i == 0) {
            maior = menor = numeros[i];
        } else {
            if(numeros[i] > maior) {
                maior = numeros[i];
            }
            if(numeros[i] < menor) {
                menor = numeros[i];
            }
        }
    }

    media = soma / 5;

    printf("\nOs números digitados são: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\nO maior valor é: %d", maior);
    printf("\nO menor valor é: %d", menor);
    printf("\nA média é: %.1f\n", media);

    return 0;
}
