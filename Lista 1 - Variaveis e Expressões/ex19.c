#include <stdio.h>

int main() {
   float litros, m3;
    printf("Digite um valor em Litros: ");
    scanf("%f", &litros);

    m3 = litros / 1000;

    printf("Em Litros %.1f para Metros Cubicos %.1f", litros, m3);

    return 0;
}