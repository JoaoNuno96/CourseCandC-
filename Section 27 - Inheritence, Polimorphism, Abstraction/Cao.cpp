#include <iostream>
#include <string>
#include "Mamifero.cpp"


class Cao : public Mamifero
{
	private:
		std::string _raca;
		
	public:
		Cao(std::string terreno, int mesGesta, std::string raca) : Mamifero(mesGesta,terreno)
		{
			setRaca(raca);
		}
		
	public:
		std::string getRaca()
		{
			return this->_raca;
		}
	
	public:
		void setRaca(std::string val)
		{
			this->_raca = val;
		}
	
	public:
		void ladrar()
		{
			std::cout << "Au au";
		}
};
