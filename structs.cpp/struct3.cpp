#include <iostream>
using namespace std;

struct cliente
{
    string nome;
    string endereco;
    int phone;
};

int main()
{
    cliente pess[2];
    cout << "-=-=-=-=-==-=-=-=-=-=-=-=-\n";
    cout << "    cadastro da loja.     \n";
    cout << "-=-=-=-=-==-=-=-=-=-=-=-=-\n";
    for (int i = 0; i <= 1; i++)
    {
        cout << "Nome do " << i + 1 << "º cliente: ";
        cin >> pess[i].nome;
        cout << "Endereço do " << i + 1 << "º cliente: ";
        cin >> pess[i].endereco;
        cout << "Telefone do " << i + 1 <<"º cliente: ";
        cin >> pess[i].phone;
    }
    cout << "Fim do programa.";

    return 0;
}
