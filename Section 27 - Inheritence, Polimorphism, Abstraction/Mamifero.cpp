#include <iostream>
#include <string>
#include "Animal.cpp"

class Mamifero : public Animal
{
	private:
		int _mesGestacao;
	
	public:
		Mamifero(int mesGest, std::string terr) : Animal(terr)
		{
			setMesGestacao(mesGest);
		};
	
	public:
		int getMesGestacao()
		{
			return this->_mesGestacao;
		};
		
	public:
		void setMesGestacao(int val)
		{
			this->_mesGestacao = val;
		}
};
