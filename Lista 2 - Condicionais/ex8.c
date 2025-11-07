#include <stdio.h>

int main() {
    float n1, n2;
    printf("Digite a Primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a Segunda nota: ");
    scanf("%f", &n2);

    if((n1 >= 0 && n1 <= 10) && (n2 >= 0 && n2 <= 10)) {
        printf("A media do aluno e %.2f", (n1 + n2) / 2);
    } else {
        printf("Notas invalidas!");
    }

    return 0;
}