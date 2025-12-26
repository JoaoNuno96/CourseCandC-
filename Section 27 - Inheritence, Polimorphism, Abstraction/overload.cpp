#include <iostream>
#include <string>
#include "Calculadora.cpp"

int main()
{
	Calculadora c = Calculadora();
	
	std::cout << c.sum(10,15) << "\n";
	std::cout << c.sum(10,15,20) << "\n"; 
	
	return 0;
}
