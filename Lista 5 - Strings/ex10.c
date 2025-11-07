#include <stdio.h>

int main() {
    char frase[20];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    for (int i = 0; i < 20; i++)
    {
        if (frase[i] == '\n') {
            for (int j = i; j >= 0; j--)
            {
                printf("%c", frase[j]);
            }
            break;
        }
    }

    return 0;
}