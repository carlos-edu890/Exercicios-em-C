#include <stdio.h>

int main() {
    char nome[50];

    printf("Digite seu nome completo: ");
    fgets(nome, 50, stdin);

    printf("Ola, %s", nome);

    return 0;
}