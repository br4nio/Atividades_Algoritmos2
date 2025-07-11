#include <stdio.h>

int main() {
  
    int vetor[10];
    int i;
    int menor1, menor2, menor3;


    printf("Digite 10 números inteiros:\n");
    for(i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    menor1 = menor2 = menor3 = 999999;

    for(i = 0; i < 10; i++) {
        if(vetor[i] < menor1) {
            menor3 = menor2;
            menor2 = menor1;
            menor1 = vetor[i];
        } else if(vetor[i] < menor2) {
            menor3 = menor2;
            menor2 = vetor[i];
        } else if(vetor[i] < menor3) {
            menor3 = vetor[i];
        }
    }

    printf("%d, %d, %d", menor1, menor2, menor3);

    return 0;
}
