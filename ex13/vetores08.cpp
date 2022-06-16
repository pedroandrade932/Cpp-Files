#include <iostream>
#include <string>
using namespace std;

int main()
{
    string cont;
    string nomes[100];
    while(cont != "NAO")
    {
        int id = 0;
        cout << "Digite o nome do aluno: ";
        cin >> nomes[id];
        cout << "Nome registrado com sucesso, quer continuar (SIM/NAO)? ";
        cin >> cont;
        id++;
    }
    
    return 0;
}

