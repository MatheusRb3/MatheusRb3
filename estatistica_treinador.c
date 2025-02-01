//ver a porcentagem do aproveitamento do técnico.
//exibir numero de vitórias, derrotas, empates, gols feitos, gols sofridos, saldo de gols, titulos, campeonatos disputados, numero de chances criadas, 
//chances sofridas, posse de bola.


#include <stdio.h>

int main()
{

    char nome_tecnico[100];

    int quantidade_campeonatos;

    char *campeonatos[50][50];

    int partidas, vitorias = 0, derrotas = 0, empates = 0, gols_feitos, gols_sofridos, chutes_gol, chutes_sofridos, posse_bola, titulos, resultado, resultado_titulo;

    float aproveitamento;


    printf("Seja bem-vindo(a) ao sistema de estatistica do treinador do clube ferro velho F.C \n");

    printf("Digite o nome do técnico \n");
    scanf("%s", &nome_tecnico);

    printf("Digite a quantidade de campeonatos disputados pelo técnico %s \n", nome_tecnico);
    scanf("%d", &quantidade_campeonatos);

    for(int x = 0; x < quantidade_campeonatos; x++)
    {

        printf("Digite o nome do %d° campeonato \n", x+1);
        scanf(" %s", &campeonatos[x]);

        printf("Informe a quantidade de partidas pelo campeonato %s \n", campeonatos[x]);
        scanf("%d",&partidas);

        for(int y = 0; y < partidas; y++)
        {

            printf("Digite a quantidade de gols feitos pelo clube ferro velho F.C na %d° partida \n", y+1);
            scanf("%d", &gols_feitos);

            printf("Digite a quantidade de gols sofridos pelo clube ferro velho F.C na %d° partida \n", y+1);
            scanf("%d", &gols_sofridos);

            printf("Digite a quantidade de chutes a gol do clube ferro velho F.C na %d° partida \n", y+1);
            scanf("%d", &chutes_gol);

            printf("Digite a quantidade de chutes a gol sofridos pelo clube ferro velho F.C na %d° partida \n", y+1);
            scanf("%d", &chutes_sofridos);

            printf("Digite a quantidade de posse de bola do clube ferro velho F.C na %d° partida \n", y+1);
            scanf("%d", &posse_bola);


            printf("Qual foi o resultado da %d° partida? \n", y+1);
            printf("1 - Vitória \n");
            printf("2 - Derrota \n");
            printf("3 - Empate \n");
            scanf("%d", &resultado);


            if(resultado == 1)
            {

                vitorias += 1;

                printf("O clube ferro velho F.C na %d° partida obteve a vitória com %d gols feitos, %d gols sofridos, %d chutes a gol, %d chutes sofridos e %d porcento de posse de bola \n", y+1, gols_feitos, gols_sofridos, chutes_gol, chutes_sofridos, posse_bola);

            }else if (resultado == 2)
            {
                derrotas += 1;

                printf("O clube ferro velho F.C na %d° partida obteve a derrota com %d gols feitos, %d gols sofridos, %d chutes a gol, %d chutes sofridos e %d porcento de posse de bola \n", y+1, gols_feitos, gols_sofridos, chutes_gol, chutes_sofridos, posse_bola);
            }else
            {

                empates += 1;

                printf("O clube ferro velho F.C na %d° partida obteve o empate com %d gols feitos, %d gols sofridos, %d chutes a gol, %d chutes sofridos e %d porcento de posse de bola \n", y+1, gols_feitos, gols_sofridos, chutes_gol, chutes_sofridos, posse_bola);

            }


            

        }

        printf("O clube ferro velho F.C foi campeão do campeonato %s? \n", campeonatos[x]);
        printf("1 - Sim \n");
        printf("2 - Não \n");
        scanf("%d", &resultado_titulo);

        if (resultado_titulo == 1)
        {
            titulos += 1;

            printf("O clube ferro velho F.C foi campeão do campeonato %s com %d vitórias, %d derrotas e %d empates \n", campeonatos[x], vitorias, derrotas, empates);
        }else
        {

            printf("O clube fero velho F.C terminou o campeonato com %d vitórias, %d derrotas e %d empates \n", vitorias, derrotas, empates);

        }


        aproveitamento = vitorias / partidas * 100;

        printf("O aproveitamento do técnico %s no campeonato %s foi de %.2f porcento \n", nome_tecnico, campeonatos[x], aproveitamento);
        

    }


}