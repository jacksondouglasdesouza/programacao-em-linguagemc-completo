#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){

    setlocale(LC_ALL, "Portuguese");

    int idade;
    printf("Bem-vindo ao programa de exemplo!\n");

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("A sua idade é: %d anos\n", idade);


    return 0;
}