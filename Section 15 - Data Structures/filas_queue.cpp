#include <stdio.h>
#include <stdlib.h>
#include <string>
#define TAM 4

bool verfiy_fila_queue_space(int *backP)
{
    if(*backP == (TAM - 1))
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool verify_fila_queue_empty(int *frontParam, int *backkParam)
{
    if(*frontParam > *backkParam)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void print_fila_queue(int fila[TAM])
{
    int i;
    for(i = 0; i<TAM;i++)
    {
        printf("INDEX: %d - VALUE %d\n",i,fila[i]);
    }
}

void fila_queue_constructor(int fila[TAM],int *frontParam, int *backkParam)
{
    *frontParam = 0;
    *backkParam = -1;

    int i;
    for(i = 0; i<TAM;i++)
    {
        fila[i] = 0;
    }

    printf("Queue initiated!!");
}

void add_value_fila_queue(int fila[TAM],int valorParam,int *trazParam)
{
    *trazParam += 1;

    fila[*trazParam] = valorParam;
}

void remove_value_fila_queue(int fila[TAM],int *frontt, int *backk)
{
    if(verify_fila_queue_empty(frontt,backk))
    {
        printf("Can't Remove! Queue is empty!");
    }
    else
    {
        printf("O valor %d foi removido!",fila[*frontt]);
        *frontt += 1;
        fila[*frontt] = 0;
    }

}

int main()
{
    int fila_queue[TAM];
    int frontt,backk;
    int value;

    fila_queue_constructor(fila_queue,&frontt,&backk);

    add_value_fila_queue(fila_queue,5,&backk);
    add_value_fila_queue(fila_queue,10,&backk);
    add_value_fila_queue(fila_queue,11,&backk);

    printf("\n");
    print_fila_queue(fila_queue);

    if(verfiy_fila_queue_space(&backk))
    {
        printf("\nFREE SPACE\n");
    }
    else
    {
        printf("\nNO FREE SPACE\n");
    }

    remove_value_fila_queue(fila_queue,&frontt,&backk);


    return 0;
}
