#include <fstream>
#include <string>
#include <iostream>

int main()
{
    /*C____________

    Ponteiro para o arquivo
	FILE *ponteiroFile;

	//Abrindo o arquivo e limpando ele
	ponteiroFile = fopen("teste.txt","w");
	fprintf(ponteiroFile, "");
	fclose(ponteiroFile);

	return 0;*/

    std::ofstream file;

    file.open("texto.txt");

    file << "";

    return 0;

}
