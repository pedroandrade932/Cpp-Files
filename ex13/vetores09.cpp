#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int vetorA[6];
    int vetorB[6];
    int vetorC[6];
    for(int i = 0; i <= 5; i++)
    {
        vetorA[i] = rand() % 2;
        vetorB[i] = rand() % 2;
    }
    for(int i = 0; i <= 5; i++)
    {
        if(vetorA[i] == vetorB[i])
        {
            vetorC[i] = vetorA[i];
        }
        else
        {
            vetorC[i] = -1;
        }
    }
    for(int i = 0; i <= 5; i++)
    {
        if(i < 5)
        {
            cout << vetorC[i] << ", ";
        }
        else
        {
            cout << vetorC[i] << ".";
        }
    }
    
    return 0;
}

