#include <stdio.h>

int main() {
    float x, celcius;
    printf("Digite a temperatura em Kelvin: ");
    scanf("%f", &x);

    celcius = x - 273.15;

    printf("A temperatura %.1fK em Celsius %.1fC", x, celcius);

    return 0;
}