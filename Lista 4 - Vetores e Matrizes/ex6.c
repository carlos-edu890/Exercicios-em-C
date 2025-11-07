#include <stdio.h>

int main() {
    int matriz[4][4] = {
        {10,4,6,8}, {11,38,2,74},
        {1,0,24,31}, {54,3,5,18}
    };

    int x = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int u = 0; u < 4; u++)
        {
            if(matriz[i][u] > 10) {
                x++;
                printf("%d - %d\n", x, matriz[i][u]);
            }
        }
        
    }
    

    return 0;
}