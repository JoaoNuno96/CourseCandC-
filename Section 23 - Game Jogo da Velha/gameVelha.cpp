#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <new>

using namespace std;

void mainMenu();

void gameExit();

void boardPrint(char tab[3][3]);

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

void checkPosition(char board[3][3], int *line, int *column, string playerName)
{
	while(board[*line][*column] != '-')
	{
		clearWindow();
		boardPrint(board);
		cout << "Posição impossível! Tente outra!\n";
		cout << playerName << " - Digite o número da sua linha: ";
		cin >> *line;
		cout << playerName << " - Digite o número da sua coluna: ";
		cin >> *column;
	}
}

int checkIfAnyPlayerWin(char board[3][3], int state)
{
	int i;
	
	//CHECK HORIZONTAL
	for(i = 0; i < 3; i++)
	{
		if(board[i][0] == 'X' && board[i][0] == board[i][1] && board[i][1] == board[i][2])
		{
			return 1;
		}
		else if(board[i][0] == 'O' && board[i][0] == board[i][1] && board[i][1] == board[i][2])
		{
			return 2;
		}
	}
	
	i = 0;
	
	//CHECK VERTICAL
	
	for(i = 0; i < 3; i++)
	{
		if(board[0][i] == 'X' && board[0][i] == board[1][i] && board[1][i] == board[2][i])
		{
			return 1;
		}
		else if(board[0][i] == 'O' && board[0][i] == board[1][i] && board[1][i] == board[2][i])
		{
			return 2;
		}
	}
	
	
	//CHECK CROSS'S
	if(board[0][0] == 'X' && board[0][0] == board[1][1] && board[1][1] == board[2][2])
	{
		return 1;
	}
	if(board[0][0] == 'O' && board[0][0] == board[1][1] && board[1][1] == board[2][2])
	{
		return 2;	
	}
	
	return 0;
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


void playGame(string playerOneName,string playerTwoName, int playerOneScore, int playerTwoScore)
{
	//GENERAL VARIABLES
	char board[3][3];
	int line,column;
	int numberOfPlays = 0;
	int gameState = 1;
	int gameFinish = 0;
	int rebootOrExit = 0;
	string currentPlayer = "";
	 
	boardGenerate(board);
	 

	
	currentPlayer = playerOneName;
	 
	 while (numberOfPlays < 9)
	{
		clearWindow();
		boardPrint(board);
		
		cout << "Round#" << numberOfPlays << "\n";
		
		cout << currentPlayer << " - Digite o número da sua linha: ";
		cin >> line;
		cout << currentPlayer << " - Digite o número da sua coluna: ";
		cin >> column;
		
		checkPosition(board,&line,&column,currentPlayer);
		
		if(currentPlayer == playerOneName)
		{
			board[line][column] = 'X';
			currentPlayer = playerTwoName;
		}
		else
		{
			board[line][column] = 'O';
			currentPlayer = playerOneName;
		}
		
		numberOfPlays++;
		
		//CHECK BOARD IF ANY PLAYER WIN
		
		gameFinish = checkIfAnyPlayerWin(board,gameState);
		
		if(gameFinish != 0)
		{
			break;
		}
		else
		{
			continue;
		}
	}
	
	if(gameFinish == 1)
	{
		clearWindow();
		boardPrint(board);
		playerOneScore++;
		cout << playerOneName <<  ", venceu o jogo!";
	}
	
	if(gameFinish == 2)
	{
		clearWindow();
		boardPrint(board);
		playerTwoScore++;
		cout << playerTwoName << ", venceu o jogo!";
	}
	
	cout << "Fim do jogo.\n";
	cout << "Pontuação: \n";
	cout << playerOneName << ": " << playerOneScore << "\n";
	cout << playerTwoName << ": " << playerTwoScore << "\n";
	cout << "Deseja reiniciar?\n";
	cout << "1 - Sim\n";
	cout << "2 - Não\n";
	
	cin >> rebootOrExit;
	
	
	if(rebootOrExit == 1)
	{
		playGame(playerOneName,playerTwoName,playerOneScore,playerTwoScore);
	}
	else if(rebootOrExit == 2)
	{
		gameExit();
	}
	
	 
}

void choseOption(int number)
{
	string playerOneName = "";
	string playerTwoName = "";
	
	switch(number)
	{
		case 1:
			cout << "Digite nome Jogador 1: ";
			cin >> playerOneName;
			cout << "Digite nome Jogador 2: ";
			cin >> playerTwoName;
			playGame(playerOneName,playerTwoName,0,0);
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
		cout << "Escolha uma opção: ";
		cin >> option;
		
		choseOption(option);
	}

}



int main()
{
	mainMenu();
	return 0;
}
