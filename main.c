#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{

    setlocale(LC_ALL, "Portuguese");

    int a = 5;
    int b = 10;

    int soma = a + b;

    printf("A soma de %d e %d é %d\n", a, b, soma);
    printf("Teste de acentuuação! Lógico, espero que funcione!\n");

    return 0;
}