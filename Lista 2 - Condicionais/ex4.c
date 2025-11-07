#include <stdio.h>
#include <math.h>

int main() {
    int x;
    printf("====== Calculando Raiz Quadrada ======\n");
    printf("Digite um numero: ");
    scanf("%d", &x);

    if (x >= 0)
    {
        printf("A Raiz quadrada de %d e %.3f\n", x, sqrt(x));
        printf("O Quadrado de %d e %.0f", x, pow(x, 2));
    }else {
        printf("Numero invalido!");
    }

    return 0;
}