#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() { // DELIMITAÇÃO DO BLOCO
    setlocale(LC_ALL, "pt-br.UTF-8");

    // DECLARAÇÃO DE VARIAVEIS

    int idade; // DO TIPO INTEIRO.
    
    
    printf("Qual é a sua idade? \n");
    scanf("%d", &idade);
    printf("Você tem %d anos.\n", idade);

    return 0;
    
}
