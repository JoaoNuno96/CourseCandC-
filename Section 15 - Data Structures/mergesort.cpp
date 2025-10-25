#include <stdlib.h>
#include <string>
#include <iostream>
#define SIZE 10

using namespace std;

void printVector(int vect[])
{
    int i;
    for(i = 0; i<SIZE;i++)
    {
        printf("The index is: %d and the size is %d\n",i,vect[i]);
    }
}

void merge(int vetor[SIZE], int indexL, int half, int indexR)
{
    int i,j,k;

    //TEMPORARY VETORS SIZES
    int n1 = half - indexL + 1;
    int n2 = indexR - half;

    //TEMPORARY VETORS
    int vectorLeftAux[n1] , vectorRightAux[n2];

    //SEND DATA FROM VETOR TO TEMPORARY VETORS:
    //-> LEFT
    for(i = 0; i<n1; i++)
    {
        vectorLeftAux[i] = vetor[indexL + i];
    }

    //-> RIGHT
    for(j = 0; j<n2; j++)
    {
        vectorRightAux[j] = vetor[half + 1 + j];
    }

    //RESET VARIABLES
    i = 0;
    j = 0;
    k = indexL;

    //IF VALUE FROM LEFT IS LESSER THAN
    while(i < n1 && j < n2)
    {
        if(vectorLeftAux[i] <= vectorRightAux[j])
        {
            vetor[k] = vectorLeftAux[i];

            i++;
        }
        else
        {
            vetor[k] = vectorRightAux[j];
            j++;
        }
    }

    //IF THERE IS MISSING ELEMENTS

    while(i < n1)
    {
        vetor[k] = vectorLeftAux[i];
        i++;
        k++;

    }

    while(j < n2)
    {
        vetor[k] = vectorRightAux[j];
        j++;
        k++;

    }
}

void merge_sort(int vect[SIZE], int indexLeft, int indexRight)
{
    if(indexLeft < indexRight)
    {
        //FIND CENTER POINT ALWAYS
        int half = indexLeft + (indexRight - indexLeft) / 2;

        merge_sort(vect, indexLeft, half);

        merge_sort(vect,half + 1, indexRight);

        //JOIN SUB ARRAYS
        merge(vect, indexLeft, half,indexRight);
    }

}

int main()
{
    int vect[SIZE] = {10,9,8,7,6,5,4,3,2,1};

    printVector(vect);

    merge_sort(vect,0 ,SIZE - 1);

    return 0;
}
