#include <iostream>
#include <string>

class Usuario
{
	private:
		std::string _nome;
		std::string _email;
	
	public:
		Usuario(std::string n, std::string e)
		{
			setNome(n);
			setEmail(e);
		}
	
	public:
		std::string getNome()
		{
			return this->_nome;
		}
		
	public:
		void setNome(std::string val)
		{
			this->_nome = val;
		}
		
	public:
		std::string getEmail()
		{
			return this->_email;
		}
		
	public:
		std::string setEmail(std::string val)
		{
			return this->_email = val;
		}
	
};
