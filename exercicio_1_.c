/*1. Faça um programa que tenha 3 variáveis, uma do tipo float, outra do tipo char e, por
último, uma do tipo int. Dê valores a essas variáveis, utilizando scanf, e imprima-as na
tela*/
#include<stdio.h>
int main()
{
    int dia;
    int mes;
    char nome[50];
    float altura;

        printf("****Ola, vou precisar recolher alguns dados de vc!****\n\n");
        printf(" -Insira o dia do seu aniversario sendo somente o dia:\n  ");
        scanf("%d", &dia);

            printf(" -Insira o mes do seu aniversario sendo somente em numeros:\n  ");
            scanf("%d", &mes);

        printf(" -Insira seu nome:\n  ");
        scanf("%s", nome);

            printf(" -Agora poderia me informar a sua altura?:\n  ");
            scanf("%f", &altura);

            printf("\n\n");
            printf("****Legal entao vc se chama %s nasceu no dia %d no mes %d e tem %.2f de altura!****\n", nome, dia, mes, altura);
            printf("            ****Agradecemos pelos dados fornecidos!****\n");

    return 0;
}
