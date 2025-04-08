/*2. Faça um programa que receba 3 números do tipo float, utilizando scanf, e os imprima
na tela. */
#include<stdio.h>
int main()
{
    float peso;
    float altura;
    float valor;

    printf("**************COLETANDO ALGUNS DADOS**************\n");
    printf("  -Insira algum valor em kg:\n  ");
    scanf("%f", &peso);

    printf("  -Insira alguma altura:\n  ");
    scanf("%f", &altura);

    printf("  -Insira um valor em R$ de algum produto:\n  ");
    scanf("%f", &valor);

        printf("\n");

    printf("----Os dados coletados foram:----\n\n");
    printf("  Peso %.2f\n", peso);
    printf("  Altura %.2f\n", altura);
    printf("  Valor em reais R$ %.3f\n", valor);
    printf("  Obrigado, os dados ja foram resgistrados!!\n");



    return 0;
}
