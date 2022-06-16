#include <iostream>
using namespace std;

struct registro
{
    string nome;
    string ende;
    int phone;
    string email;
    double salario;
};

int main()
{
    double totsal = 0;
    string nomesalmaior;
    double salmaior = 0;
    string res;
    registro fun[50];
    int i = 0;
    while(res != "n" and i <= 49)
    {
        cout << "+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n";
        cout << "\033[33m" << i + 1 << "º funcionário\033[m\n";
        cout << "+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n";
        cout << "Nome do " << i + 1 << "º funcionário: ";
        cin >> fun[i].nome;
        cout << "Endereço do " << i + 1 << "º funcionário: ";
        cin >> fun[i].ende;
        cout << "Telefone do " << i + 1 <<"º funcionário: ";
        cin >> fun[i].phone;
        cout << "E-mail do " << i + 1 <<"º funcionário: ";
        cin >> fun[i].email;
        cout << "Salário do " << i + 1 <<"º funcionário: ";
        cin >> fun[i].salario;
        totsal = totsal + fun[i].salario;
        if(i == 0)
        {
            salmaior = fun[i].salario;
            nomesalmaior = fun[i].nome;
        }
        else
        {
            if(fun[i].salario > salmaior)
            {
                salmaior = fun[i].salario;
                nomesalmaior = fun[i].nome;
            }
        }
        cout << "Cadastrar um novo funcionário[s/n]? ";
        cin >> res;
        i++;
    }
    cout << "-=-=-=-=-=-=-==-=-=-=--=-==-=-=-=-=-=-=-=--=-=-=-=-=-";
    cout << "O maior salário foi de: " << salmaior << " reais.\n";
    cout << "O nome do funcionário que recebe esse salário é: " << nomesalmaior << ".\n";

    return 0;
}
