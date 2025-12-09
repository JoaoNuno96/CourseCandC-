#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <time.h>

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
	int i;
	int boatsQuantityCheck = 0;
	
	while(boatsQuantityCheck < numberOfBoats)
	{
		int linhaAux,colunaAux;
		linhaAux = rand() % 10;
		colunaAux = rand() % 10;
		
		if(board[linhaAux][colunaAux] == 'A')
		{
			board[linhaAux][colunaAux] = 'P';
			boatsQuantityCheck++;
		}
		
	}
}

char valueFromPosition(char board[10][10], int linha, int coluna)
{
	return board[linha][coluna];
}

void changeOneElement(char board[10][10], char mask[10][10])
{
	int l,c;
	cout << "Digite o número da linha: ";
	cin >> l;
	cout << "\nDigite o número de coluna: ";
	cin >> c;
	
	mask[l][c] = board[l][c];
}

void playGame()
{
	char board[10][10],mask[10][10];
	int statusGame = 1;						//1 - IN GAME; 2 - GAME OVER
	
	renderBoard(board,mask);
	generateBoats(board);
	
	while(statusGame == 1)
	{
		clearWindow();
		
		printBoard(board);
		
		changeOneElement(board,mask);
		
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
	srand((unsigned)time(NULL));
	
	mainMenu();
	return 0;
}
