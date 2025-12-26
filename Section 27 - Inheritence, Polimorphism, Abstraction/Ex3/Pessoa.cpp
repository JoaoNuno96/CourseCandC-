#include <iostream>
#include <string>

class Pessoa
{
	private:
		std::string _nome;
		int _cpf;
		
	public:
		Pessoa()
		{
			setNome("");
			setCpf(0);
		}
		Pessoa(std::string n , int c)
		{
			setNome(n);
			setCpf(c);
		}
		
	public:
		std::string getNome()
		{
			return this->_nome;
		}
	
	public:
		void setNome(std::string n)
		{
			this->_nome = n;
		}
		
	public:
		int getCpf()
		{
			return this->_cpf;
		}
	
	public:
		void setCpf(int c)
		{
			this->_cpf = c;
		}
		
	
};
