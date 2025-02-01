#include <stdio.h>

int main()
{

    //numero de alunos(int), turma(char), notas(1,2,3,4)(float), media para passar(float), nome do aluno(char). 
    //idade(int), sexo(char), media do aluno(float), media da turma(float).

    char turma;
    int numero_alunos;
    float media_turma;

    char nome_aluno[50][100];
    char sexo[50];
    int idade[50];

    float nota1[50];
    float nota2[50];
    float nota3[50];
    float nota4[50];

    float media_aluno[50];


    printf("Informe a turma: \n");
    scanf("%s", &turma);

    printf("Informe o numero de alunos na turma: \n");
    scanf("%d", &numero_alunos);


    for(int x = 0; x < numero_alunos; x++)
    {

        printf("Qual o nome do %d° aluno: \n", x+1);
        scanf(" %s", &nome_aluno[x]);

        printf("Idade do aluno: \n", x+1);
        scanf(" %d", &idade[x]);

        printf("Sexo do aluno: \n", x+1);
        scanf(" %s", &sexo[x]);

    }

    printf("Os %d alunos foram cadastrados com sucesso! \n", numero_alunos);

    for(int x = 0;x < numero_alunos; x++)
    {

        printf("Qual a nota do aluno %s na primeira prova: \n", nome_aluno[x]);
        scanf("%f", &nota1[x]);

        printf("Qual a nota do aluno %s na segunda prova: \n", nome_aluno[x]);
        scanf("%f", &nota2[x]);

        printf("Qual a nota do aluno %s na terceira prova: \n", nome_aluno[x]);
        scanf("%f", &nota3[x]);

        printf("Qual a nota do aluno %s na ultima prova: \n", nome_aluno[x]);
        scanf("%f", &nota4[x]);

        media_aluno[x] = (nota1[x] + nota2[x] + nota3[x] + nota4[x]) /4;

    }

    for(int x = 0;x < numero_alunos; x++)
    {

        if(media_aluno[x] >= 7)
        {

            printf("Parabéns o aluno %s foi aprovado com a média de %0.2f, segue abaixo as notas do aluno: \n", nome_aluno[x], media_aluno[x]);
            printf("Nota 1: %0.2f \n", nota1[x]);
            printf("Nota 2: %0.2f \n", nota2[x]);
            printf("Nota 3: %0.2f \n", nota3[x]);
            printf("Nota 4: %0.2f \n", nota4[x]);

        }
        else
        {

            printf("Infelizmente o aluno %s foi reprovado com a média de %0.2f, segue abaixo as notas do aluno: \n", nome_aluno[x], media_aluno[x]);
            printf("Nota 1: %0.2f \n", nota1[x]);
            printf("Nota 2: %0.2f \n", nota2[x]);
            printf("Nota 3: %0.2f \n", nota3[x]);
            printf("Nota 4: %0.2f \n", nota4[x]);

        }

        

    }


}