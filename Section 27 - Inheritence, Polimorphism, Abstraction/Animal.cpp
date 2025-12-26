#include <iostream>
#include <string>

class Animal
{
	private:
		std::string _terreno;
	
	public:
		Animal(std::string terr)
		{
			setTerreno(terr);
		}
	
	public:
		std::string getTerreno()
		{
			return this->_terreno;
		}
	
	public:
		void setTerreno(std::string val)
		{
			this->_terreno = val;
		}
};
