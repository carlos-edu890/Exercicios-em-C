#include <stdio.h>

int main() {
    float salario, prestacao;
    printf("Digite o salario: ");
    scanf("%f", &salario);
    printf("Digite a prestacao: ");
    scanf("%f", &prestacao);

    if (prestacao > (salario * 0.2)) {
        printf("Emprestimo nao concedido");
    } else {
        printf("Emprestimo concedido");
    }

    return 0;
}