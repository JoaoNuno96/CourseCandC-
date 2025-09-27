#include <stdio.h>
#include <stdlib.h>
#include <string>
#define TAM 5

void print_vector(int vect[])
{
    int i;
    for(i = 0; i<TAM;i++)
    {
        printf("INDEX#%d - %d\n",i,vect[i]);
    }
}

int main()
{
    int firstPosition,secondPosition,aux;
    int vect[TAM] = {5,4,3,2,1};

    for(firstPosition = 0; firstPosition<TAM;firstPosition++)
    {
        for(secondPosition = firstPosition + 1; secondPosition < TAM; secondPosition++)
        {
            //VERIFY IF FISRT ELEMENT IS GREATER THAN THE SECOND---
            if(vect[firstPosition] > vect[secondPosition])
            {
                aux = vect[firstPosition];
                vect[firstPosition] = vect[secondPosition];
                vect[secondPosition] = aux;
            }
            else
            {
                continue;
            }

        }
    }

    print_vector(vect);


    return 0;
}
