#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

void mainMenu();

void clearWindow()
{
	system("clear");
}

void gameExit()
{
	system("exit");
}

void gameInfo()
{
	int option;
	
	clearWindow();
	
	cout << "Informações de Jogo:\n";
	cout << "Jogo desenvolvido por João Nuno\n";
	cout << "\n1 - Voltar\n";
	cout << "2 - Desligar\n";
	
	cin >> option;
	
	if(option == 1)
	{
		clearWindow();
		mainMenu();
	}
	else
	{
		gameExit();
	}
}


void choseOption(int option)
{
	switch(option)
	{
		case 1:
			break;
			
		case 2:
			gameInfo();
			break;
			
		case 3:
			gameExit();
			break;
	}
}

void mainMenu()
{
	int choice;
	
	while(choice < 1 || choice > 3)
	{
		cout << "Bem-vindo ao Jogo Batalha Naval\n";
		cout << "1 - Jogar\n";
		cout << "2 - Sobre\n";
		cout << "3 - Sair\n";
		cout << "Escolha uma opção: ";
		
		cin >> choice;
		choseOption(choice);
	}

}

int main()
{
	mainMenu();
	return 0;
}
