#include <stdio.h>

int main() {
    float x;
    printf("Digite um numero: ");
    scanf("%f", &x);

    printf("A quinta parte de %.2f e %.2f", x, x / 5);

    return 0;
}