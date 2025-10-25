#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    //Valor de 0 a 3
    int r = rand() % 4;

    //valor de 3 a 10
    int ra = (rand() % 8) + 3

    printf("Numero %d",r);
}
