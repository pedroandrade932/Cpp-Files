#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int vetorX[10];
    int vetorY[10];
    for(int i = 0; i <= 9; i++)
    {
        vetorX[i] = 1+rand()%100;
    }
    for(int i = 0; i <= 9; i++)
    {
        if(i % 2 == 0)
        {
            vetorY[i] = vetorX[i] / 2;
        }
        else
        {
            vetorY[i] = vetorX[i] * 3;
        }
    }
    cout << "Vetor X: ";
    for(int i = 0; i <= 9; i++)
    {
        cout << vetorX[i] << ", ";
    }
    cout << "\nVetor Y: ";
    for(int i = 0; i <= 9; i++)
    {
        cout << vetorY[i] << ", ";
    }


    return 0;
}
