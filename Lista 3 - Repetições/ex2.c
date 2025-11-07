#include <stdio.h>

int main() {

    printf("\nEm for\n");
    for(int i = 1; i <= 100; i++) {
        printf("%d ", i);
    }

    int i = 1;

    printf("\nEm while\n");
    while(i <= 100) {
        printf("%d ", i);
        i++;
    }

    int x = 1;

    printf("\nEm do while\n");
    do {
        printf("%d ", x);
        x++;
    } while(x <= 100);

    return 0;
}