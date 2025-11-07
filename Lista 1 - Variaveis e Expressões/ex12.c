#include <stdio.h>

int main() {
    float x, km;
    printf("Digite a distancia em Milhas: ");
    scanf("%f",&x);

    km = 1.61 * x;

    printf("Distancia %.2fmi e em %.2fkm", x, km);

    return 0;
}