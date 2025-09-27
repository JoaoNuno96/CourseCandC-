#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <new>

int main()
{
    //DEFINIR VAIRAVEIS
    int tamanho, cont;

    printf("Digite o tamanho: ");
    scanf("%d", &tamanho);

    int *ponteiroVector = new int[tamanho];

    int i;
    for(i = 0; i<tamanho; i++)
    {
        ponteiroVector[i] = i;
        printf("\n%d", ponteiroVector[i]);

    }

    return 0;

}
