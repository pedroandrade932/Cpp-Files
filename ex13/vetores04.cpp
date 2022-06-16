#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int num[20];
    int soma;
    for(int i = 0; i <= 9; i++)
    {
        num[i] = rand()%100;
    }
    for (int i = 0; i <= 9; i++)
    {
        soma = soma + num[i];
    }
    if(soma % 2 == 0)
    {
        soma = soma + 1;
    }
    cout << "A soma é de: " << soma;

    return 0;
}
