#include <stdio.h>

int main() {
    float graus, radiano;
    printf("Digite um numero em graus: ");
    scanf("%f", &graus);

    radiano = graus * 3.14 / 180;

    printf("De graus %.1f para radianos %.3f", graus, radiano);

    return 0;
}