#include <stdio.h>
#include <math.h>

int main() {
    int x;
    printf("====== Calculando Raiz Quadrada ======\n");
    printf("Digite um numero: ");
    scanf("%d", &x);

    if (x >= 0)
    {
        printf("A Raiz quadrada de %d e %.3f", x,sqrt(x));
    }else {
        printf("Nao e possivel calcular.");
    }
    

    return 0;
}