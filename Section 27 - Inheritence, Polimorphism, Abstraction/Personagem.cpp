#include <iostream>
#include <string>
#include "Usuario.cpp"

class Personagem : public Usuario
{
	private:
		int _nivel;
		
	public:
		Personagem(std::string n, std::string e) : Usuario(n,e)
		{
		}
	
	
	public:
		int getNivel()
		{
			return this->_nivel;
		}
		
	public:
		void setNivel(int val)
		{
			this->_nivel = val;
		}
		
	public:
		void aumentaUmNivel()
		{
			setNivel(getNivel() + 1);
		}
};
