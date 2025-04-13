#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void exercicio1()
{
    printf("OI\n");
}

void exercicio2(char texto[])
{
    printf("%s\n", texto);
}

char *exercicio3(char texto[])
{
    printf("%s\n", texto);
    return "Ok";
}

void exercicio4(float a, float b, float c)
{
    float delta = b * b - 4 * a * c;
    
    if (delta < 0)
    {
        printf("Nao ha raizes reais.\n");
    }
    else
    {
        float x1 = (-b + sqrt(delta)) / (2 * a);
        float x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raizes: %.2f e %.2f\n", x1, x2);
    }
}

void exercicio5(int segundos)
{
    int horas = segundos / 3600;
    segundos %= 3600;
    int minutos = segundos / 60;
    segundos %= 60;

    printf("%d hora(s), %d minuto(s), %d segundo(s)\n", horas, minutos, segundos);
}

int exercicio6(int anos, int meses, int dias)
{
    return anos * 365 + meses * 30 + dias;
}

int exercicio7(int num)
{
    int soma = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            soma += i;
        }
    }
    return soma == num ? 1 : 0;
}

void exercicio8(int idade, char *categoria)
{
    if (idade >= 5 && idade <= 7)
    {
        sprintf(categoria, "Infantil A");
    }
    else if (idade >= 8 && idade <= 10)
    {
        sprintf(categoria, "Infantil B");
    }
    else if (idade >= 11 && idade <= 13)
    {
        sprintf(categoria, "Juvenil A");
    }
    else if (idade >= 14 && idade <= 17)
    {
        sprintf(categoria, "Juvenil B");
    }
    else if (idade >= 18)
    {
        sprintf(categoria, "Adulto");
    }
    else
    {
        sprintf(categoria, "Sem categoria");
    }
}

int exercicio9(int valor)
{
    return valor >= 0 ? 1 : 0;
}

int exercicio10(int valor)
{
    return valor % 2 == 0 ? 1 : 0;
}

char exercicio11(float media)
{
    if (media >= 0 && media <= 4.9)
    {
        return 'D';
    }
    else if (media > 4.9 && media <= 6.9)
    {
        return 'C';
    }
    else if (media > 6.9 && media <= 8.9)
    {
        return 'B';
    }
    else if (media > 8.9 && media <= 10)
    {
        return 'A';
    }
    else
    {
        return 'X'; // invalido
    }
}

void exercicio12(int a, int b, int c)
{
    int temp;
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    printf("Ordenado: %d %d %d\n", a, b, c);
}

void exercicio13(float x, float y, float z)
{
    if (x < y + z && y < x + z && z < x + y)
    {
        if (x == y && y == z)
        {
            printf("Triangulo Equilatero\n");
        }
        else if (x == y || y == z || x == z)
        {
            printf("Triangulo Isosceles\n");
        }
        else
        {
            printf("Triangulo Escaleno\n");
        }
    }
    else
    {
        printf("Nao formam um triangulo\n");
    }
}

float exercicio14()
{
    float valor, soma = 0;
    int count = 0;

    printf("Digite valores positivos (negativo para parar):\n");
    while (1)
    {
        scanf("%f", &valor);
        if (valor < 0)
        {
            break;
        }
        soma += valor;
        count++;
    }

    return count == 0 ? 0 : soma / count;
}

int exercicio15(int x, int z)
{
    int resultado = 1;
    for (int i = 0; i < z; i++)
    {
        resultado *= x;
    }
    return resultado;
}

int main()
{
    int opcao;

    do
    {
        printf("\nMenu de Exercicios:\n");
        printf("1 - Exercicio 1\n");
        printf("2 - Exercicio 2\n");
        printf("3 - Exercicio 3\n");
        printf("4 - Exercicio 4\n");
        printf("5 - Exercicio 5\n");
        printf("6 - Exercicio 6\n");
        printf("7 - Exercicio 7\n");
        printf("8 - Exercicio 8\n");
        printf("9 - Exercicio 9\n");
        printf("10 - Exercicio 10\n");
        printf("11 - Exercicio 11\n");
        printf("12 - Exercicio 12\n");
        printf("13 - Exercicio 13\n");
        printf("14 - Exercicio 14\n");
        printf("15 - Exercicio 15\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                exercicio1();
                break;
            case 2:
            {
                char texto[100];
                printf("Digite o texto: ");
                getchar();
                fgets(texto, sizeof(texto), stdin);
                exercicio2(texto);
                break;
            }
            case 3:
            {
                char texto[100];
                printf("Digite o texto: ");
                getchar();
                fgets(texto, sizeof(texto), stdin);
                printf("%s\n", exercicio3(texto));
                break;
            }
            case 4:
            {
                float a, b, c;
                printf("Digite os valores de a, b e c: ");
                scanf("%f %f %f", &a, &b, &c);
                exercicio4(a, b, c);
                break;
            }
            case 5:
            {
                int segundos;
                printf("Digite o tempo em segundos: ");
                scanf("%d", &segundos);
                exercicio5(segundos);
                break;
            }
            case 6:
            {
                int anos, meses, dias;
                printf("Digite anos, meses e dias: ");
                scanf("%d %d %d", &anos, &meses, &dias);
                printf("Total em dias: %d\n", exercicio6(anos, meses, dias));
                break;
            }
            case 7:
            {
                int num;
                printf("Digite um numero: ");
                scanf("%d", &num);
                if (exercicio7(num))
                {
                    printf("Numero perfeito\n");
                }
                else
                {
                    printf("Nao e perfeito\n");
                }
                break;
            }
            case 8:
            {
                int idade;
                char categoria[20];
                printf("Digite a idade: ");
                scanf("%d", &idade);
                exercicio8(idade, categoria);
                printf("Categoria: %s\n", categoria);
                break;
            }
            case 9:
            {
                int valor;
                printf("Digite o valor: ");
                scanf("%d", &valor);
                printf("%s\n", exercicio9(valor) ? "Positivo" : "Negativo");
                break;
            }
            case 10:
            {
                int valor;
                printf("Digite o valor: ");
                scanf("%d", &valor);
                printf("%s\n", exercicio10(valor) ? "Par" : "Impar");
                break;
            }
            case 11:
            {
                float media;
                printf("Digite a media final: ");
                scanf("%f", &media);
                printf("Conceito: %c\n", exercicio11(media));
                break;
            }
            case 12:
            {
                int a, b, c;
                printf("Digite tres numeros: ");
                scanf("%d %d %d", &a, &b, &c);
                exercicio12(a, b, c);
                break;
            }
            case 13:
            {
                float x, y, z;
                printf("Digite os lados do triangulo: ");
                scanf("%f %f %f", &x, &y, &z);
                exercicio13(x, y, z);
                break;
            }
            case 14:
                printf("Media: %.2f\n", exercicio14());
                break;
            case 15:
            {
                int x, z;
                printf("Digite X e Z: ");
                scanf("%d %d", &x, &z);
                printf("Resultado: %d\n", exercicio15(x, z));
                break;
            }
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }

    } while (opcao != 0);

    return 0;
}
