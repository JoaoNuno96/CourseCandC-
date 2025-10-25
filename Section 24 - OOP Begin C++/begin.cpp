#include <iostream>
#include <new>

using namespace std;

void addData(int** vect, int size)
{
    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            vect[i][j] = 10;
        }
    }
}

void printFunction(int** vect,int size)
{
    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            cout << vect[i][j] << " ";
        }
        cout << "\n";
    }
}

int** pointToPointCreating(int size)
{
    int i;
    int** pointparams = new int* [size];

    for (i = 0; i < size;i++)
    {
        pointparams[i] = new int[size];
    }

    return pointparams;
}


int main()
{
    int number;
    int** pointerToPointer;

    cout << "Write a size:";
    cin >> number;

    pointerToPointer = pointToPointCreating(10);
    addData(pointerToPointer, 10);
    printFunction(pointerToPointer,10);
}
