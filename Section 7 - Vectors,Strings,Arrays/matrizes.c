#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define LINHA 4
#define COLUNA 4

int main()
{
    int tabuleiro[LINHA][COLUNA];

    for(int i = 0; i<LINHA;i++)
    {
        for(int j = 0; j<COLUNA; j++)
        {
            fflush(stdin);
            scanf("%d",&tabuleiro[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i<LINHA;i++)
    {
        for(int j = 0; j<COLUNA; j++)
        {
            printf("%d ",tabuleiro[i][j]);
        }
        printf("\n");
    }


    return 0;
}
