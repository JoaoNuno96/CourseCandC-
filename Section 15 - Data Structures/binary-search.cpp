#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

int vector_binary_search(int vect[TAM], int valueSearch, int *positionFind)
{

    //LIMITS OF BINARY SEARCH - FIRST TIME
    int left = 0;
    int right = TAM - 1;
    int center;

    while(left <= right)
    {
        center = (left + right) / 2;

        //WHEN VALUE FIND IS ON THE CENTER (SAME AS PIVOT)
        if(valueSearch == vect[center])
        {
            *positionFind = center;
            return 1;
        }

        //WHEN VALUE IS ON RIGHT SIDE, LEFT LIMIT NEEDS TO MOVE TO CENTER POSITION + 1;
        //WHEN VALUE IS ON LEFT SIDE, RIGHT LIMIT NEEDS TO MOVE TO CENTER POSITION - 1;
        if(vect[center] < valueSearch)
        {
            left = center + 1;
        }
        else
        {
            right = center - 1;
        }

    }



    return -1;
}

int main()
{
    setlocale(LC_ALL,"");

    int vetor[TAM] = {1,23,44,56,63,72,84,90,98,100};
    int valueSearch;
    int valuePosition;
    int i;
    bool findStatus;

    int *positionFind;

     for(i = 0; i<TAM; i++)
    {
        printf("%d \n", vetor[i]);
    }

    printf("Which number you want to find?\n");
    scanf(" %d", &valueSearch);

    vector_binary_search(vetor,valueSearch,positionFind);

    printf("\nValue Search: %d",valueSearch);
    printf("\nValue Position: %d",*positionFind);

}
