#include <fstream>
#include <string>
#include <iostream>
#include <locale>
#define TAM 10

using namespace std;

int main()
{
    setlocale(LC_ALL,"");

    int vetor[TAM] = {1,23,44,56,63,72,84,90,98,100};
    int valueSearch;
    int valuePosition;
    int i;
    bool findStatus;

    for(i = 0; i<TAM; i++)
    {
        printf("%d \n", vetor[i]);
    }

    printf("Which number you want to find?\n");
    scanf(" %d", &valueSearch);

    for(i = 0; i<TAM; i++)
    {
        if(valueSearch == vetor[i])
        {
            findStatus = true;
            valuePosition = i;

        }
    }

    if(findStatus)
    {
        printf("Value find in position %d",valuePosition);

    }
    else
    {
         printf("Value not find");
    }


    return 0;
}

