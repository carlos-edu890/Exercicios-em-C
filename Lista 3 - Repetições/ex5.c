#include <stdio.h>

int main() {
    int x, soma = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &x);
        soma += x;
    }

    printf("A soma dos valores foi: %d", soma);
    

    return 0;
}