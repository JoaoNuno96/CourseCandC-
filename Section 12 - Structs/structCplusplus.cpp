#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <new>
#include <locale.h>

//using namespace std;

struct Fruta
{
    std::string cor;
    std::string nome;
};

int main()
{
    setlocale(LC_ALL,"");
    //criando um ponteiro para um struct criado
    Fruta *primeiraFruta = new Fruta;

    primeiraFruta->nome = "Banana";
    primeiraFruta->cor = "Amarela";

    std::cout << "Fruta: " << primeiraFruta->nome << " Cor: " << primeiraFruta->cor;

    std::cout << "\n";

    //lista de frutas
    Fruta *lista_de_frutas = new Fruta[2];

    lista_de_frutas[0].cor = "Vermelho";
    lista_de_frutas[0].nome = "Melância";

    lista_de_frutas[1].cor = "Verde";
    lista_de_frutas[1].nome = "Maçã";

    for(int i = 0; i<2;i++)
    {
        std::cout << lista_de_frutas[i].cor << " ";
        std::cout << lista_de_frutas[i].nome << " ";
        std::cout << "\n";
    }

    return 0;
}
