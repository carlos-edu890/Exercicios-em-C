#include <stdio.h>

int main() {
    float x, kelvin;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &x);

    kelvin = x + 273.15;

    printf("A temperatura %.1fC em Kelvin %.1fK", x, kelvin);

    return 0;
}