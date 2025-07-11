#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[26] = {0};
    int i;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z') {
            freq[str[i] - 'A']++;
        }
    }

    printf("Letras repetidas na string: ");
    int found = 0;
    for(i = 0; i < 26; i++) {
        if(freq[i] > 1) {
            printf("%c ", 'a' + i);
            found = 1;
        }
    }

    if(!found) {
        printf("Nenhuma letra repetida.");
    }

    printf("\n");

    return 0;
}
