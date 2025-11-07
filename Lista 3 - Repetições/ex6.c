#include <stdio.h>

int main() {
    int x, media = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &x);
        media += x;
    }

    printf("A soma dos valores foi: %d", media / 10);
    

    return 0;
}