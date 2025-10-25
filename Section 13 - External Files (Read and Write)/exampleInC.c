#include <stdio.h>

int main(void)
{
    //Cria o objeto de arquivo
    FILE *ponteiroFile;

    //( Caminho\NomeArquivo(ou so nome do arquivo e ele eh colocado onde o codigo fonte esta), w(escrever)|r(ler)|a(editar )
    ponteiroFile = fopen("teste.txt", "w");

    // ( ponteiro para o arquivo, mensagem a ser escrita )
    fprintf(ponteiroFile,"Log de Logins");

    //fecha o arquivo que foi escrito.
    fclose(ponteiroFile);

    	return 0;
}
