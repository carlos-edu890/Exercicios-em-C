#include <stdio.h>

int main() {
    int vetor[8];
    for (int i = 0; i < 8; i++)
    {
        printf("Digite um valor na posicao %d: ", i+1);
        scanf("%d", &vetor[i]);  
    }

    int x, y;

    printf("Qual posicao: ");
    scanf("%d", &x);
    printf("Qual posicao: ");
    scanf("%d", &y);
    
    printf("Soma dos valores na posicao %d(%d) e %d(%d), sao %d", x, vetor[x-1], y, vetor[y-1], vetor[x-1] + vetor[y-1]);

    return 0;
}