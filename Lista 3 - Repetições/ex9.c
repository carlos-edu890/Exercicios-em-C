#include <stdio.h>

int main() {
    int n, i = 0, x = 1;
    printf("Digite um valor: ");
    scanf("%d", &n);

    while (i < n) {
        if ((x % 2) == 1) {
            printf("%d ", x);
            i++;
        }
        x++;
    }


    return 0;
}