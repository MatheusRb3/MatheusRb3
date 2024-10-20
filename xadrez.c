#include <stdio.h>

#define size 3
#define jogadas 3


int main() {

    int mesa[size][size] = {0};
    int valorX, valorY;


    for(int x = 0; x < jogadas; x++)
    {
        valorX = 0;
        valorY = 0;

        printf("Defina a posiçao x da %d° jogada: ", x + 1);
        scanf("%d", &valorX);
        valorX --;

        
        printf("Defina a posiçao y da %d° jogada: ", x + 1);
        scanf("%d", &valorY);
        valorY --;

        if(valorX >= 0 && valorX < size && valorY >= 0 && valorY < size)
        {
            if (mesa[valorX][valorY] == 0)
            {
                mesa[valorX][valorY] = 1;
            }
            
            else
            {
                printf("Posição ja ocupada tente outra. \n");
                x--;
            }
            
            
        }
        else
        {
            printf("Opção invalida, tente outra.\n");
            x--;
        }
    }

    printf("\nMesa:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (mesa[i][j] == 1)
            {
                printf("X ");
            }

            else
            {
                printf(". ");
            }
            
        }
        printf("\n");
    }
    


    return 0;
}