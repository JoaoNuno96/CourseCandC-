#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <new>

int main()
{
    //Variables
    int linhas, colunas;
    int i,j;

    int **pointerMatriz;

    printf("Digite as linhas: ");
    scanf("%d",&linhas);

    printf("\nDigite as colunas: ");
    scanf("%d",&colunas);

    pointerMatriz = new int[linhas];

    for(i = 0; i<linhas;i++)
    {
        pointerMatriz[i] = new int[colunas];
    }

    for(i = 0; i<linhas; i++)
    {
        for(j = 0; j<colunas;j++)
        {
            pointerMatriz[i][j] = i;
            printf("%d ",pointerMatriz[i][j]);
        }
        printf("\n");

    }

    free(pointerMatriz);

    return 0;

}
