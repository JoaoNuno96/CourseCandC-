#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <time.h>

using namespace std;

void mainMenu();

void gameExit();

void clearWindow()
{
	system("clear");
}

string readUserName()
{
	string userName = "";
	
	cout << "Digite o seu nome: ";
	cin >> userName;
	
	return userName;
}

void manageTextColor(char data)
{
	char blue[] = { 0x1b, '[', '3', '4', 'm', 0 };
	const char* red = "\x1b[31m";
	const char* normal = "\x1b[0m";
	
	if(data == 'A')
	{
		cout << blue << " " << data;
	}
	else if(data == 'p')
	{
		cout << red << " " << data;
	}
	else
	{
		cout << normal << " " << data;	
	}
}

void printTopBorder()
{
	int k;
	
	for(k = 0; k < 10; k++)
	{
		if (k == 0)
		{
			cout << "  ";
		}
		cout << k << " ";
	}
	cout << "\n";
}

void printBoard(char board[10][10])
{
	
	int k,l;
	
	printTopBorder();
	
	for(k = 0; k < 10; k++)
	{
		cout << k << "";
		for(l = 0; l < 10; l++)
		{
			manageTextColor(board[k][l]);
		}
		cout << "\n";
	}
}

void renderBoard(char board[10][10],char mask[10][10])
{
	int i,j;
	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 10; j++)
		{
			board[i][j] = 'A';
			mask[i][j] = '*';				
		}
	}

}

void generateBoats(char board[10][10])
{
	int numberOfBoats = 10;
	int boatsQuantityCheck = 0;
	
	while(boatsQuantityCheck < numberOfBoats)
	{
		int linhaAux,colunaAux;
		linhaAux = rand() % 10;
		colunaAux = rand() % 10;
		
		if(board[linhaAux][colunaAux] == 'A')
		{
			board[linhaAux][colunaAux] = 'p';
			boatsQuantityCheck++;
		}
		
	}
}

char valueFromPosition(char board[10][10], int linha, int coluna)
{
	return board[linha][coluna];
}

void checkPosition(char board[10][10], int line, int column, int *points, string *message)
{
	switch(board[line][column])
	{
		case 'p':
			*points = *points + 10;
			*message = "Muito Bem! acertaste num barco pequeno!";
		break;
		
		default:
			*message = "Falhaste o tiro!";
		break;
	}
}

void changeOneElement(char board[10][10], char mask[10][10], int *points, string *message)
{
	int l = -1;
	int c = -1;
	
	cout << "Pontos: " << *points << "\n";
	cout << *message << "\n";
	
	while( (l < 0 || c < 0) || (l > 9 || c > 9) )
	{
		cout << "Digite o número da linha: ";
		cin >> l; 
		cout << "\nDigite o número de coluna: ";
		cin >> c;
	}

	
	checkPosition(board,l,c,points,message);
	
	mask[l][c] = board[l][c];
	
}

void playGame(string userNameParams)
{
	//char colunLineIndexes;
	char board[10][10],mask[10][10];
	int statusGame;					//1 - IN GAME; 2 - GAME OVER
	int points = 0;
	int tries = 0;
	int maxTries = 5;
	string message = "Bem-vindo ao Jogo, " + userNameParams + "!";
	
	
	renderBoard(board,mask);
	generateBoats(board);
	
	while(tries < maxTries)
	{
		clearWindow();
		
		//printBoard(board);
		printBoard(mask);
		
		changeOneElement(board,mask, &points, &message);
		tries++;
	}
	
	cout << "Fim de jogo, o que deseja fazer?\n";
	cout << "1 - Jogar Novamente\n";
	cout << "2 - Menu Principal\n";
	cout << "3 - Desligar\n";
	cin >> statusGame;
	
	if(statusGame == 1)
	{
		clearWindow();
		playGame(userNameParams);
	}
	else if(statusGame == 2)
	{
		clearWindow();
		mainMenu();
	}
	else
	{
		gameExit();
	}

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
	string userName = "";
	
	switch(option)
	{
		case 1:
			userName = readUserName();
			playGame(userName);
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
	srand((unsigned)time(NULL));
	
	mainMenu();
	return 0;
}
