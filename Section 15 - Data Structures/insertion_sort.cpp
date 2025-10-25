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

void insertion_sort(int vect[TAM])
{
    //i - count of vector circle

    int i,j,atual;

    for(i = 1; i<TAM;i++)
    {
        //Present element
        atual = vect[i];

        //Previous element
        j = i - 1;

        while(j>=0 && (atual < vect[j]))
        {
            vect[j + 1] = vect[j];

            //goes back
            j = j -1;

        }
        vect[j + 1] = atual;
    }

}

int main()
{
    int vect[TAM] = {5,4,3,2,1};

    insertion_sort(vect);

    print_vector(vect);

    return 0;
}
