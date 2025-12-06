#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <time.h>
#include "random.cpp"
//#include "playAlone.cpp"

using namespace std;

void clearScreen()
{
	system("clear");
}

string maskWord(string word, int sizeWord)
{
	int i;
	string maskedWord = "";
	
	for(i = 0; i < sizeWord; i++)
	{
		maskedWord += "_ ";
	}
	
	return maskedWord;
}

void playAlone(string word)
{
	int tries = 0;
	int maxTries = 5;
	int wordSize = word.size();
	char letter;
	string wordMasked = maskWord(word,wordSize);
	
	while (maxTries - tries > 0)
	{
		cout << "Palavra: " << word << " Tamanho: " << wordSize;
		
		cout << "\nDigite uma letra: ";
		cin >> letter;
		
		tries++;
		cout << "Tentativas restantes: " << maxTries - tries << "\n";
		//maskWord(word,wordSize,letter);
	}
	
	//cout << "\nWORD: " << word;
}


void gameStart(int numb)
{
	if(numb == 1)
	{
		playAlone(generateRandomWord());
	}
	
}

void gameInfo()
{
	
}

void gameExit()
{
	
}


void checkUserChoice(int choiceParam)
{
	switch(choiceParam)
	{
		case 1:
			gameStart(1);
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
	generateRandomNumbers();
	
	int option = 0;
	
	while(option < 1 || option > 3)
	{
		clearScreen();
		cout << "Bem-vindo ao Jogo";
		cout << "\n1 - Jogar";
		cout << "\n2 - Sobre";
		cout << "\n3 - Sair";
		cout << "\nEscolha uma opção e clique enter: ";
		cin >> option;
	}
	
	checkUserChoice(option);
}


int main()
{
	mainMenu();
	return 0;
}
