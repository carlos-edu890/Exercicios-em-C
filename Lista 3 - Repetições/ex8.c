#include <stdio.h>

int main() {
    float maior, menor;

    for(int i = 0; i < 10; i++) {
        float x;
        printf("Digite um valor: ");
        scanf("%f", &x);

        if(i == 0) {
            menor = x;
            maior = x;
        } else {
            if (x > maior)
            {
                maior = x;
            } else if(x < menor) {
                menor = x;
            }
        }
    }

    printf("O maior numero foi %.2f e o menor %.2f", maior, menor);

    return 0;
}