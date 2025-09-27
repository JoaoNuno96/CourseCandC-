#include <stdio.h>
#include <string.h>


int main()
{
    //cursor which will circle in each char.
    int c;
    char text[255];

    //File variable
    FILE *file;

    //Open file;
    file = fopen("texto.txt","r");

    //verify if file exist
    if(file)
    {
        int count = 0;

        //GET FILE-> WHILE IS NOT THE END OF FILE
        while((c = getc(file)) != EOF)
        {
            //printf("%c",c);

            text[count] = c;

            count++;
        }

    //close file
    fclose(file);
    }

    for(int i = 0; i<strlen(text);i++)
    {
        printf("%c",text[i]);
    }
}
