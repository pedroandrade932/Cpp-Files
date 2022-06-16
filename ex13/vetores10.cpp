#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int num[10];
    int maior = 0;
    int menor = 0;
    for(int i = 0; i <= 9; i++)
    {
        num[i] = rand()%100;
    }
    for(int i = 0; i <= 9; i++)
    {
        if(i == 0)
        {
            maior = num[i];
            menor = num[i];
        }
        else
        {
            if(num[i] > maior)
            {
                maior = num[i];
            }
            else if(num[i] < menor)
            {
                menor = num[i];
            }
        }
    }
    cout << "os números sorteados são: ";
    for(int i = 0; i <= 9; i++)
    {
        cout << num[i] << ", ";
    }
    cout << "\nO maior valor é: " << maior << "\n";
    cout << "\nO menor valor é: " << menor << "\n";

    return 0;
}

