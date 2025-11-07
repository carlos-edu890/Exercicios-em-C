#include <stdio.h>

int main() {
    char bin[10];

    printf("Digite um numero em binario: ");
    fgets(bin, sizeof(bin), stdin);

    for (int i = 0; i < 10; i++)
    {
        if(bin[i] == '0')
            bin[i] = '1';
    }

    printf("Apos trocar os '0' por '1' %s", bin);

    return 0;
}