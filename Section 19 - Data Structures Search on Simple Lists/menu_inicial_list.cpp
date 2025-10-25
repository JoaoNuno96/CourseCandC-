#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#include <locale.h>

using namespace std;

struct Pessoa
{
    string nome;
    int rg;
};

void clearWindow()
{
    system("clear");

}

void printListVect(Pessoa *vect,int tamanho)
{
    int i;

    for(i = 0; i< tamanho; i++)
    {
        cout << "Nome: " << vect[i].nome << " RG: " << vect[i].rg << "\n";
    }
}

void addLast(Pessoa *&vect,int &tamanho, string nome, int rg)
{

    Pessoa *novaLista = new Pessoa[tamanho + 1];

    for(int i = 0; i<tamanho;i++)
    {
        novaLista[i].nome = vect[i].nome;
        novaLista[i].rg = vect[i].rg;
    };

    novaLista[tamanho].nome = nome;
    novaLista[tamanho].rg = rg;

    delete[] vect;

    vect = novaLista;

    tamanho++;
}

void addFirst(Pessoa *&vect, int &tamanho, string nome, int rg)
{
    if(tamanho == 0)
    {
        Pessoa *vectorAnother = new Pessoa[1];
        vectorAnother[0].nome = nome;
        vectorAnother[0].rg = rg;

        vect = vectorAnother;
        tamanho++;
    }
    else
    {
        int i;

        Pessoa *vectorAnother = new Pessoa[tamanho + 1];

        vectorAnother[0].nome = nome;
        vectorAnother[0].rg = rg;

        for(int i = 0; i<tamanho;i++)
        {
            vectorAnother[i + 1].nome = vect[i].nome;
            vectorAnother[i + 1].rg = vect[i].rg;
        };

        delete[] vect;

        vect = vectorAnother;

        tamanho++;
    }

}

void addNPosition(Pessoa *&vector, int &tamanho, int position, string nome, int rg)
{
    Pessoa *vectorAnother = new Pessoa[tamanho + 1];

    for(int i = 0; i < position; i++)
    {
        vectorAnother[i].nome = vector[i].nome;
        vectorAnother[i].rg = vector[i].rg;
    };

    vectorAnother[position].nome = nome;
    vectorAnother[position].rg = rg;

    for(int i = position; i < tamanho + 1;i++)
    {
        vectorAnother[i].nome = vector[i -1].nome;
        vectorAnother[i].rg = vector[i - 1].rg;
    };

    delete[] vector;
    vector = vectorAnother;
    tamanho++;
}

void choseOption(int option, Pessoa *&vector, int &size)
{
    int position = 0;
    string name = "";
    int rg = 0;

    switch(option)
    {
        case 1:
            cout << "Inserção de um node no inicio da lista\n";
            cout << "Qual é o nome da Pessoa? ";
            cin >> name;

            cout << "Qual é o rg da pessoa?";
            cin >> rg;

            addFirst(vector ,size,name,rg);

            break;

        case 2:
            cout << "Função escolhida: 2\n";
            cout << "Qual é o nome da Pessoa? ";
            cin >> name;

            cout << "Qual é o rg da pessoa?";
            cin >> rg;

            if(size == 0)
            {
                addFirst(vector ,size,name,rg);
            }
            else
            {

                addLast(vector ,size,name,rg);
            }


            break;

        case 3:
            cout << "Qual é o nome da Pessoa? ";
            cin >> name;

            cout << "Qual é o rg da pessoa?";
            cin >> rg;

            cout << "Qual a posição de n?";
            cin >> position;

            if(position == 0)
            {
                addFirst(vector ,size,name,rg);
            }
            else if(position == size)
            {
                addLast(vector ,size,name,rg);
            }
            else
            {
                addNPosition(vector,size,position,name,rg);
            }

            break;


        case 8:
            printListVect(vector,size);
            break;
    }
}


int main()
{
    setlocale(LC_ALL,"");

    //POINTER TO SEQUENCE LIST
    Pessoa *pointerSquence;

    //LIST SIZE
    int sizeList = 0;

    int option = 1;

    Pessoa *exampleList = new Pessoa[sizeList];


    // printListVect(pointerSquence,sizeList);


    while(option < 10 && option > 0)
    {
        cout << "Operações \n";
        cout << "1 - Inserção de um node no inicio da lista\n";
        cout << "2 - Inserção de um node no fim da lista\n";
        cout << "3 - Inserção de um node na posição N da lista\n";
        cout << "4 - Retirar um node do inicio da lista\n";
        cout << "5 - Retirar um node no fim da lista\n";
        cout << "6 - Retirar um node na posição N\n";
        cout << "7 - Procurar um node com o campo RG\n";
        cout << "8 - Imprimir a lista\n";
        cout << "9 - Sair do sistema\n";
        cout << "\nEscolha um número e pressione ENTER:\n";

        cin >> option;

        clearWindow();

        choseOption(option,exampleList,sizeList);



    }
    return 0;

}
