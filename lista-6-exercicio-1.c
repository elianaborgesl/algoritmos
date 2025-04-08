/*1. Fa�a um programa que carregue um vetor de seis elementos num�ricos inteiros e
mostre:
a. A quantidade de n�meros pares;
b. Quais s�o os n�meros pares;
c. A quantidade de n�meros �mpares;
d. Quais s�o os n�meros �mpares*/
#include <stdio.h>

int main()
{
    int vetor[6];
    int pares = 0;
    int impares = 0;

    printf("Digite seis numeros inteiros:\n");

    for (int i = 0; i < 6; i++)
    {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0)
        {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Quantidade de numeros pares: %d\n", pares);
    printf("Numeros pares: ");

    for (int i = 0; i < 6; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            printf("%d ", vetor[i]);
        }
    }

    printf("\n");

    printf("Quantidade de numeros impares: %d\n", impares);
    printf("Numeros impares: ");

    for (int i = 0; i < 6; i++)
    {
        if (vetor[i] % 2 != 0)
        {
            printf("%d ", vetor[i]);
        }
    }

    printf("\n");

    return 0;
}
