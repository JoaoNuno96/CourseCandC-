#include <iostream>
#include <string>
#include "Pessoa.cpp"

class Professor : public Pessoa
{
	private:
		double _salario;
	
	public:
		Professor() : Pessoa()
		{
			setSalario(0.0);
		}
		Professor(std::string n, int c, double s) : Pessoa(n,c)
		{
			setSalario(s);
		}
	
	public:
		double getSalario()
		{
			return this->_salario;
		}
	
	public:
		void setSalario(double s)
		{
			this->_salario = s;
		}
};
