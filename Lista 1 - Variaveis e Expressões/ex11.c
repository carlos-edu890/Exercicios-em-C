#include <stdio.h>

int main() {
    float km, ms;
    printf("Digite um velocidade em m/s: ");
    scanf("%f", &ms);

    km = ms * 3.6;

    printf("Velocidade %.2fm/s para Km/h %.2f", ms, km);

    return 0;
}