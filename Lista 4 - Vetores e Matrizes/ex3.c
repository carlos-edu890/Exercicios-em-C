#include <stdio.h>
#include <math.h>

int main() {
    float vetor[10], quadrado[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o valor na posicao %d: ", i);
        scanf("%f", &vetor[i]);

        quadrado[i] = pow(vetor[i], 2);
    }
    
    printf("Vetor = ");
    for (int i = 0; i < 10; i++)
    {
        printf("%.1f ", vetor[i]);
    }
    
    printf("\nQuadrado = ");
    for (int i = 0; i < 10; i++)
    {
        printf("%.1f ", quadrado[i]);
    }

    return 0;
}