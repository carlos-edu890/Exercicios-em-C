#include <stdio.h>

int main() {
    int vetor[6] = {1, 0, 5, -2, -5, 7}, soma = 0;

    for(int i = 0; i < 6; i++) {
        if(i == 0 || i == 1 || i == 5) {
            soma += vetor[i];
        }

        if(i == 4) {
            vetor[i] = 100;
        }
    }

    printf("Soma dos numeros na posicao [0, 1, 5]: %d\nVetor = ", soma);

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", vetor[i]);
    }
    

    return 0;
}