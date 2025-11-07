#include <stdio.h>

int main() {
    int vetor[6];

    for (int i = 0; i < 6; i++)
    {
        printf("Digite o valor na posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
    
    printf("Vetor = ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", vetor[i]);
    }
    

    return 0;
}