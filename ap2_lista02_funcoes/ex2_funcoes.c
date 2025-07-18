#include <stdio.h>
#include <string.h>

void imprimir_data_extenso(int dia, int mes, int ano) {
    char mes_extenso[20];

    if (mes == 1) strcpy(mes_extenso, "janeiro");
    else if (mes == 2) strcpy(mes_extenso, "fevereiro");
    else if (mes == 3) strcpy(mes_extenso, "março");
    else if (mes == 4) strcpy(mes_extenso, "abril");
    else if (mes == 5) strcpy(mes_extenso, "maio");
    else if (mes == 6) strcpy(mes_extenso, "junho");
    else if (mes == 7) strcpy(mes_extenso, "julho");
    else if (mes == 8) strcpy(mes_extenso, "agosto");
    else if (mes == 9) strcpy(mes_extenso, "setembro");
    else if (mes == 10) strcpy(mes_extenso, "outubro");
    else if (mes == 11) strcpy(mes_extenso, "novembro");
    else if (mes == 12) strcpy(mes_extenso, "dezembro");
    else {
        printf("Mês inválido\n");
        return;
    }

    printf("%d de %s de %d\n", dia, mes_extenso, ano);
}

int main() {
    int dia, mes, ano;

    printf("Digite o dia: ");
    scanf("%d", &dia);

    printf("Digite o mês: ");
    scanf("%d", &mes);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    imprimir_data_extenso(dia, mes, ano);

    return 0;
}
