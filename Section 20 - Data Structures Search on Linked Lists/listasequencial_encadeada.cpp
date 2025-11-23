#include <stdio.h>
#include <stdlib.h>
#include <new>

struct Estrutura
{
    int valueNumeric;
    Estrutura *nextItem;
};

void addValues(int number)
{

}

int main()
{
    //MAKE LIST POINTER
    Estrutura *pointer;

    //NEW VALUE
    Estrutura *firstValue = new Estrutura;
    firstValue->valueNumeric = 10;
    firstValue->nextItem = NULL;

    pointer = firstValue;

    Estrutura *secondValue = new Estrutura;
    secondValue->valueNumeric = 20;
    secondValue->nextItem = NULL;

    pointer->nextItem = secondValue;

    while(pointer != NULL)
    {
        printf("Valor: %d\n",pointer->valueNumeric);

        pointer = pointer->nextItem;

    }


    return 0;
}
