#include <stdio.h>

int main()
{
    int n1=100, n2=50;

    if(&n1>&n2){
        
        printf("n1 é maior");
    }
    else{
       printf("n2 é maior"); 
    }

    return 0;
}
