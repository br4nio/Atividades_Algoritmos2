
#include <stdio.h>
#include <string.h>

int main()
{
	char in_vertebrado[12], grupo[10], alimentacao[15];

	printf("Digite se o animal C) vertebrado ou invertebrado: ");
	scanf("%s", in_vertebrado);

	printf("Digite o grupo (ave, mamifero, inseto, anelideo): ");
	scanf("%s", grupo);

	printf("Digite a alimentaC'C#o (carnivoro, onivoro, herbivoro, hematofago): ");
	scanf("%s", alimentacao);

	if(strcmp(in_vertebrado, "vertebrado") == 0) {
		if(strcmp(grupo, "ave") == 0) {
			if(strcmp(alimentacao, "carnivoro") == 0) {
				printf("aguia");
			}
			else if(strcmp(alimentacao, "onivoro") == 0) {
				printf("Pomba");
			}
		}
		else if(strcmp(grupo, "mamifero") == 0) {
			if(strcmp(alimentacao, "onivoro") == 0) {
				printf("Homem");
			}
			else if(strcmp(alimentacao, "herbivoro") == 0) {
				printf("Vaca");
			}
		}
	}
	else if(strcmp(in_vertebrado, "invertebrado") == 0) {
		if(strcmp(grupo, "inseto") == 0) {
			if(strcmp(alimentacao, "hematofago") == 0) {
				printf("Pulga");
			}
			else if(strcmp(alimentacao, "herbivoro") == 0) {
				printf("Lagarta");
			}
		}
		else if(strcmp(grupo, "anelideo") == 0) {
			if(strcmp(alimentacao, "hematofago") == 0) {
				printf("Sanguessuga");
			}
			else if(strcmp(alimentacao, "onivoro") == 0) {
				printf("Minhoca");
			}
		}
	}

	return 0;
}
