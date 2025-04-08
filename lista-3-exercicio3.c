#include <stdio.h>

int main() {
    int dia, mes, ano;
    int dataValida = 1; // 1 representa verdadeiro, 0 representa falso

    
    printf(" Ola Digite sua data de nascimento.\n");
    printf("Dia: ");
    scanf("%d", &dia);
    printf("Mes: ");
    scanf("%d", &mes);
    printf("Ano: ");
    scanf("%d", &ano);

    
    if (mes < 1 || mes > 12) {
        dataValida = 0;
    }

    
    if (dia < 1 || dia > 31) {
        dataValida = 0;
    }

    // Verifica casos especiais para meses com menos de 31 dias
    if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) {
        dataValida = 0;
    }

    // Verifica o caso de fevereiro
    if (mes == 2) {
        int bissexto = (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0));
        if ((dia > 29) || (dia == 29 && !bissexto)) {
            dataValida = 0;
        }
    }

    // Exibe o resultado
    if (dataValida) {
        printf("Data valida: %02d/%02d/%04d\n", dia, mes, ano);
    } else {
        printf("Data invalida!\n");
    }

    return 0;
}
