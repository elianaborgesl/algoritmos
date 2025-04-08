//Escreva um algoritmo que lê uma matriz M(5,5) e calcula as somas:
//a. Da linha 4 de M
//b. Da coluna 2 de M
//c. Da diagonal principal de M
//d. De todos os elementos da matriz M OBS: Escrever essas somas e a matriz.
#include<stdio.h>
int main()
{
    int i, j, soma=0;
    int matriz[5][5];

    printf("De o valor dos elementos da linha e da coluna:\n");
    for(i=0;i<5; i++)
    {
        printf("Insira o valor do elemento:[%d][%d]", i, j);
        scanf("%d", &matriz[i][j]);
    }
    for(i=0; i <5; i++)
    {
        if(i==4)
        {
            soma= soma+ matriz[i][j];
        }
    }
    printf("\n\n");
    return 0;
}
