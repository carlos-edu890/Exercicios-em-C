#include <stdio.h>

int main() {
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);

    int ehPar = x % 2;

    if(ehPar == 0) {
        printf("O numero %d e par", x);
    } else {
        printf("O numero %d e impar", x);
    }

    return 0;
}