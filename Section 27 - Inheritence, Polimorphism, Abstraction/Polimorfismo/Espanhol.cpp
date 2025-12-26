#include <iostream>
#include <string>
#include "Idioma.cpp"

class Espanhol : public Idioma
{
	public:
		void saudar()
		{
			std::cout << "Hola!\n";
		}
};
