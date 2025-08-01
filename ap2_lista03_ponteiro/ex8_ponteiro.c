#include <stdio.h>

int main()
{
    float array[10];
    float *ptr = array; 
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Endereço da posição %d: %p\n", i, ptr + i);
    }

    return 0;
}
