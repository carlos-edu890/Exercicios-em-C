#include <stdio.h>

int main() {
    char nome[50];

    printf("Digite um nome: ");
    fgets(nome, sizeof(nome), stdin);

    int j = 0;
    for (int i = 0; i < sizeof(nome); i++) {
        if (nome[i] != ' ') {
            printf("%c",nome[i]);
            j++;
        }

        if (j == 4) {
            break;
        }
    }
    
    return 0;
}