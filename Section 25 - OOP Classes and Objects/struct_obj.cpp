
#include <iostream>
#include <string>
#include <list>
#include <ios>
#include <limits>
#include <cstring>

using namespace std;

class Pessoa
{
	public: 
		char nome[10];
		int rg = 0;
	
	
	Pessoa(char nomeParams[10])
	{
		std::strncpy(nome,nomeParams,9);
		nome[9] = '\0';
	}
	
	Pessoa(char nomeParams[10], int rgParams)
	{
		std::strncpy(nome, nomeParams,9);
		nome[9] = '\0';
		rg = rgParams;
	};
	
	void talk()
	{
		cout << "I'm talking right now!!!\n";
	}
	
	void waiting()
	{
		cout << "Waiting...\n";
	}
};

int main()
{
	//int r;
	char n[10];
	
	std::cout << "Digite Nome: ";
	std::cin.getline(n,10);
	
	/*
	std::cout << "Digite RG: ";
	std::cin.sync();
	std::cin >> r;
	* */
	
	Pessoa p(n);
	
	p.talk();
	p.waiting();
	
	//std::cout << "Nome: " << p.nome << ", RG: " << p.rg;

}
