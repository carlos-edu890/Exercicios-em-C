#include <stdio.h>

int main() {
    float centimetros, polegadas;
    printf("Digite um valor de Centimetros: ");
    scanf("%f", &centimetros);

    polegadas = centimetros / 2.54;

    printf("Em Centimetros %.1f para Polegadas %.1f", centimetros, polegadas);

    return 0;
}