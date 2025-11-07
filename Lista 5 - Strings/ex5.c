#include <stdio.h>

int main() {
    char nome[50];

    printf("Digite um nome: ");
    fgets(nome, sizeof(nome), stdin);

    int j = 0;
    char c;

    for (int i = 0; c != '\n'; i++) {
        if (nome[i] != ' ') {
            j++;
        }
        c = nome[i+1];
    }

    printf("Tem %d letras", j);
    
    
    return 0;
}