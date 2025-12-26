#include <iostream>
#include <string>
#include "Idioma.cpp"

class Portugues : public Idioma
{
	public:
		void saudar()
		{
			std::cout << "Olá!\n";
		}
};
