#include <stdio.h>

int main() {
    float x, celsius;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &x);

    celsius = 5.0 * (x - 32) / 9.0;

    printf("A temperatura %.1fF em Celsius e %.1fC", x, celsius);

    return 0;
}