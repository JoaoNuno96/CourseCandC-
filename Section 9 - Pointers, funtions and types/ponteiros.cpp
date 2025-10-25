#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <string>

void modifyValue(int *ende, int value)
{
    *ende = value;
}

int main()
{
    //Variaveis
    int a = 20;

    //imprimir o valor de a
    //printf("Valor de a = %d ",a);

    printf("\n");

    //imprimir o endereço de a
    //printf("Valor de a = %d ",&a);

    int b = 10;
    int *ponteiro;

    //guarda endereço de memoria de b no ponteiro;
    ponteiro = &b;

    //modificar variavel b atraves de ponteiro
    printf("Varivael b =  %d \n",b);

    //para onde estiver a apontar, alterar o valor para 40
    modifyValue(&b,20);

    //modificar variavel b atraves de ponteiro
    printf("Varivael b =  %d \n",b);


}


