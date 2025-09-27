#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct Data
{
    int dia;
    int mes;
    int ano;

}Data;

struct Aluno
{
    int id;
    Data nascimento;
};

int main()
{
    setlocale(LC_ALL,"");

    struct Aluno aluno1;
    aluno1.id = 1;
    aluno1.nascimento.ano = 1996;
    aluno1.nascimento.mes = 05;
    aluno1.nascimento.dia = 27;

    printf("Aluno %d , data %d/%d/%d",aluno1.id,aluno1.nascimento.ano,aluno1.nascimento.mes,aluno1.nascimento.dia);

}
