
#include <string.h>
#include <fstream>

int main()
{
    //Create File Object
    std::ofstream file;

    //open file or create if do not exist
    file.open("texto.txt",std::ios_base::app);

    //write
    file << "Texto teste";

    //close file
    file.close();

    return 0;
}

