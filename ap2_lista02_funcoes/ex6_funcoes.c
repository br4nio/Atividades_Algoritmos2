#include <stdio.h>


int somar_segundos(int h, int m, int s){
    int total;
    
    total = (((h*60)*60)+(m*60)+s);
    
    return total;  
} 


int main() {

    int hora, minuto, segundo, total_segundos;

    printf("DIgite quantas horas: ");
    scanf("%d", &hora);
    printf("Digite quantos minutos: ");
    scanf("%d", &minuto);
    printf("Digite quantos segundos:");
    scanf("%d", &segundo);
    
    
    total_segundos = somar_segundos(hora, minuto, segundo);
    
    printf("o total de segundos é: %d ", total_segundos);
    
    return 0;
}
