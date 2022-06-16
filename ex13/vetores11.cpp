#include <iostream>

using namespace std;

int main()
{
    double notas[10];
    for(int i = 0; i <= 9; i++)
    {
        cout << "Digite a nota do aluno: ";
        cin >> notas[i];
    }
    for(int i = 0; i <= 9; i++)
    {
        if(notas[i] >= 7.5)
        {
            cout << "notas maiores de 7.4: " << notas[i] << ", ";
        }
    }

    return 0;
}
