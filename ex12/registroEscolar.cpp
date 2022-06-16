#include <iostream>
#include <string>
using namespace std;

int input(string msg)
{
    int res;
    cout << msg;
    cin >> res;
    return res;
}

void print(string msg, bool end = true)
{
    if(end == true)
        cout << msg << endl;
    else
        cout << msg;
}

string nome[100];
bool en = false;

int search()
{
    string icad;
    en = false;
    int dad = 0;
    print("Nome do aluno cadastrado: ", false);
    cin >> icad; 
    for (int i = 0; i < 100; i++)
    {
        if(nome[i] == icad)
        {
            dad = i;
            en = true;
        }
        if(i == 99 and en == false)
        {
            print("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-");
            cout << "aluno " << icad << " não encontrado.\n";
            print("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-");
        }
    }
    return dad;
}

int main ()
{
    int res;
    int medias = 0;
    int cad = 0;
    float media[100];
    string email[100];
    string cpf[100];
    string nas[100];
    print("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-");
    print("              REGISTRO ESCOLAR");
    print("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-");
    while(true)
    {
        print("[ 1 ] Cadastrar aluno\n[ 2 ] Listar aluno\n[ 3 ] Excluir aluno");
        print("[ 4 ] Calcular média do aluno\n[ 5 ] Listar a média do aluno\n[ 0 ] Sair");
        res = input("Sua escolha: ");
        if(res == 0)
        {
            break;
        }
        else if(res == 1)
        {
            int count;
            count = input("Quantos alunos você quer registrar? ");
            for (int i = 0; i < count; i++)
            {
                cout << "Nome do aluno: ";
                cin >> nome[i + cad];
                cout << "Coloque o CPF: ";
                cin >> cpf[i + cad];
                cout << "Coloque o E-mail: ";
                cin >> email[i + cad];
                cout << "data de nascimento: ";
                cin >> nas[i + cad];
                print("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
            }
            cad += count;
            
        }
        else if(res == 2)
        {
            if(cad > 0)
            {
                int dad = search();
                if(en == true)
                {
                    print("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-");
                    cout << "Nome do aluno:\n" << nome[dad] << endl;
                    cout << "\n";
                    cout << "CPF do aluno:\n" << cpf[dad] << endl;
                    cout << "\n";
                    cout << "E-mail do aluno:\n" << email[dad] << endl;
                    cout << "\n";
                    cout << "Data de nascimento do aluno:\n" << nas[dad] << endl;
                    print("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-");
                }
            }
            else
            {
                print("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-");
                print("nenhum aluno registrado.");
                print("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-");
            }
        }
        else if(res == 3)
        {
            if(cad > 0)
            {
                int dad = search();
                if(en == true)
                {
                    for (int i = dad; i < 99; i++)
                    {
                        nome[i] = nome[i + 1];
                        cpf[i] = cpf[i + 1];
                        email[i] = email[i + 1];
                        nas[i] = nas[i + 1];
                        media[i] = media[i +1];
                    }
                    cad -= 1;
                    cout << "Dados do aluno apagado." << endl;
                }
            }
            else
            {
                print("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-");
                print("nenhum aluno registrado.");
                print("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-");
            }
        }
        else if(res == 4)
        {
            float cac;
            int count;
            int som;
            int dad = search();
            if(en == true)
            {
                count = input("Quantas notas irá registrar? ");
                som = 0;
                for (int i = 0; i < count; i++)
                {
                    float nota;
                    print("Nota do aluno: ", false);
                    cin >> nota;
                    som += nota;
                }
                cac = som / count;
                media[dad] = cac;
                medias++;
                
            }
        }
        else if(res == 5)
        {
            if(medias > 0)
            {
                for (int i = 0; i < medias; i++)
                {
                    print("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
                    cout << "Nome do aluno: " << nome[i] << endl;
                    cout << "Média do aluno: " << media[i] << endl;
                }
            }
            else
            {
                print("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-");
                print("nenhuma média registrada.");
                print("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-");
            }
        }
        else
        {
            print("ERRO, opção inválida.");
        }
    }
    return 0;
}
