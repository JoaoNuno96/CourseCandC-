#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

int addValues(int* vect, int sizeV)
{
    int i;
    for(i = 0; i<sizeV; i++)
    {
        vect[i] = 10;
    }
}

int printVector(int* vect, int sizeVector)
{
    int i;
    for(i = 0; i< sizeVector; i++)
    {
        printf("ELEMENT %d - %d\n",i,vect[i]);
    }
}

int main()
{
    int vectorSize;
    //pointes to vector
    int* vect = (int*) malloc(SIZE * sizeof(int));

    //addValues(vect);

    //printVector(vect,3);

    printf("Digite tamanho do vetor: ");
    scanf("%d", &vectorSize);

    int* newVectorAllocatedMemory = (int*) malloc(vectorSize * sizeof(int));

    addValues(newVectorAllocatedMemory, vectorSize);

    printVector(newVectorAllocatedMemory,vectorSize);

    return 0;
}
