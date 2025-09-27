#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void print_vector(int vect[])
{
    int i;
    for(i = 0; i<TAM;i++)
    {
        printf("INDEX#%d - %d\n",i,vect[i]);
    }
}

void shell_sort(int vect[TAM])
{
    int i,j,value;
    int h = 1;


    while(h < TAM)
    {
        h = 3 * h + 1;
    }

    while(h > 1)
    {
        h = h / 3;

        for(i = h; i<TAM;i++)
        {
            //Present element
            value = vect[i];

            //Previous element
            j = i - h;

            while(j>=0 && (atual < vect[j]))
            {
                vect[j + h] = vect[j];

                //goes back
                j = j - h;

            }
            vect[j + h] = atual;
        }
    }





}

int main()
{
    int vect[TAM] = {5,4,3,2,1};

    insertion_sort(vect);

    print_vector(vect);

    return 0;
}

