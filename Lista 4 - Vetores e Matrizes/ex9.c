#include<stdio.h>

int main() {
    int matriz[4][4], maior, posI, posJ;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Digite um valor na posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            if(i == 0 && j == 0) {
                maior = matriz[i][j];
            } else {
                if (matriz[i][j] > maior)
                {
                    maior = matriz[i][j];
                    posI = i;
                    posJ = j;
                }
            }
        }
    }

    printf("O maior valor e %d na posicao [%d][%d]", maior, posI, posJ);

    return 0;
}