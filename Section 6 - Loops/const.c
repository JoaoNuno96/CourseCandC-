#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int i, valor, contagem;

    printf("Digite um numero primo: ");
    scanf("%d",&valor);

    contagem = 0;

    for(i = 1; i<=valor;i++)
    {
        if(valor % i == 0)
        {
            contagem++;
        }
    }

    if(contagem == 2)
    {
        printf("Numero é primo!");
    }
    else
    {
        printf("Numero não é primo!");
    }

    return 0;
}
