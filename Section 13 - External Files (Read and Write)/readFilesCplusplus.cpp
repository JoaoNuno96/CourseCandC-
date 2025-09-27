#include <fstream>
#include <string>
#include <iostream>

int main()
{
    //qual arquivo irá ser lido
    std::ifstream input("texto.txt");

    //string que vai receber texto lido;
    std::string textoLido;

    //texto do arquivo para string
    for(std::string line; getline(input,line);)
    {
        textoLido += line;
    }

    //show content

    std::cout << textoLido;

    return 0;
}
