#include <stdio.h>

int main(){

    char estado1;
    char codigo_carta1[5];
    char cidade1[20];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1;

    char estado2;
    char codigo_carta2[5];
    char cidade2[20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

    printf("Seja bem-vindo(a) ao super trunfo, um jogo onde você irá comparar duas cartas e ver qual será a verncedora \n");


    printf("Digite o estado da primeira carta: \n");
    scanf("%c", &estado1);
    printf("Digite o código da primeira carta: \n");
    scanf("%s", &codigo_carta1);
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

    densidade_populacional1 = populacao1 / area1;

    pib_per_capita1 = pib1 / populacao1;

    super_poder1 = populacao1 + area1 + pib1 + pib_per_capita1 + densidade_populacional1 + pontos_turisticos1; 

    densidade_populacional2 = populacao2 / area2;

    pib_per_capita2 = pib2 / populacao2;

    super_poder2 = populacao2 + area2 + pib2 + pib_per_capita2 + densidade_populacional2 + pontos_turisticos2; 


    printf("A primeira carta possui os seguintes valores: \n Estado: %c \n Código: %s \n Cidade: %s \n População: %u \n Área: %.2f \n PIB: %.2f \n Número de pontos turisticos: %d \n Densidade populacional: %.2f \n PIB per capita: %.2f \n Super poder: %.2f \n"
    , estado1, codigo_carta1, cidade1, populacao1, area1, pib1, pontos_turisticos1, densidade_populacional1, pib_per_capita1, super_poder1);

    printf("A segunda carta possui os seguintes valores: \n Estado: %c \n Código: %s \n Cidade: %s \n População: %u \n Área: %.2f \n PIB: %.2f \n Número de pontos turisticos: %.d \n Densidade populacional: %.2f \n PIB per capita: %.2f \n Super poder: %.2f \n"
    , estado2, codigo_carta2, cidade2, populacao2, area2, pib2, pontos_turisticos2, densidade_populacional2, pib_per_capita2, super_poder2);


    printf("A primeira carta possui densidade populacional igual a : %.2f e a segunda carta: %.2f \n A primeira carta possui menor densidade populacional? %d \n", densidade_populacional1, densidade_populacional2, densidade_populacional1 < densidade_populacional2);

    printf("A primeira carta possui PIB per capita igual a: %.2f e a segunda carta: %.2f \n A primeira carta possui PIB per capita maior que a segunda carta? %d \n", pib_per_capita1, pib_per_capita2, pib_per_capita1 > pib_per_capita2);

    printf("A primeira carta possui super poder igual a: %.2f e a segunda carta: %.2f \n A primeira carta possui super poder maior que a segunda carta? %d \n", super_poder1, super_poder2, super_poder1 > super_poder2);

    return 0;
}