#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
    int dadoUm,dadoDois,dadoTres,soma;

    srand(time(NULL));

    dadoUm = (rand() % 6) + 1;
    dadoDois = (rand() % 6) + 1;
    dadoTres = (rand() % 6) + 1;

    soma = dadoUm + dadoDois + dadoTres;

    printf("DADO UM: %d \n", dadoUm);
    printf("DADO DOIS: %d \n", dadoDois);
    printf("DADO TRES: %d \n", dadoTres);
    printf("Soma = %d", soma);

    return 0;
}
