#include <stdio.h>
#include <string.h> 

struct telefone {
    int ddd;
    char numero[15];

int main() {
    struct telefone tel1, tel2;

    printf("Digite o DDD: ");
    scanf("%d", &tel1.ddd);
    printf("Digite o telefone: ");
    scanf("%s", tel1.numero);
    printf("\nDigite o DDD: ");
    scanf("%d", &tel2.ddd);
    printf("Digite o telefone: ");
    scanf("%s", tel2.numero);

    printf("\nTelefones cadastrados:\n");
    printf("(%d) %s\n", tel1.ddd, tel1.numero);
    printf("(%d) %s\n", tel2.ddd, tel2.numero);

    return 0;
}
