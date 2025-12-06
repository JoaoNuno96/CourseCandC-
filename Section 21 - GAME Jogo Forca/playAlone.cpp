#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void maskWord(int sizeWord)
{
	int i;
	for(i = 0; i < sizeWord; i++)
	{
		cout << "_ ";
	}
}

void playAlone(string word)
{
	int wordSize = word.size();
	
	maskWord(wordSize);
	
	cout << "\nWORD: " << word;
}
