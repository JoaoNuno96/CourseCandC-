#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <new>

using namespace std;

void mainMenu();

void gameExit();

void clearWindow()
{
	system("clear");
}

void gameExit()
{
	cout << "A desligar o jogo...\n";
	system("exit");
}

void gameInfo()
{
	int option;
	
	cout << "Informações de Jogo:\n";
	cout << "Criador: João Nuno\n\n";
	
	cout << "Que deseja fazer?\n";
	cout << "1 - Menu Inicial\n";
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

void boardGenerate(char tab[3][3])
{
	int i,j;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j< 3; j++)
		{
			tab[i][j]  = '-';
		}
	}
}

void boardPrint(char tab[3][3])
{
	int i,j;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j< 3; j++)
		{
			cout << tab[i][j] << " ";
		}
		cout << "\n";
	}
}

void playGame()
{
	//GENERAL VARIABLES
	 char board[3][3];
	 
	 boardGenerate(board);
	 boardPrint(board);
}

void choseOption(int number)
{
	switch(number)
	{
		case 1:
			playGame();
		break;
	
		case 2:
			gameInfo(); 
		break;
		
		case 3:
			gameExit();
		break;
		
		default:
		break;
	}
}

void mainMenu()
{
	int option = 0;
	
	while(option < 1 || option > 3)
	{
		cout << "Bem-vindo ao Jogo da Velha!\n";
		cout << "1 - Jogar\n";
		cout << "2 - Informações do Jogo\n";
		cout << "3 - Desligar\n";
		
		cin >> option;
		
		choseOption(option);
	}

}



int main()
{
	mainMenu();
	return 0;
}
