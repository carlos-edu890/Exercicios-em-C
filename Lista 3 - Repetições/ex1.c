#include <stdio.h>

int main() {
    int i = 1, count = 0;
    
    printf("Os 5 primeiros multiplos de 3:\n");

    while (count != 5) {
        if ((i % 3) == 0) {
            printf("%d ", i);
            count++;
        }
        i++;
    }

    return 0;
}