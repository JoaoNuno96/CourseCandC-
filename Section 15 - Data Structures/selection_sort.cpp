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

void selection_sort(int vect[TAM])
{
    int smallValuePosition,auxi,i,j;

    for(i = 0; i<TAM;i++)
    {
        smallValuePosition = i;

        for(j = i + 1; j < TAM; j++)
        {
            //IF IT IS FIND A SMALL VALUE REPLACES FROM CURRENT VALUE
            if(vect[j] < vect[smallValuePosition])
            {
                smallValuePosition = j;
            }
        }

        //IF POSITIION VALUE CHANGED, MEANS THAT IT FOUND A SMALLER VALUE IN WHICH THE CURRENT POSITIONS ARE SWITCHED. (AUX VALUE STORES ONE VALUE IN SWITCHING)
        if(smallValuePosition != i)
        {
            //SAVES VALUE
            auxi = vect[i];

            //GOES TO BACK
            vect[i] = vect[smallValuePosition];

            //GOES TO FRONT
            vect[smallValuePosition] = auxi;
        }
    }
}

int main()
{
    int vect[TAM] = {5,4,3,2,1};

    selection_sort(vect);

    print_vector(vect);

    return 0;
}
