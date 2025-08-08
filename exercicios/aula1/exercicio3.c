#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Faça um programa que peça para o usuário digitar 1 N inteiros e imprima
// no console o resultado do quadrado deste número.

int main() {
    setlocale(LC_ALL, "pt-br.UTF-8");

    int numero;

    printf("Digite aqui um número inteiro: \n");
    scanf("%d", &numero);

    int quadradoNumero = numero * numero;

    printf("O quadrado do número digitado é: %d\n", quadradoNumero);
    
    return 0;
}

