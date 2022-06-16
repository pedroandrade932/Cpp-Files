#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    double vetor[10];
    double valor;
    int vezes = 0;
    int id[10];
    for(int i = 0; i <= 9; i++)
    {
        vetor[i] = rand()%10;
    }
    cout << "Digite um número: ";
    cin >> valor;
    for(int i = 0; i <= 9; i++)
    {
        if(valor == vetor[i])
        {
            vezes = vezes + 1;
            id[i] = i;
        }
        else
        {
            id[i] = -1;
        }
    }
    if(vezes == 0)
    {
        cout << "Não apareceu nenhuma vez.";
    }
    else
    {
        cout << "Esse número apareceu " << vezes << " vezes.\n";
        cout << "Na(s) posição(ões): ";
        for(int i = 0; i <= 9; i++)
        {
            if(id[i] != -1)
            {
                cout << id[i] << ", ";
            }
        }
    }

    return 0;
}
