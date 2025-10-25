#include <stdio.h>
#include <string.h>
#include <locale.h>

struct Palavra
{
    int ordem;
    char texto[255];
};

int main()
{
    setlocale(LC_ALL,"");

    struct Palavra primeira_palavra;

    primeira_palavra.ordem = 0;
    strcpy(primeira_palavra.texto, "Este é o meu texto");

    puts(primeira_palavra.texto);

    printf("\n");
    printf("Ordem: %d , Primeira palavra %s\n",primeira_palavra.ordem,primeira_palavra.texto);


    //LISTA STRUCTS

    struct Palavra lista_de_palavras[3];
    for(int i = 0; i<3;i++)
    {
        lista_de_palavras[i].ordem = i;
        strcpy(lista_de_palavras[i].texto, "Nova");
    }

    for(int i = 0; i<3;i++)
    {
        printf("Struct: %d - %s", lista_de_palavras[i].ordem,lista_de_palavras[i].texto);
        printf("\n");
    }

    return 0;

}
