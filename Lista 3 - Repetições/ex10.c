#include <stdio.h>

int main() {
    int soma = 0, i = 0, x = 1;

    while (i < 50) {
        if ((x % 2) == 0) {
            soma += x;
            i++;
        }
        x++;
    }

    printf("A soma dos 50 primeiros numeros pares e %d", soma);

    return 0;
}