#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valorInicial,valorFinal,sequencia;

    printf("Apresente valor inicial, valor final e sequencia: ");
    scanf("%d %d %d",&valorInicial,&valorFinal,&sequencia);

    while(valorInicial <= valorFinal)
    {
        printf("Valor %d \n",valorInicial);

        valorInicial += sequencia;
    }
}
