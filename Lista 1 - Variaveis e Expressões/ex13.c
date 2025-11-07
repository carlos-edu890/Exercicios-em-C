#include <stdio.h>

int main() {
    float x, milhas;
    printf("Digite a distancia em Km: ");
    scanf("%f", &x);

    milhas = x / 1.61;

    printf("Distancia %.2fkm e em %.2fmi", x, milhas);

    return 0;
}