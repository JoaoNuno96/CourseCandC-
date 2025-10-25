#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,soma;

    scanf("%d %d",&a,&b);

    while((a >=5 && a <= 10) && (b >= 5 && b <= 10))
    {
        soma = a + b;
        printf("Numeros no intervalo, soma = %d", soma);
    }
    else
    {
        printf("Numero não no intervalo");
    }
}
