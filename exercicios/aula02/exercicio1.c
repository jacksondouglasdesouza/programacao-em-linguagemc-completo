#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    // FAÇA UM PROGRAMA QUE LEIA TRÊS VALORES
    // APRESENTE COM RESULTADO A SOMA DO QUADRADO DOS VALORES LIDOS.

    setlocale(LC_ALL, "pt-br.UTF-8");

    int value1, value2, value3;

    printf("Digite um número inteiro: ");
    scanf("%d", &value1);

    printf("Digite outro número inteiro: ");
    scanf("%d", &value2);

    printf("Digite outro numero inteiro: ");
    scanf("%d", &value3);

    int somaDosQuadrados = (value1 * value1) + (value2 * value2) + (value3 * value3);

    printf("A soma dos quadrados é: %d\n", somaDosQuadrados);

    return 0;
}