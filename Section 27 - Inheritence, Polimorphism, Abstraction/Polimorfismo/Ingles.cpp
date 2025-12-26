#include <iostream>
#include <string>
#include "Idioma.cpp"

class Ingles : public Idioma
{
	public:
		void saudar()
		{
			std::cout << "Hello!\n";
		}
};
