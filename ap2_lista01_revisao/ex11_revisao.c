#include <stdio.h>
#include <string.h>

int main() {
    char texto[100];
    int i;

    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    printf("String invertida: ");
    for(i = strlen(texto) - 1; i >= 0; i--) {
        printf("%c", texto[i]);
    }

    printf("\n");
    return 0;
}
