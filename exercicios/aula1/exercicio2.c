#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Faça um programa que peça para o usuário digitar 3 valores
// inteiros e imprima a soma deles.

int main() {
    setlocale(LC_ALL, "pt-br.UTF-8");

    int numero1, numero2;
    
    printf("Digite aqui um número inteiro: \n");
    scanf("%d", &numero1);

    printf("Digite outro número inteiro: \n");
    scanf("%d", &numero2);

    int soma = numero1 + numero2;
    
    printf("A soma dos números digitados é: %d\n", soma);
    
    return 0;
}

