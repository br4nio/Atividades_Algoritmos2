#include <stdio.h>

int main()
{
    float matriz[3][3];
    float *ptr = &matriz[0][0];
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++){
            printf("endereço da posição [%d][%d]: %p\n", i, j, (ptr + i*3 + j));
        }
    }

    return 0;
}
