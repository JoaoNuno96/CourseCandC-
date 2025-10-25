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

void quick_sort(int vect[TAM], int start, int end)
{
    int leftLimit,rightLimit,center,pivot,auxi;

    //LEft and Right Limits of the region, which is going to be analysed
    leftLimit = start;
    rightLimit = end;

    //figure the center position, to define the Pivot
    center = (int) ((leftLimit + rightLimit) / 2);
    pivot = vect[center];

    while(rightLimit > leftLimit)
    {
        while(vect[leftLimit] < pivot)
        {
            leftLimit = leftLimit + 1;
        }

        while(vect[rightLimit] > pivot)
        {
            rightLimit = rightLimit - 1;
        }

        if(leftLimit <= rightLimit)
        {
            auxi = leftLimit;
            leftLimit = rightLimit;
            rightLimit = auxi;

            //Limits go to center
            leftLimit = leftLimit + 1;
            rightLimit = rightLimit - 1;
        }
    }

    if(start < rightLimit)
    {
        quick_sort(vect,start,rightLimit);
    }

    if(left < end)
    {
        quick_sort(vect,left,end);
    }
}

int main()
{
    int vect[TAM] = {5,4,3,2,1};


    print_vector(vect);

    return 0;
}
