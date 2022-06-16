#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nomes[10];
    string nome;
    bool enc = false;
    cout << "Nome de uma pessoa (sem acentos): ";
    cin >> nome;
    nomes[0] = "Pedro";
    nomes[1] = "Maria";
    nomes[2] = "Marcos";
    nomes[3] = "Kiko";
    nomes[4] = "Paula";
    nomes[5] = "Joao";
    nomes[6] = "Gabriel";
    nomes[7] = "Marta";
    nomes[8] = "Antonio";
    nomes[9] = "Felipe";
    for (int i = 0; i <= 9; i++)
    {
        if(nomes[i] == nome)
        {
            enc = true;
            cout << "Achei '" << nomes[i] << "'.";
        }
        if(i == 9 and enc == false)
        {
            cout << "Não achei.";
        }
    }

    return 0;
}
