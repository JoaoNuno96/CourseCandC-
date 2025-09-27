#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//Entry Point
void main()
{
    setlocale(LC_ALL,"");
    printf("Olá");

    printf("\n");

    //INTEGER
    int a = 50;


    printf("O valor de a é = %d",a);
    printf("\n");
    scanf("%d", &a);
    printf("\n");
    printf("O valor de a mudou para %d",a);
    printf("\n");

    //FLOAT
    float b = 5.5;

    printf("O valor de b é = %f",b);
    printf("\n");
    scanf("%f", &b);
    printf("\n");
    printf("O valor de b mudou para %f",b);
    printf("\n");

    //CHARACTERS

    char c = 'J';
    printf("O valor de c é %c \n",c);
    fflush(stdin);
    scanf("%c",&c);
    printf("O novo valor de c é %c ",c);

}
