#include<stdio.h>

int main() {
    int matriz[4][4], x, posI = -1, posJ = -1;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Digite um valor na posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite o valor a ser encontrado: ");
    scanf("%d", &x);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (x == matriz[i][j]) {
                posI = i;
                posJ = j;
            }
        }
    }

    if (posI != -1) {
        printf("O valor %d esta na posicao [%d][%d]", x, posI, posJ);
    } else {
        printf("O valor %d nao foi encontrado", x);
    }

    return 0;
}