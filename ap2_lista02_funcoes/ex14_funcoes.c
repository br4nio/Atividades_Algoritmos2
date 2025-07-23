#include <stdio.h>

void verificarConsumoCarro(float distanciaKm, float litrosConsumidos) {
    if (litrosConsumidos <= 0) {
        printf("Quantidade de litros consumidos deve ser maior que zero.\n");
        return;
    }

    float consumoKmPorLitro = distanciaKm / litrosConsumidos;

    printf("Consumo: %.2f Km/l\n", consumoKmPorLitro);

    if (consumoKmPorLitro < 8) {
        printf("Venda o carro!\n");
    } else if (consumoKmPorLitro >= 8 && consumoKmPorLitro <= 14) {
        printf("Econômico!\n");
    } else {
        printf("Super econômico!\n");
    }
}

int main() {
    float dist, litros;

    printf("Digite a distância percorrida em Km: ");
    scanf("%f", &dist);

    printf("Digite a quantidade de gasolina consumida em litros: ");
    scanf("%f", &litros);

    verificarConsumoCarro(dist, litros);

    return 0;
}
