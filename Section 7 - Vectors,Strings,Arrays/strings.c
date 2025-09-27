#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    char nome[] = "Joao Nuno\0";

    for(int i = 0; i<strlen(nome);i++)
    {
        printf("%c \n",nome[i]);
    }

    printf("%s",nome);
    printf("\n");
    puts(nome);

    printf("DIGITE NOVA PALAVRA: ");

    char frase[27];
    fgets(frase,27,stdin);

    printf("Imprimir frase\n");
    printf("%s",frase);

}
