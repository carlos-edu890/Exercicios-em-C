#include <stdio.h>

int main() {
    char fra1[10], fra2[10];

    printf("Digite uma frase: ");
    fgets(fra1, sizeof(fra1), stdin);

    printf("Digite uma frase: ");
    fgets(fra2, sizeof(fra2), stdin);

    int j = 0;

    for (int i = 0; (fra1[i] != '\n') || (fra2[i] != '\n'); i++){
        if (fra1[i] == ' ') {
            for (int j = i; fra1[j] != '\n'; j++)
            {
                fra1[j] = fra1[j+1];
            }
            
        }

        if (fra2[i] == ' ') {
            for (int j = i; fra2[j] != '\n'; j++)
            {
                fra2[j] = fra2[j+1];
            }
        }

        printf("%d...\n", i);
    }

    for (int i = 0; (fra1[i] != '\n') || (fra2[i] != '\n'); i++)
    {
        if(fra1[i] == fra2[i]) {
            j = 1;
        } else {
            j = -1;
            break;
        }
    }

    printf("As frases sao %d", j);
    

    return 0;
}