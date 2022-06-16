#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    double vetor1[10];
    double vetor2[10];
    double vetor3[10];
    for(int i = 0; i <= 10; i++)
    {
        vetor1[i] = 1+rand()%10;
        vetor2[i] = 1+rand()%10;
    }
    for(int i = 0; i <= 10; i++)
    {
        vetor3[i] = vetor1[i] * vetor2[i];
    }
    for(int i = 0; i <= 9; i++)
    {
        if(i < 9)
        {
            cout << vetor3[i] << ", ";
        }
        else
        {
            cout << vetor3[i] << ".";
        }
    }
    return 0;
}


