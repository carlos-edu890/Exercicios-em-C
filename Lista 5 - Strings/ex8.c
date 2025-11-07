#include <stdio.h>

int main() {
    char bin[10];

    printf("Digite um numero em binario: ");
    fgets(bin, sizeof(bin), stdin);

    int j = 0;

    for (int i = 0; i < 10; i++)
    {
        if(bin[i] == '1')
            j++;
    }

    printf("Tem %d 1s", j);

    return 0;
}