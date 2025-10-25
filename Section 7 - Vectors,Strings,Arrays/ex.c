#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL,"");

    float vector[3];

    float media;

    media = 0;

    for(int i = 0; i<3;i++)
    {
        scanf("%.2f",&vector[i]);
        printf("Valor do vector %d = %f \n",i,vector[i]);
    }

    media = (vector[0] + vector[1] + vector[2]) / 3;

    printf("A média dos valores é: %.2f",media);

    return 0;



}
