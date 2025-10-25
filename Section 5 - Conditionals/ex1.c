#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main()
{
    int a,b,resultado;
    char choice;

    printf("Digite os numeros: ");
    scanf("%d",&a);
    scanf("%d",&b);

    printf("O que deseja fazer?\n");
    printf("Somar (s)\n");
    printf("Substrair (u) \n");
    printf("Multiplicar (m)\n");
    printf("Dividir (d)\n");

    scanf("%c",&choice);
    resultado = 0;

    switch(choice)
    {
        case 's':
            resultado = a + b;
        break;

        case 'u':
            resultado = a - b;
        break;

        case 'm':
            resultado = a * b;
        break;

        case 'd':
            resultado = a / b;
        break;

        default:
            resultado = 0;
        break;

    }

    printf("RESULTADO: %d", resultado);
}
