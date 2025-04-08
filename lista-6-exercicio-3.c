/*3. Uma escola deseja saber se existem alunos cursando, simultaneamente, as disciplinas
Lógica e Linguagem de Programação. Coloque os números das matrículas dos alunos
que cursam Lógica em um vetor, no máximo 10 alunos. Coloque os números das
matrículas dos alunos que cursam Linguagem de Programação em outro vetor, no
máximo 8 alunos. Mostre o número de matrícula que aparece nos dois vetores*/
#include <stdio.h>

int main()
{
    int matriculaLogica[10];
    int matriculaLinguagem[8];
    int alunosComuns[10]; // aqui a gente vai guardar matrículas comuns
    int qtdAlunosComuns = 0;

    printf("Por favor digite as matriculas dos alunos de Logica ate 10 alunos:\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Matrrcula do aluno de Logica %d: ", i + 1);
        scanf("%d", &matriculaLogica[i]);
    }

    printf("Digite as matriculas dos alunos de Linguagem de Programaçao ate 8 alunos:\n");

    for (int i = 0; i < 8; i++)
    {
        printf("Matricula do aluno de Linguagem de Programaçao %d: ", i + 1);
        scanf("%d", &matriculaLinguagem[i]);
    }

    printf("Numeros de matricula que aparecem em ambos os vetores:\n");

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (matriculaLogica[i] == matriculaLinguagem[j])
            {
                alunosComuns[qtdAlunosComuns] = matriculaLogica[i];
                qtdAlunosComuns++;
            }
        }
    }

    if (qtdAlunosComuns == 0)
    {
        printf("Nenhum aluno cursa ao mesmo tempo Logica e Linguagem de Programaçao.\n");
    }
     else
    {
        for (int i = 0; i < qtdAlunosComuns; i++)
        {
            printf("%d ", alunosComuns[i]);
        }
        printf("\n");
    }

    return 0;
}
