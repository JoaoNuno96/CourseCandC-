#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include "random.h"

void generateRandomNumbers()
{
	srand((unsigned)time(NULL));
}

string generateRandomWord()
{
	
	string palavras[3] = {"abacaxi","manga","morango"};
	
	//rand() gives a wide range of numbers, since its module operation after if gives all possible values from that module.
	int randomIndex = rand() % 3;
	
	return palavras[randomIndex];
}
