#include <stdio.h>

int main() {
    int x, y;
    printf("Primeiro numero: ");
    scanf("%d", &x);
    printf("Segundo numero: ");
    scanf("%d", &y);

    if(x > y) {
        printf("O numero %d e maior que %d\n", x, y);
        printf("A diferenca e %d", x - y);
    } else {
        printf("O numero %d e maior que %d\n", y, x);
        printf("A diferenca e %d", y - x);
    }

    return 0;
}