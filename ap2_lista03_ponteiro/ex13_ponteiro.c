#include <stdio.h>
#include <math.h>

void calc_esfera(float R, float *area, float *volume) {
    *area = 4 * M_PI * R * R;
    *volume = (4.0 / 3.0) * M_PI * R * R * R;
}

int main() {
    float raio;
    float area_superficie;
    float volume_esfera;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    calc_esfera(raio, &area_superficie, &volume_esfera);

    printf("Área da superfície: %.2f\n", area_superficie);
    printf("Volume: %.2f\n", volume_esfera);

    return 0;
}
