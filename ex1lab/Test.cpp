#include <iostream>

using namespace std;

void printa(string msg, bool endline = true)
{
    if(endline == true)
        cout << msg << endl;
    else
        cout << msg;
}


struct Alunos
{
    string nome;
    float nota1;
    float nota2;
    float media = 0;
};

Alunos al[100];

void mos(int tam, string nome)
{

    for(int i = 0; i <= tam; i++)
    {
        if(tam == 0)
        {
            printa("\nNao existem alunos cadastrados.\n");
        }
        else
        {
            if(al[i].nome == nome)
            {
                cout << "Nome: " << al[i].nome;
                cout << "Nota 1: " << al[i].nota1;
                cout << "Nota 2: " << al[i].nota2;
                cout << "Media: " << al[i].media;
            }
        }
    }
}



int main()
{
    int res;
    int alc = 0;
    while(true)
    {
        printa("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
        printa("CADASTRO DE ALUNOS");
        printa("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
        printa("[ 1 ] Cadastrar novo aluno.\n[ 2 ] Ver alunos cadastrados.\n[ 3 ] Calcular a media.\n[ 0 ] Sair.");
        cout << "Sua escolha: ";
        cin >> res;
        if(res == 0)
        {
            break;
        }
        else if(res == 1)
        {
            string cont = "s";
            int c = 0;
            while(cont != "n")
            {
                printa("==== NOVO ALUNO ====");
                printa("Nome do aluno: ", false);
                cin >> al[c].nome;
                printa("Nota 1: ", false);
                cin >> al[c].nota1;
                printa("Nota 2: ", false);
                cin >> al[c].nota2;
                printa("Deseja Continuar [s/n]? ", false);
                cin >> cont;
                alc++;
                if(cont == "s")
                {
                    c++;
                }
            }
        }
        else if(res == 2)
        {
            for (int i = 0; i < alc; i++)
            {
                printa("-=-=-=-=-=-=-=-=-=-=-=-=-");
                cout << "Nome: " << al[i].nome;
                cout << "Nota 1: " << al[i].nota1;
                cout << "Nota 2: " << al[i].nota2;
                cout << "Media: " << al[i].media;
            }
            
        }
        else if(res == 3)
        {
            for (int i = 0; i < alc; i++)
            {
                al[i].media = (al[i].nota1 + al[i].nota2) / 2;
                printa("-=-=-=-=-=-=-=-=-=-=-=-=-");
                cout << "Nome: " << al[i].nome;
                cout << "Media: " << al[i].media;
            }
            
        }
        else if(res == 4)
        {
            if(alc > 0)
            {
                string name;
                printa("Nome do aluno: ");
                cin >> name;
                mos(alc,name);
            }
            else
            {
                mos(alc,"nada");
            }
        }
    }

    return 0;
}
