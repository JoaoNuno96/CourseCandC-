#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//*pointer = value
//pointer = memory address

void modifyValue(int *valueOne,int *valueTwo)
{
    int *otherpointer;
    otherpointer = *valueOne;
    *valueOne = *valueTwo;
    *valueTwo = otherpointer;
}


int main()
{
    int valueF,valueS;

    printf("Digite valores: ");
    scanf("%d %d",&valueF,&valueS);
    printf("VALOR 1 %d\n",valueF);
    printf("VALOR 2 %d\n",valueS);

    int *pointerOne, *pointerTwo;
    pointerOne = &valueF;
    pointerTwo = &valueS;

    printf("Changing values...\n");

    modifyValue(pointerOne,pointerTwo);
    printf("VALOR 1 %d\n",valueF);
    printf("VALOR 2 %d\n",valueS);

}


