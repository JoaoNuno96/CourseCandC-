#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define LINHA 2
#define COLUNA 2

int main()
{
    int primeiro[LINHA][COLUNA];
    int segundo[LINHA][COLUNA];

    int valor1;
    int valor2;

    printf("DIGITAL VALORES DA PRIMEIRA MATRIZ!! ");
    for(int i = 0; i<LINHA;i++)
    {
        for(int j = 0; j<COLUNA;j++)
        {
            scanf("%d", &primeiro[i][j]);
        }
        printf("\n");
    }

    segundo[0][0] = primeiro[1][0];
    segundo[0][1] = primeiro[1][1];
    segundo[1][0] = primeiro[0][0];
    segundo[1][1] = primeiro[0][1];


    printf("VALORES DA SEGUNDA MATRIZ INVERTIDOS\n");

    for(int i = 0; i<LINHA; i++)
    {
        for(int j = 0; j<COLUNA; j++)
        {
            printf("%d",segundo[i][j]);
        }
        printf("\n");
    }
}
