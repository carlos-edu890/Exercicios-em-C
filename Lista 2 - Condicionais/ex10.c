#include <stdio.h>

int main() {
    float altura;
    char sexo;
    printf("Digite a altura [em decimal]: ");
    scanf("%f", &altura);
    while (getchar() != '\n');
    printf("Digite o sexo [M/F]: ");
    scanf("%c", &sexo);

    if(sexo == 'M') {
        printf("O peso ideal e %.1fKg", (72.7 * altura) - 58);
    } else if (sexo == 'F')
    {
        printf("O peso ideal e %fKg", (62.1 * altura) - 44.7);
    }
    

    return 0;
}