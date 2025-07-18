#include <stdio.h>

void im_par(int numero) {
    if (numero == 0) {
        printf("0");
    }
    else if (numero % 2 == 0) {
        printf("1");
    }
    else if (numero < 0) {
        printf("-1");
    }
}

int main() {
    
    int num;
    
    printf("digite o numero: ");
    scanf("%d", &num);
    
    im_par(num);
    
    return 0;
}
