#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int retornaComMaisDez(int numero)
{
    return numero + 10;
}

void addValueTen(int *pointerNumero)
{
    *pointerNumero += 10;
}

int main()
{
    //variables
    int a  = 5;

    //print
    printf("%d \n",a);

    //a +10
    addValueTen(&a);

    //print
    printf("%d \n",a);

    return 0;
}
