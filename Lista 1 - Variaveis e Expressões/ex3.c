#include <stdio.h>

int main() {
    int x, y, z;

    printf("Digite o primeiro numero: ");
    scanf("%d", &x);
    printf("Digite o segundo numero: ");
    scanf("%d", &y);
    printf("Digite o terceiro numero: ");
    scanf("%d", &z);

    printf("A soma dos numeros e %d", x + y + z);

    return 0;
}