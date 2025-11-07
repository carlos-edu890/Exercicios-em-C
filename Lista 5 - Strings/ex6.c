#include <stdio.h>

int main() {
    char nome[50], sexo;
    int idade;

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    printf("Digite seu sexo [F/M]: ");
    scanf("%c", &sexo);
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(sexo == 'F' && idade < 25) {
        printf("%sACEITA", nome);
    } else {
        printf("%sNAO ACEITA", nome);
    }


    return 0;
}