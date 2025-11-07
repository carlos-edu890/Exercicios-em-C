#include <stdio.h>

int main() {
   float m3, litros;
    printf("Digite um valor em M-Cubicos: ");
    scanf("%f", &m3);

    litros = 1000 * m3;

    printf("Em Metros Cubicos %.1f para Litros %.1f", m3, litros);

    return 0;
}