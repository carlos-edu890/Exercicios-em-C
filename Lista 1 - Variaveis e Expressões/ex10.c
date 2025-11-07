#include <stdio.h>

int main() {
    float km, ms;
    printf("Digite um velocidade em Km/h: ");
    scanf("%f", &km);

    ms = km / 3.6;

    printf("Velocidade %.2fKm/h para m/s %.2f", km, ms);

    return 0;
}