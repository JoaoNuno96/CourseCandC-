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

void printBoard(char board[10][10])
{
	int k,l;
	
	for(k = 0; k < 10; k++)
	{
		for(l = 0; l < 10; l++)
		{
			cout << " " << board[k][l];	
		}
		cout << "\n";
	}
}

void renderBoard(char board[10][10])
{
	int i,j;
	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 10; j++)
		{
			board[i][j] = 'A';			
		}
	}

}

char valueFromPosition(char board[10][10], int linha, int coluna)
{
	return board[linha][coluna];
}

void changeOneElement(char board[10][10])
{
	int l,c;
	cout << "Digite o número da linha que pretende alterar: ";
	cin >> l;
	cout << "\nDigite o número de coluna que pretende alterar: ";
	cin >> c;
	
	board[l][c] = 'J';
}

void playGame()
{
	char board[10][10];
	
	renderBoard(board);

	printBoard(board);
	
	changeOneElement(board);
	
	printBoard(board);
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
			playGame();
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
