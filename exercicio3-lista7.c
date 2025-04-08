/*3. Escrever um algoritmo que lê uma matriz M(12,13) e divida todos os 13 elementos de
cada uma das 12 linhas de M pelo maior elemento em módulo daquela linha. Escrever
a matriz lida e a modificada*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int M[12][13];

    // Preencher a matriz M com valores (pode ser manualmente ou com números aleatórios)
    printf("Digite os valores da matriz M(12x13):\n");

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            scanf("%d", &M[i][j]);
        }
    }

    // Encontrar o maior elemento em módulo de cada linha e dividir os elementos da linha por ele
    for (int i = 0; i < 12; i++)
    {
        int maximoModulo = 0;

        // Encontrar o maior elemento em módulo
        for (int j = 0; j < 13; j++) {
            int elemento = abs(M[i][j]);
            if (elemento > maximoModulo)
            {
                maximoModulo = elemento;
            }
        }

        // Dividir os elementos da linha pelo maior elemento em módulo
        for (int j = 0; j < 13; j++)
        {
            M[i][j] /= maximoModulo;
        }
    }

    // Imprimir a matriz original e a matriz modificada
    printf("Matriz Original:\n");
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    printf("Matriz Modificada:\n");
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}
