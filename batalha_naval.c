#include <stdio.h>

#define TAM 10
#define NAVIOS 4

int main() {
    int tabuleiro[TAM][TAM] = {0}; 
    int valorX, valorY;

    printf("Seja Bem-vindo(a) ao Batalha Naval!!! \n");
    for (int x = 0; x < NAVIOS; x++) {
        valorX = 0;
        valorY = 0;

        while (1) {
            printf("Defina a posição x(1 a 10) do %d° navio: ", x + 1);
            scanf("%d", &valorX);
            valorX--;

            printf("Defina a posição y(1 a 10) do %d° navio: ", x + 1);
            scanf("%d", &valorY);
            valorY--; 

            if (valorX >= 0 && valorX < TAM && valorY >= 0 && valorY < TAM) {
                if (tabuleiro[valorX][valorY] == 0) { 
                    tabuleiro[valorX][valorY] = 1;
                    break; 
                } else {
                    printf("Essa posição já está ocupada! Tente outra.\n");
                }
            } else {
                printf("Posição inválida! Tente novamente.\n");
            }
        }
    }

  
    printf("\nTabuleiro:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (tabuleiro[i][j] == 1) {
                printf("3 ");
            } else {
                printf(". "); 
            }
        }
        printf("\n");
    }

    return 0;
}
