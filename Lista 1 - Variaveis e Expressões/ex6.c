#include <stdio.h>

int main() {
    float x, fahrenheit;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &x);

    fahrenheit = x * (9.0 / 5.0) + 32;

    printf("A temperatura %.1fC em Fahrenheit e %.1fF", x, fahrenheit);

    return 0;
}