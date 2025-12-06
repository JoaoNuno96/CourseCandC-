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
    newObj->pointerNextElement = NULL;

    if(first->nome == "")
    {
        newObj->pointerNextElement = NULL;
        first = newObj;
    }
    else
    {
        Pessoa *aux = first;
        //CYCLE
        while(aux != NULL)
        {
            if(aux->pointerNextElement == NULL)
            {
                aux->pointerNextElement = newObj;
                return;
            }

            aux = aux->pointerNextElement;
        }

    }
}

void addNPosition(Pessoa *&first)
{
    int index = 0;
    int counter = 0;
    Pessoa *aux = new Pessoa;
    Pessoa *current = first;
    Pessoa *resto = new Pessoa;

    cout << "Digite um nome: ";
    cin >> aux->nome;
    cout << "Digite um RG: ";
    cin >> aux->rg;

    aux->pointerNextElement = nullptr;

    cout << "Digite Indice para adicionar: ";
    cin >> index;

    //CIRCLE FIRST PART OF LINK LIST
    while(current != NULL && counter < index - 1)
    {
        current = current->pointerNextElement;
        counter++;
    }

    resto->pointerNextElement = current->pointerNextElement;
    current->pointerNextElement = aux;
    aux->pointerNextElement = resto->pointerNextElement;


}

void removeFirst(Pessoa *&first)
{
	first = first->pointerNextElement;
}

void removeLast(Pessoa *&first)
{
	Pessoa *aux = first;
	Pessoa *saveLastElemnt = new Pessoa;
	
	while(aux->pointerNextElement != NULL)
	{
		saveLastElemnt = aux;
		aux = aux->pointerNextElement;
	}
	
	saveLastElemnt->pointerNextElement = nullptr;
}

void removeNPosition(Pessoa *&first)
{
	int index = 0;
    int counter = 0;
    //Pessoa *aux = new Pessoa;
    Pessoa *current = first;
    //Pessoa *resto = new Pessoa;

    cout << "Digite uma posicao";
    cin >> index;
    
    while(current != NULL && counter < index - 1)
    {
		current = current->pointerNextElement;
		counter++;
	}
	
	if(current != NULL && current->pointerNextElement != NULL)
	{
		current->pointerNextElement = (current->pointerNextElement)->pointerNextElement;
	}
	
	
}

void nameOfPessoa(Pessoa *&first)
{
	Pessoa *aux = first;
	string name = "";
	int rg = 0;
	
	cout << "Digite RG:";
	cin >> rg;
	
	
	while(aux != NULL)
	{
		if(rg == aux->rg)
		{
			name = aux->nome;
			break;
		}
		
		aux = aux->pointerNextElement;
	}
	
	if(name != "")
	{
		cout << "A pessoa com esse rg tem o nome de " + name + "\n";
	}
	else
	{
		cout << "Não existe pessoa com esse rg";
	}
	
}

void checkUserChoice(Pessoa *&listlink, int choice)
{
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
            addNPosition(listlink);
            break;

        case 4:
			removeFirst(listlink);
            break;

        case 5:
			removeLast(listlink);
            break;

        case 6:
			removeNPosition(listlink);
            break;

        case 7:
			nameOfPessoa(listlink);
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
