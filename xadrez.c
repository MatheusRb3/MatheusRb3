#include <stdio.h>

#define numero_pecas 4
#define movimento_pecas 4
#define movimento_rainha 8
#define movimento_cavalo 2

int main(){

    char *pecas[numero_pecas] = {"Bispo", "Torre", "Rainha", "Cavalo"};
    char *bispo[movimento_pecas] = {"Diagonal direita para baixo", "Diagonal direita para cima", "Diagonal esquerda para cima", "Diagonal esquerda para baixo"};
    char *torre[movimento_pecas] = {"Esquerda", "Direita", "Cima", "Baixo"};
    char *rainha[movimento_rainha] ={"Esquerda", "Direita", "Cima", "Baixo", "Diagonal direita para baixo", "Diagonal direita para alto", "Diagonal esquerda para alto", "Diagonal esquerda para baixo"};
    char *cavalo[movimento_cavalo] = {"cima, cima, esquerda", "cima, cima, direita"};


    int i = 0;
    int opcao;
    int casas;
    int direcao;
    int move_peca;
    char nome[50];

    printf("Bem-vindo ao jogo de xadrez, digite seu nome: ");
    scanf("%s", &nome);
    printf("\n");

    while(i < numero_pecas)
    {
        printf("Peças para mover\n");
        printf("1. Bispo \n");
        printf("2. Torre \n");
        printf("3. Rainha \n");
        printf("4. Cavalo \n");
        printf("Escolha uma peça para mover: ");
        scanf("%d", &opcao);
        printf("\n");
        
        i++;
        switch (opcao)
        {
        case 1:
            printf("Quantas vezes deseja mover o %s: ", pecas[opcao-1]);
            scanf("%d", &move_peca);

        for (int j = 0; j < move_peca; j++)
            {
            printf("%s você escolheu mover o %s \n", nome, pecas[opcao-1]);
            printf("Direções para se mover \n");
            printf("1. Diagonal direita para baixo \n");
            printf("2. Diagonal direita para cima \n");
            printf("3. Diagonal esquerda para cima \n");
            printf("4. Diagonal esquerda para  baixo \n");
            printf("Escolha a direção para se mover: ");
            scanf("%d", &direcao);

            printf("Escolha o numero de casas que deseja se mover: ");
            scanf("%d", &casas);

            printf("\n");
            if(direcao == 1 && casas == 1)
            {
                printf("%s moveu o %s %d casa pra %s \n", nome, pecas[opcao-1], casas, bispo[direcao-1]);
            }
            else if(direcao == 1 && casas > 1)
            {
                printf("%s moveu o %s %d casas pra %s \n", nome, pecas[opcao-1], casas, bispo[direcao-1]);
            }
            else if (direcao == 2 && casas == 1)
            {
                printf("%s moveu o %s %d casa pra %s \n", nome, pecas[opcao-1], casas, bispo[direcao-1]);
            }
            else if (direcao == 2 && casas > 1)
            {
                printf("%s moveu o %s %d casas pra %s \n", nome, pecas[opcao-1], casas, bispo[direcao-1]);
            }
            else if (direcao == 3 && casas == 1)
            {
                printf("%s moveu o %s %d casa pra %s \n", nome, pecas[opcao-1], casas, bispo[direcao-1]);
            }
            else if (direcao == 3 && casas > 1)
            {
                printf("%s moveu o %s %d casas pra %s \n", nome, pecas[opcao-1], casas, bispo[direcao-1]);
            }
            else if (direcao == 4 && casas == 1)
            {
                printf("%s moveu o %s %d casa pra %s \n", nome, pecas[opcao-1], casas, bispo[direcao-1]);
            }
            else if (direcao == 4 && casas > 1)
            {
                printf("%s moveu o %s %d casas pra %s \n", nome, pecas[opcao-1], casas, bispo[direcao-1]);
            }
            else
            {
                printf("Opção inválida!");
            }
            printf("\n");
            }
            break;

            case 2:
            printf("Quantas vezes deseja mover a %s: ", pecas[opcao-1]);
            scanf("%d", &move_peca);

        for (int j = 0; j < move_peca; j++)
            {
            printf("%s você escolheu mover a %s \n", nome, pecas[opcao-1]);
            printf("Direções para se mover \n");
            printf("1. Esquerda \n");
            printf("2. Direita \n");
            printf("3. Cima \n");
            printf("4. Baixo \n");
            printf("Escolha a direção para se mover: ");
            scanf("%d", &direcao);

            printf("Escolha o numero de casas que deseja se mover: ");
            scanf("%d", &casas);

            printf("\n");
            if(direcao == 1 && casas == 1)
            {
                printf("%s moveu o %s %d casa pra %s \n", nome, pecas[opcao-1], casas, torre[direcao-1]);
            }
            else if(direcao == 1 && casas > 1)
            {
                printf("%s moveu o %s %d casas pra %s \n", nome, pecas[opcao-1], casas, torre[direcao-1]);
            }
            else if (direcao == 2 && casas == 1)
            {
                printf("%s moveu o %s %d casa pra %s \n", nome, pecas[opcao-1], casas, torre[direcao-1]);
            }
            else if (direcao == 2 && casas > 1)
            {
                printf("%s moveu o %s %d casas pra %s \n", nome, pecas[opcao-1], casas, torre[direcao-1]);
            }
            else if (direcao == 3 && casas == 1)
            {
                printf("%s moveu o %s %d casa pra %s \n", nome, pecas[opcao-1], casas, torre[direcao-1]);
            }
            else if (direcao == 3 && casas > 1)
            {
                printf("%s moveu o %s %d casas pra %s \n", nome, pecas[opcao-1], casas, torre[direcao-1]);
            }
            else if (direcao == 4 && casas == 1)
            {
                printf("%s moveu o %s %d casa pra %s \n", nome, pecas[opcao-1], casas, torre[direcao-1]);
            }
            else if (direcao == 4 && casas > 1)
            {
                printf("%s moveu o %s %d casas pra %s \n", nome, pecas[opcao-1], casas, torre[direcao-1]);
            }
            else
            {
                printf("Opção inválida!");
            }
            printf("\n");
            }
            break;

        case 3:
        printf("Quantas vezes deseja mover a %s: ", pecas[opcao-1]);
        scanf("%d", &move_peca);


        for(int j = 0; j < move_peca; j++){
            printf("%s você escolheu mover a %s \n", nome, pecas[opcao-1]);
            printf("Direções para se mover \n");
            printf("1. Esquerda \n");
            printf("2. Direita \n");
            printf("3. Cima \n");
            printf("4. Baixo \n");
            printf("5. Diagonal direita para baixo \n");
            printf("6. Diagonal direita para cima \n");
            printf("7. Diagonal esquerda para cima \n");
            printf("8. Diagonal esquerda para baixo \n");
            printf("Escolha a direção para se mover: ");
            scanf("%d", &direcao);

            printf("Escolha o numero de casas que deseja se mover: ");
            scanf("%d", &casas);

            printf("\n");
           if(direcao == 1 && casas == 1)
            {
                printf("%s moveu o %s %d casa pra %s \n", nome, pecas[opcao-1], casas, rainha[direcao-1]);
            }
            else if(direcao == 1 && casas > 1)
            {
                printf("%s moveu o %s %d casas pra %s \n", nome, pecas[opcao-1], casas, rainha[direcao-1]);
            }
            else if (direcao == 2 && casas == 1)
            {
                printf("%s moveu o %s %d casa pra %s \n", nome, pecas[opcao-1], casas, rainha[direcao-1]);
            }
            else if (direcao == 2 && casas > 1)
            {
                printf("%s moveu o %s %d casas pra %s \n", nome, pecas[opcao-1], casas, rainha[direcao-1]);
            }
            else if (direcao == 3 && casas == 1)
            {
                printf("%s moveu o %s %d casa pra %s \n", nome, pecas[opcao-1], casas, rainha[direcao-1]);
            }
            else if (direcao == 3 && casas > 1)
            {
                printf("%s moveu o %s %d casas pra %s \n", nome, pecas[opcao-1], casas, rainha[direcao-1]);
            }
            else if (direcao == 4 && casas == 1)
            {
                printf("%s moveu o %s %d casa pra %s \n", nome, pecas[opcao-1], casas, rainha[direcao-1]);
            }
            else if (direcao == 4 && casas > 1)
            {
                printf("%s moveu o %s %d casas pra %s \n", nome, pecas[opcao-1], casas, rainha[direcao-1]);
            }
           else if(direcao == 5 && casas == 1)
            {
                printf("%s moveu o %s %d casa pra %s \n", nome, pecas[opcao-1], casas, rainha[direcao-1]);
            }
            else if(direcao == 5 && casas > 1)
            {
                printf("%s moveu o %s %d casas pra %s \n", nome, pecas[opcao-1], casas, rainha[direcao-1]);
            }
            else if (direcao == 6 && casas == 1)
            {
                printf("%s moveu o %s %d casa pra %s \n", nome, pecas[opcao-1], casas, rainha[direcao-1]);
            }
            else if (direcao == 6 && casas > 1)
            {
                printf("%s moveu o %s %d casas pra %s \n", nome, pecas[opcao-1], casas, rainha[direcao-1]);
            }
            else if (direcao == 7 && casas == 1)
            {
                printf("%s moveu o %s %d casa pra %s \n", nome, pecas[opcao-1], casas, rainha[direcao-1]);
            }
            else if (direcao == 7 && casas > 1)
            {
                printf("%s moveu o %s %d casas pra %s \n", nome, pecas[opcao-1], casas, rainha[direcao-1]);
            }
            else if (direcao == 8 && casas == 1)
            {
                printf("%s moveu o %s %d casa pra %s \n", nome, pecas[opcao-1], casas, rainha[direcao-1]);
            }
            else if (direcao == 8 && casas > 1)
            {
                printf("%s moveu o %s %d casas pra %s \n", nome, pecas[opcao-1], casas, rainha[direcao-1]);
            }
            else
            {
                printf("Opção inválida!");
            }
            printf("\n");
        }
            break;

        case 4:
        printf("Quantas vezes deseja mover o %s: ", pecas[opcao-1]);
        scanf("%d", &move_peca);

        for (int j = 0; j < move_peca; j++)
        {
            printf("%s você escolheu mover o %s \n", nome, pecas[opcao-1]);
            printf("Direções para se mover \n");
            printf("1. Em L a esquerda \n");
            printf("2. Em L a direira \n");
            printf("Escolha a direção para se mover: ");
            scanf("%d", &direcao);

            printf("\n");

            if(direcao == 1)
            {
                printf("%s moveu o %s pra %s \n", nome, pecas[opcao-1], cavalo[direcao-1]);
            }
            else if (direcao == 2)
            {
                printf("%s moveu o %s pra %s \n", nome, pecas[opcao-1], cavalo[direcao-1]);
            }
            else
            {
                printf("Opção inválida!");
            }
            printf("\n");
        }
        break;

        default:
            break;
        }
    }

    return 0;
}