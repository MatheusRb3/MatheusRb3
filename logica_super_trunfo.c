#include <stdio.h>

int main(){

    char estado1, estado2, codigo_carta1[5], codigo_carta2[5], cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidade_populacional1, densidade_populacional2, pib_per_capita1, pib_per_capita2, super_poder1, super_poder2;
    int pontos_turisticos1, pontos_turisticos2, opcao, pont1 = 0, pont2 = 0;


    printf("***Seja bem-vindo(a) ao SuperTrunfo, um jogo onde a melhor carta vence, preparado para o desafio? \n");
    printf("Será jogado por 2 jogadores, onde cada jogador informara as informações de sua carta e a melhor carta vence! \n");
    printf("1. Jogar \n");
    printf("2. Regras \n");
    printf("3. Sair \n");
    printf("Escolha: ");
    scanf("%d", &opcao);


    switch (opcao)
    {
    case 1:
        printf("Vez do primeiro jogador: \n");
        printf("Digite o estado da primeira carta: \n");
        scanf(" %c", &estado1);
        printf("Digite o código da primeira carta: \n");
        scanf(" %s", &codigo_carta1);
        printf("Digite a cidade da primeira carta: \n");
        scanf("%s", &cidade1);
        printf("Digite a população da primeira carta: \n");
        scanf("%u", &populacao1);
        printf("Digite a área em km² da primeira carta: \n");
        scanf("%f", &area1);
        printf("Digite o PIB da primeira carta: \n");
        scanf("%f", &pib1);
        printf("Digite o número de pontos turisticos da primeira carta: \n");
        scanf("%d", &pontos_turisticos1);

        densidade_populacional1 = populacao1 / area1;

        pib_per_capita1 = pib1 / populacao1;

        super_poder1 = populacao1 + area1 + pib1 + pib_per_capita1 + densidade_populacional1 + pontos_turisticos1; 

        printf("Vez do segundo jogador: \n");
        printf("Digite o estado da segunda carta: \n");
        scanf(" %c", &estado2);
        printf("Digite o código da segunda carta: \n");
        scanf("%s", &codigo_carta2);
        printf("Digite a cidade da segunda carta: \n");
        scanf("%s", &cidade2);
        printf("Digite a população da segunda carta: \n");
        scanf("%u", &populacao2);
        printf("Digite a área em km² da segunda carta: \n");
        scanf("%f", &area2);
        printf("Digite o PIB da segunda carta: \n");
        scanf("%f", &pib2);
        printf("Digite o número de pontos turisticos da segunda carta: \n");
        scanf("%d", &pontos_turisticos2);

        densidade_populacional2 = populacao2 / area2;

        pib_per_capita2 = pib2 / populacao2;

        super_poder2 = populacao2 + area2 + pib2 + pib_per_capita2 + densidade_populacional2 + pontos_turisticos2;




            printf("A primeira carta possui densidade populacional igual a : %.2f e a segunda carta: %.2f \n", densidade_populacional1, densidade_populacional2);

            printf("A primeira carta possui PIB per capita igual a: %f e a segunda carta: %f \n", pib_per_capita1, pib_per_capita2);

            printf("A primeira carta possui super poder igual a: %.2f e a segunda carta: %.2f \n", super_poder1, super_poder2);

            if(densidade_populacional1 > densidade_populacional2)
            {
                pont1++;
            }
            else
            {
                pont2++;
            }

            if (pib_per_capita1 > pib_per_capita2)
            {
                pont1++;
            }
            else
            {
                pont2++;
            }

            if (super_poder1 > super_poder2)
            {
                pont1++;
            }
            else{
                pont2++;
            }

            if(pont1 > pont2)
            {
                printf("O jogador 1 ganhou!!!");
            }
            else if(pont1 == pont2)
            {
                printf("Teve um empate!!!");
            }
            else
            {
                printf("O jogador 2 ganhou!!!");
            }
            break;
    case 2:
        printf("Regras: \n");
        printf("Para ganhar será necessário ter menor densidade populacional, maior PIB per capita e maior super poder. \n");
        printf("O calculo da densidade populacional é a pupulação dividido pela area. \n");
        printf("O calculo do PIB per capita é o pib dividido pela população. \n");
        printf("O calculo ddo super poder é a soma da população, area, pib, pib per capita, densidade populacional e numero de pontos turisticos. \n");
        printf("Saindo...");
        break;
    case 3:
        printf("Saindo...");
        break;
    default:
        printf("Opção inválida!");
    }
  

    return 0;
}