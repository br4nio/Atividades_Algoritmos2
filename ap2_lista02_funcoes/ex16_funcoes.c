#include <stdio.h>

void desenha_linha(int quantidade) {
    for(int i = 0; i < quantidade; i++) {
        printf("=");
    }
    printf("\n");
}

int main() {
    int n;

    printf("Digite quantos sinais de igual deseja: ");
    scanf("%d", &n);

    desenha_linha(n);

    return 0;
}
