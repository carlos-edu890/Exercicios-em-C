#include <stdio.h>

int main() {
    int i = 0, media = 0;

    while (i < 10)
    {
        int x;
        printf("Digite um numero [%d]: ", i);
        scanf("%d", &x);
        if(x > 0) {
            media += x;
            i++;
        }
    }

    printf("A media e %d", media / 10);

    return 0;
}