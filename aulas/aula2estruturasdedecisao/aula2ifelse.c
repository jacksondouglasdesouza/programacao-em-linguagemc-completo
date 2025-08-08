#include <stdio.h>
#include <locale.h>

int main(){

    // Estruturas de Decisão IF, ELSE IF e ELSE.

    setlocale(LC_ALL, "pt-br.UTF-8");

    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if(idade < 18){
        printf("Você é menor de idade!\n");
    } else if(idade >= 18 && idade <= 60){
        printf("Você é adulto!\n");
    } else {
        printf("Você é idoso!\n");
    }
    

    return 0;
}