#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    float valor1,valor2,valor3,mult;

    scanf_s("%f %f %f",&valor1,&valor2,&valor3);

    mult = valor1*valor2*valor3;

    printf("\nA multiplicacao de todos os valor eh %f",mult);

}
