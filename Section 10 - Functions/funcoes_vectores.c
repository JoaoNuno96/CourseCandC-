#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void imprimirVector(int *vector, int size)
{
    int i;

    for(i = 0; i<size;i++)
    {
        printf("%d \n", vector[i]);
    }
}

void modificaVector(int *vector, int tamanho)
{
    int i;

    for(i = 0; i< tamanho; i++)
    {
        vector[i] += 1;
    }
}

int main()
{
    int vect[3] = {1,2,3};

    modificaVector(vect,3);
    imprimirVector(vect,3);


    return 0;
}
