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

bool checkWordUsed(string lettersUsed, char letter)
{
	size_t i;
	for(i = 0; i < lettersUsed.size(); i++)
	{
		if(lettersUsed[i] == letter)
		{
			return true;
		}
		else 
		{
			return false;
		}
	}
	
	return false;
}

string maskWord(string word, int sizeWord)
{
	int i;
	string maskedWord = "";
	
	for(i = 0; i < sizeWord; i++)
	{
		maskedWord += "_";
	}
	
	return maskedWord;
}

void showStatus(string wordMasked, int lifesLeft, string lettersUsed)
{
	cout << "Palavra: " << wordMasked << "\n";
	cout << "Tentativas restantes: " << lifesLeft << "\n";
	cout << "Letras usadas: ";
	
	//SHOW LETTERS USED
	size_t i;
	for(i = 0; i < lettersUsed.size(); i++)
	{
		cout << lettersUsed[i] << ", ";
	}
	cout << "\n";
}

void playAlone(string word)
{
	int count = 0;
	int tries = 0;
	int maxTries = 7;
	int wordSize = word.size();
	char letter;
	string lettersUsed;
	string wordMasked = maskWord(word,wordSize);
	bool letterAlreadyUsed;
	
	while ((maxTries - tries > 0) && word != wordMasked)
	{
		
		showStatus(wordMasked,(maxTries-tries),lettersUsed);
		
		cout << "\nDigite uma letra: ";
		cin >> letter;
		
		letterAlreadyUsed = checkWordUsed(lettersUsed,letter);
		
		while(letterAlreadyUsed)
		{
			cout << "\nLetra usada! Digite outra letra: ";
			cin >> letter;
			letterAlreadyUsed = checkWordUsed(lettersUsed,letter);
		}
		
		lettersUsed += letter;
		
		for(count = 0; count < wordSize; count ++)
		{
			if(word[count] == letter)
			{
				wordMasked[count] = word[count];
			}
		}
		
		tries++;
		
		//maskWord(word,wordSize,letter);
	}
	
	if(word == wordMasked)
	{
		cout << "Winner!";
	}
	else
	{
		cout << "You Lose!";
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
