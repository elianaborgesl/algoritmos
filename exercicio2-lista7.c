/*Escrever um algoritmo que lê uma matriz A(15,5) e a escreva (valores randômicos*).
Verifique, a seguir, quais os elementos de A que estão repetidos e quantas vezes cada
um está repetido. Escrever cada elemento repetido com uma mensagem dizendo que
o elemento aparece X vezes em A.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int A[15][5];


    srand(time(0));


    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            A[i][j] = rand() % 10;
        }
    }


    int frequenciaElementos[10] = {0};

    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int elemento = A[i][j];
            frequenciaElementos[elemento]++;
        }
    }


    printf("Elementos repetidos em A:\n");

    for (int i = 0; i < 10; i++) {
        if (frequenciaElementos[i] > 1) {
            printf("%d aparece %d vezes em A.\n", i, frequenciaElementos[i]);
        }
    }

    return 0;
}
