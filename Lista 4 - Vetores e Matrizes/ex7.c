#include <stdio.h>

int main() {
    int matriz[5][5] = {
        {1,0,0,0,0}, {0,1,0,0,0},
        {0,0,1,0,0}, {0,0,0,1,0},
        {0,0,0,0,1}
    };

    printf("          1  2  3  4  5\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Linha %d:  ", i+1);
        for (int u = 0; u < 5; u++)
        {
            printf("%d  ", matriz[i][u]);
        }
        printf("\n");
    }
    

    return 0;
}