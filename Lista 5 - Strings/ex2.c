#include <stdio.h>

int main() {
    char frase[50];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    int i = 0;
    char c;

    while(c != '\n') {
        c = frase[i];
        i++;
    }

    printf("A frase tem tamanho %d", i);

    return 0;
}
