#include <stdio.h>

int main() {
    float polegadas, centimetros;
    printf("Digite um valor em Polegadas: ");
    scanf("%f", &polegadas);

    centimetros = polegadas * 2.54;

    printf("Em Polegadas %.1f para Centimetros %.1f", polegadas, centimetros);

    return 0;
}