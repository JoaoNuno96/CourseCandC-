#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <time.h>
#include "random.cpp"
//#include "playAlone.cpp"

using namespace std;

void gameStart(int numb);

void mainMenu();

void clearScreen()
{
	system("clear");
}

bool checkWordUsed(string lettersUsed, char letter)
{
	size_t i;
	for(i = 0; i < lettersUsed.size(); i++)
	{
		if(tolower(lettersUsed[i]) == tolower(letter))
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

void play(string word)
{
	int count = 0;
	int tries = 0;
	int maxTries = 7;
	int wordSize = word.size();
	int option;
	char letter;
	string lettersUsed;
	string wordMasked = maskWord(word,wordSize);
	bool letterAlreadyUsed;
	bool guessedLetter = false;
	
	
	while ((maxTries - tries > 0) && word != wordMasked)
	{
		guessedLetter = false;
		
		showStatus(wordMasked,(maxTries-tries),lettersUsed);
		
		cout << "\nDigite uma letra ou digite 1 para arriscar a palavra: ";
		cin >> letter;
		
		if(letter == '1')
		{
			string suspectWord;
			
			cout << "\nDigite a palavra que suspeita: ";
			cin >> suspectWord;
			
			if(suspectWord == word)
			{
				cout << "\nGanhou!!!\n";
				cout << "Muito bem! essa é a palavra correcta!!\n";
				wordMasked = suspectWord;
				break;
			}
			else
			{
				cout << "\nPerdeu!!\n";
				cout << "Bolas! Essa não era a palavra!!\n";
				cout << "A palavra correcta seria " << word << "\n";
				tries = maxTries;
				break;
			}
			
			tries++;
		}
		
		letterAlreadyUsed = checkWordUsed(lettersUsed,letter);
		
		while(letterAlreadyUsed)
		{
			cout << "\nLetra usada! Digite outra letra: ";
			cin >> letter;
			letterAlreadyUsed = checkWordUsed(lettersUsed,letter);
		}
		
		lettersUsed += letter;
		
		//GUESS THE LETTER
		for(count = 0; count < wordSize; count ++)
		{
			if(word[count] == tolower(letter))
			{
				guessedLetter = true;
				wordMasked[count] = tolower(word[count]);
			}
		}
		
		
		
		if(guessedLetter)
		{
			cout << "\nMuito bem, acertaste uma letra!\n";	
		}
		else
		{
			cout << "\nBolas! Tenta novamente!\n";
		}
		
		tries++;
		//maskWord(word,wordSize,letter);
	}
	
	
	
	
	if(word == wordMasked)
	{
		cout << "\nWinner!";
		cout << "\n Deseja reiniciar?";
		cout << "\n 1 - Sim";
		cout << "\n 2 - Não\n";
		cin >> option;	
	}
	else
	{
		cout << "\nYou Lose!";
		cout << "\n Deseja reiniciar?";
		cout << "\n 1 - Sim";
		cout << "\n 2 - Não\n";
		cin >> option;	
	}
	
	if(option == 1)
	{
		clearScreen();
		gameStart(1);
	}
	else
	{
		cout << "\n A desligar o jogo...";
	}

	
	
	//cout << "\nWORD: " << word;
}


void gameStart(int numb)
{
	string word;
	
	//CHECK IF IS SINGLE PLAYER OR MULTIPLAYER
	if(numb == 1)
	{
		word = generateRandomWord(); 
	}
	else
	{
		cout << "\nDigite a palavra: ";
		cin >> word;
	}
	
	play(word);
	
	
}

void gameInfo()
{
	int option;
	
	clearScreen();
	cout << "Informações:\nJogo desenvolvido por João Nuno\n";
	cout << "1 - Voltar\n";
	cout << "2 - Exit Game\n";
	cin >> option;
	
	if(option == 1)
	{
		clearScreen();
		mainMenu();
	}
	else
	{
		cout << "\n A desligar o jogo...";
	}
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
			gameStart(2);
			
		case 3:
			gameInfo();
			break;
			
		case 4:
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
		cout << "\n2 - Jogar em dupla";
		cout << "\n3 - Sobre";
		cout << "\n4 - Sair";
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
