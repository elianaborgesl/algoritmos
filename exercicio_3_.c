/*3.Faça um programa que receba 4 números inteiros positivos, calcule a média desses
números e imprima o resultado na tela.
Exemplo: Entradas: 2, 5, 15, 13 - Processamento: (2 + 5 + 15 + 13)/4 - Saída: 8 */
#include <stdio.h>

int main()
{
    int numero1, numero2, numero3, numero4;
    float media;

    printf("---------CALCULANDO A MEDIA---------\n");
    printf("-Insira quatro numeros inteiros positivos:\n");
    if (scanf("%d %d %d %d", &numero1, &numero2, &numero3, &numero4) == 4)
    {

        if (numero1 >= 0 && numero2 >= 0 && numero3 >= 0 && numero4 >= 0)
        {

            media = (float)(numero1 + numero2 + numero3 + numero4) / 4;

            printf("A media dos numeros eh: %.2f\n", media);
        }
        else
        {
            printf("Por favor, insira apenas numeros inteiros positivos.\n");
        }
    }
            else
            {
                printf("Por favor, insira quatro números inteiros válidos.\n");
            }
printf("\n OBRIGADA, ATE A PROXIMA!!!\n");
    return 0;
}
