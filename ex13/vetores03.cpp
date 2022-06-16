#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    double num[20];
    double soma;
    for(int i = 0; i <= 9; i++)
    {
        num[i] = rand()%100;
    }
    for (int i = 0; i <= 9; i++)
    {
        soma = soma + num[i];
    }
    cout << "A soma é de: " << soma;

    return 0;
}
