#include <stdio.h>

int main() {
    int x, y;
    printf("Primeiro numero: ");
    scanf("%d", &x);
    printf("Segundo numero: ");
    scanf("%d", &y);

    if(x > y) {
        printf("O numero %d e maior que %d", x, y);
    } else {
        printf("O numero %d e maior que %d", y, x);
    }

    return 0;
}