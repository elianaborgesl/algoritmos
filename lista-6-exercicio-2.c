/*2. Faça um programa que carregue um vetor com oito números inteiros e mostre:
a. Os números múltiplos de dois;
b. Os números múltiplos de três;
c. Os números múltiplos de dois e de três.*/
#include <stdio.h>

int main()
{
    int vetor[8];

    printf("Digite oito numeros inteiros:\n");

    for (int i = 0; i < 8; i++)
    {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Numeros multiplos de dois: ");
    for (int i = 0; i < 8; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");

    printf("Numeros multiplos de tres: ");
    for (int i = 0; i < 8; i++)
    {
        if (vetor[i] % 3 == 0)
        {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");

    printf("Numeros multiplos de dois e de tres: ");
    for (int i = 0; i < 8; i++) {
        if (vetor[i] % 2 == 0 && vetor[i] % 3 == 0) {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");

    return 0;
}
