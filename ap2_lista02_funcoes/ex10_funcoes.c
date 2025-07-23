#include <stdio.h>

void num_maior(int numero1, int numero2){
    
    if(numero1 > numero2){
        printf("o numero %d é maior", numero1);
    }
    else if(numero1 == numero2){
        printf("Os numeros sao iguais");
    }
    else{
        printf("o numero %d é maior", numero2);
    }
    
}

int main() {

    int n1, n2;    
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    
    num_maior(n1, n2);
    
    return 0;
}
