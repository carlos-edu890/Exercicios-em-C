#include <stdio.h>

int main() {
    float kg, libras;
    printf("Digite um valor em Kg: ");
    scanf("%f", &kg);

    libras = kg / 0.45;

    printf("Em Quilogramas %.1f para Libras %.1f", kg, libras);

    return 0;
}