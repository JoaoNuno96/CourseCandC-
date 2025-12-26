#include <iostream>
#include <string>
#include <list>
#include <ios>
#include <limits>
#include <cstring>

using namespace std;

class Pessoa
{
	string nome;
	int idade;
	double salario;
	
	public:
		string getNome()
		{
			return nome;
		}
	
	public:
		void setNome(string val)
		{
			nome = val;
		}
	
	public:
		int getIdade()
		{
			return idade;
		}
		
	public:
		void setIdade(int val)
		{
			idade = val;
		}
	
	public:
		int getSalario()
		{
			return salario;
		}
		
	public:
		void setSalario(double val)
		{
			salario = val;
		}
	
	public:
		Pessoa(string nomeParams, int idadeParams, double salarioParams)
		{
			setNome(nomeParams);
			setIdade(idadeParams);
			setSalario(salarioParams);
		};
	
	public:
		string printInfo()
		{
			return "Dados pessoais:\n\tNome: " + nome +
				   "\n\tIdade: " + to_string(idade) +
				   "\n\tSalário: " + to_string(salario) + "\n";
		}
};

class Calculadora
{
	
	public:
		static double Soma(double numOne, double numTwo)
		{
			return numOne + numTwo;
		}
};

int main()
{
	string nome;
	int idade;
	double salario;
	
	cout << "Digite Nome: ";
	cin >> nome;
	
	cin.sync();
	cout << "Digite Idade: ";
	cin >> idade;
	
	cin.sync();
	cout << "Digite Salário: ";
	cin >> salario;
	
	Pessoa p = Pessoa(nome,idade,salario);
	
	cout << "Soma valor 1 + 2 " << to_string(Calculadora().Soma(1,2));
	
	cout << p.printInfo();
}
