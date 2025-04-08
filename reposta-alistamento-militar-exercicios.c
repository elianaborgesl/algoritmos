/*Uma pessoa � obrigada a realizar o alistamento no ex�rcito brasileiro se for do sexo
masculino e tiver 18 anos. Fa�a um programa que verifique se o usu�rio do seu
programa precisar� passar pelo processo de alistamento ou n�o.*/

#include<stdio.h>

int main(){
    char sexo;
    int idade;

    printf("Digite seu sexo (m) para masculino e (f) para feminino: ");
    scanf("%c", &sexo);

    printf("Qual sua idade: ");
    scanf("%d", &idade);

    if(sexo == 'm' && idade>=18){
        printf("Deve se alistar!");
    }
    else{
        printf("Nao precisa se alistar!");
    }


return 0;
}
