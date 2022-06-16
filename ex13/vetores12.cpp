#include <iostream>
#include <string>
using namespace std;

int main()
{
    int acertos = 0;
    string gabarito[20];
    string resp[20];
    char al;
    cout << "\033[31mAVISO: Coloque as letras das alternativas apenas em MAIÚSCULO.\033[m\n";
    cout << "\033[1;31mAtenção, você só pode preencher o gabarito UMA vez.\033[m\n";
    for(int i = 0; i <= 19; i++)
    {
        cout << "coloque o gabarito da " << i + 1 << "ª questão: ";
        cin >> gabarito[i];
    }
    while(al != 'N')
    {
        for(int i = 0; i <= 19; i++)
        {
            cout << "coloque a resposta do aluno para a " << i + 1 << "ª questão: ";
            cin >> resp[i];
        }
        for(int i = 0; i <= 19; i++)
        {
            if(resp[i] == gabarito[i])
            {
                acertos++;
            }
        }
        cout << "O aluno acertou " << acertos << " questões.\n";
        cout << "Colocar outro aluno (S/N)? ";
        cin >> al;
    }

    return 0;
}

