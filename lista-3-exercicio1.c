#include <stdio.h>

int main() {
    int num1, num2;

    
    printf("hello Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    
    if (num1 > num2) {
        printf("O maior numero eh %d e o menor eh %d.\n", num1, num2);
    } else if (num2 > num1) {
        printf("O maior numero eh %d e o menor eh %d.\n", num2, num1);
    } else {
        printf("Os numeros sao iguais.\n");
    }

    return 0;
}
