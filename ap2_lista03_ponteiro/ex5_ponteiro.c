#include <stdio.h>

void trocar(int *a, int *b){
    int temp;
    if(*a < *b){
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main()
{
    int Nm1, Nm2;

    printf("Digite dois numeros:");
    scanf("%d %d", &Nm1, &Nm2);

    trocar(&Nm1, &Nm2);

    printf("Maior numero: %d\n", Nm1);
    printf("menor numero: %d", Nm2);

    return 0;
}
