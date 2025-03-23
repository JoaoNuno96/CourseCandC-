#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");

    int number;

    printf("Digite o numero: ");
    scanf("%d",&number);

    if(number % 2 == 0)
    {
        printf("Numero é par");
    }
    else
    {
        printf("Numero é impar");
    }
}
