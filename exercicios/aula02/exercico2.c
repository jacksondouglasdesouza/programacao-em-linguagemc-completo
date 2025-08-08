#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    // LEIA QUATRO NOTAS
    // CALCULE A MÉDIA ARITMÉTICA E MOSTRE O RESULTADO.

    setlocale(LC_ALL, "pt-BR.UTF-8");

    float nota1, nota2, nota3, nota4, media;

    printf("Digite a sua primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a sua segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a sua terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite a sua quarta nota: ");
    scanf("%f", &nota4);
    
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    printf("A média aritmética é: %.2f\n", media);

    return 0;
}