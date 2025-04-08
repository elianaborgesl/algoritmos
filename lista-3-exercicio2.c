#include <stdio.h>

int main() {
    int idade;
    float peso;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    if (idade >= 18 && idade <= 69 && peso >= 50) {
        printf("Voce atende aos requisitos para doar sangue.\n");
    } else {
        printf("Voce nao atende aos requisitos para doar sangue.\n");
    }

    return 0;
}
