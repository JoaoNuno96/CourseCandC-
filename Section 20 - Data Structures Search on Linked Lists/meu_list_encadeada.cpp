#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>

using namespace std;

struct Pessoa
{
    int rg;
    string nome;
    struct Pessoa *pointerNextElement;
};

void clearScreen()
{
    system("clear");
}

int sizeOfLinkList(Pessoa *&firstElement)
{
    int currentSize = 0;
    Pessoa *p = firstElement;


    if(firstElement->nome == "")
    {
        return 0;
    }


    while(p != NULL)
    {
        p = p->pointerNextElement;
        currentSize++;
    }

    return currentSize;
}

void printLinkedlist(Pessoa *firstElement)
{
    Pessoa *aux = firstElement;

    while(aux != NULL)
    {
        cout << "NOME: " << aux->nome << " RG: " << aux->rg << " \n";
        aux = aux->pointerNextElement;
    };

}

void addFirst(Pessoa *&first)
{
    Pessoa *newObj = new Pessoa;

    cout << "Digite um nome: ";
    cin >> newObj->nome;
    cout << "Digite um RG: ";
    cin >> newObj->rg;

    //CHECK IF LIST IS EMPTY
    if(first->nome == "")
    {
        newObj->pointerNextElement = NULL;
    }
    else
    {
        newObj->pointerNextElement = first;
    }

    first = newObj;
}

void addLast(Pessoa *&first)
{
    Pessoa *newObj = new Pessoa;

    cout << "Digite um nome: ";
    cin >> newObj->nome;
    cout << "Digite um RG: ";
    cin >> newObj->rg;

    while(first != NULL)
    {
        if(first == NULL)
        {
            first->pointerNextElement = newObj;
        }
        else
        {
            continue;
        }

        first = first->pointerNextElement;
    }

    first = newObj;
}

void checkUserChoice(Pessoa *&listlink, int choice)
{
    string nome;
    int rg;

    clearScreen();

    switch(choice)
    {
        case 1:

            addFirst(listlink);
            break;

        case 2:
            addLast(listlink);
            break;

        case 3:
            break;

        case 4:
            break;

        case 5:
            break;

        case 6:
            break;

        case 7:
            break;

        case 8:
            printLinkedlist(listlink);
            break;

        case 9:
            break;

        default:
            break;
    }
}



int main()
{

    int choice = 1;
    Pessoa *firstElement = new Pessoa;
    firstElement->nome = "";
    firstElement->rg = 0;
    firstElement->pointerNextElement = NULL;



    while(choice < 9 && choice > 0)
    {
        cout << "Tamanho da lista: " << sizeOfLinkList(firstElement) << "\n";
        cout << "Operações:\n";
        cout << "1 - Inserção de um node no inicio da lista\n";
        cout << "2 - Inserção de um node no fim da lista\n";
        cout << "3 - Inserção de um node numa posição N da lista\n";
        cout << "4 - Retirar um node no inicio da lista\n";
        cout << "5 - Retirar um node no fim da lista\n";
        cout << "6 - Retirar um node numa posição N da lista\n";
        cout << "7 - Procurar um node com um campo RG\n";
        cout << "8 - Imprimir lista\n";
        cout << "9 - Sair do sistema\n";
        cout << "\nEscolha um numero e pressione ENTER: \n";

        cin >> choice;

        checkUserChoice(firstElement,choice);


    }


    return 0;
}
