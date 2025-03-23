#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 3

int main()
{
    setlocale(LC_ALL,"");
    int vector[TAM] = {1,2,3};

    for(int i = 0; i<TAM;i++)
    {
        printf("%d \n",vector[i]);
    }

    fflush(stdin);
}
