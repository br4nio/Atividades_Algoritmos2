
#include <stdio.h>

int main()
{
    int n1, n2;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    
    printf("o endereço da n1 %p\n", &n1);
    printf("o endereço da n2 %p\n", &n2);
    
        if(&n1 > &n2){
        
        printf("O numero %d é maior", n1);
        
    }
    else{
       printf("O numero %d é maior", n2); 
    
    }
    
    
    return 0;
}
