#include <stdio.h>

int main() {
    float x;
    printf("Digite o numero: ");
    scanf("%f", &x);

    printf("O quadrado de %.2f e %.2f", x, x * x);

    return 0;
}