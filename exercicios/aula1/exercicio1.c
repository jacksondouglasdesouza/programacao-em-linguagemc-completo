#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Faça um programa que leia um número inteiro e imprima no console.

int main() {
    setlocale(LC_ALL, "pt-br.UTF-8");

    int numero;
    printf("Digite aqui um número inteiro: \n");
    scanf("%d", &numero);
    printf("Você digitou o número: %d\n", numero);

    return 0;
}

