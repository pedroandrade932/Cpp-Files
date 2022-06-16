#include <iostream>
using namespace std;

struct cliente
{
    string nome;
    string ende;
    int phone;
};

int main()
{
    cliente cad[50];
    string res;
    int i = 0;
    cout << "-=-=-=-=-==-=-=-=-=-=-=-=-\n";
    cout << "    cadastros da loja.     \n";
    cout << "-=-=-=-=-==-=-=-=-=-=-=-=-\n";
    while(res != "n" and i <= 49)
    {
        cout << "Nome do " << i + 1 << "º cliente: ";
        cin >> cad[i].nome;
        cout << "Endereço do " << i + 1 << "º cliente: ";
        cin >> cad[i].ende;
        cout << "Telefone do " << i + 1 <<"º cliente: ";
        cin >> cad[i].phone;
        cout << "Cadastrar um novo cliente[s/n]? ";
        cin >> res;
        i++;
    }
    if (i > 49)
    {
        cout << "Não pode cadastrar mais clientes.\n";
    }
    cout << "Fim do programa.";

    return 0;
}
