#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    // 3 amigos jogaramm na loteria
    // Caso eles ganhem, o prêmio deve ser dividido proporcionalmente ao valor que cada um contribuio
    // para a realização do jogo. 
    // Faça um programa que leia quanto cada apostador investiu
    // e calcule o valor que cada um deve receber caso ganhe.
    // baseando-se no valor que cada um investiu.

    setlocale(LC_ALL, "pt-BR.UTF-8");

    double investimento1, investimento2, investimento3, premio, totalInvestimento;

    printf("Digite o valor do investimento do primeiro amigo: ");
    scanf("%lf", &investimento1);

    printf("Digite o valor do investimento do segundo amigo: ");
    scanf("%lf", &investimento2);

    printf("Digite o valor do investimento do terceiro amigo: ");
    scanf("%lf", &investimento3);

    double percentual1, percentual2, percentual3;

    totalInvestimento = investimento1 + investimento2 + investimento3;


    percentual1 = investimento1 / totalInvestimento;
    percentual2 = investimento2 / totalInvestimento;
    percentual3 = investimento3 / totalInvestimento;

    printf("Digite o valor do prêmio: ");
    scanf("%lf", &premio);

    double premioAmigo1 = percentual1 * premio;
    double premioAmigo2 = percentual2 * premio;
    double premioAmigo3 = percentual3 * premio;

    printf("\n###############################################################\n");

    printf("O primeiro amigo tem um percentual de %.2lf%% do prêmio\n", percentual1);
    printf("O primeiro amigo deve receber: %.2lf\n\n", premioAmigo1);

    //--
    printf("O segundo amigo tem um percentual de %.2lf%% do prêmio\n", percentual2);
    printf("O segundo amigo deve receber: %.2lf\n\n", premioAmigo2);

    //-- 

    printf("O terceiro amigo tem um percentual de %.2lf%% do prêmio\n", percentual3);
    printf("O terceiro amigo deve receber: %.2lf\n\n", premioAmigo3);

    printf("###############################################################\n");

    return 0;
}