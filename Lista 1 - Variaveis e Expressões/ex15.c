#include <stdio.h>

int main() {
    float radianos, graus;
    printf("Digite um numero em Radianos: ");
    scanf("%f", &radianos);

    graus = radianos * 180 / 3.14;

    printf("Radianos %.1f para Graus %.1f", radianos, graus);

    return 0;
}