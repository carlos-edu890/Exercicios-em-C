#include <stdio.h>

int main() {
    int vetor[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor na posicao %d: ", i+1);
        scanf("%d", &vetor[i]);  
    }

    int x = 0;

    for (int i = 0; i < 10; i++)
    {
        if((vetor[i] % 2) == 0) {
            x++;
            printf("%d - %d\n", x, vetor[i]);
        }
    }
    

    return 0;
}