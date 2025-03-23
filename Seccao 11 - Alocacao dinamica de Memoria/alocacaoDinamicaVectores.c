#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int* alocaVector(int tamanho)
{
    //criado um ponteiro auxiliar
    int *aux;

    //alocaçao dinamica de memoria
    aux = (int*) malloc(tamanho*sizeof(int));
    return aux;
}

void printVector(int *vector, int tamanho)
{
    int i;
    for(i = 0; i<tamanho;i++)
    {
        printf("%d \n",vector[i]);
    }
}

int main()
{
    //[] [] [] [] [ 0 ] [ 1 ] [ 2 ] [ 3 ] [] [] [] []

    //definir variaveis
    int *ponteiroVector, tamanho;

    //ler tamanho
    printf("Digite o tamanho para o vector:");
    scanf("%d", &tamanho);

    //receber endereço de memoria que foi alocado o vetor
    ponteiroVector = alocaVector(tamanho);

    int i;
    for(i = 0; i<tamanho;i++)
    {
        ponteiroVector[i] = 90 + 10;

    }

    printVector(ponteiroVector,tamanho);

    free(ponteiroVector);

    return 0;
}
