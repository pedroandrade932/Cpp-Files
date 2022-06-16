#include <iostream>
using namespace std;

struct conta
{
    int num_ag;
    int num_conta;
};

struct livro
{
    string nome;
    string autor;
    int vol;
};

struct aluno
{
    string nome;
    int idade;
    int matri;
    int serie;
};

struct casa
{
    int num;
    int lote;
    int quadra;
};

struct pessoa
{
    string nome;
    int idade;
    char sexo;
    string ende;
};

struct animal
{
    string nome;
    int idade;
    string dono;
};

struct veiculo
{
    string nome;
    string marca;
    string modelo;
    string placa;
};

struct professor
{
    string nome;
    int matricula;
    string materia;
    double salario;
};

int main()
{
    conta cnt[10];
    livro lv[10];
    aluno al[10];
    casa cs[10];
    pessoa pess[10];
    animal anl[10];
    veiculo vel[10];
    professor prof[10];
    
    cout << "Digite os dados pedidos abaixo: \n";
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=\n";
    for (int i = 0; i <= 9; i++) 
    {
        cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=\n";
        cout << i + 1 << "º número da agencia de banco: ";
        cin >> cnt[i].num_ag;
        cout << i + 1 << "º número da conta de banco: ";
        cin >> cnt[i].num_conta;
    }
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=\n";
    for (int i = 0; i <= 9; i++) 
    {
        cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=\n";
        cout << "nome do " << i + 1 << "º livro: ";
        cin >> lv[i].nome;
        cout << "nome do autor do " << i + 1 << "º livro: ";
        cin >> lv[i].autor;
        cout << "número do volume: ";
        cin >> lv[i].vol;
    }
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=\n";
    for (int i = 0; i <= 9; i++) 
    {
        cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=\n";
        cout << "nome do " << i + 1 << "º aluno: ";
        cin >> al[i].nome;
        cout << "Idade do " << i + 1 << "º aluno: ";
        cin >> al[i].idade;
        cout << "matricula: ";
        cin >> al[i].matri;
        cout << "Serie que estuda: ";
        cin >> al[i].serie;
    }
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=\n";
    for (int i = 0; i <= 9; i++) 
    {
        cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=\n";
        cout << "Número da " << i + 1 << "º casa: ";
        cin >> cs[i].num;
        cout << "número do lote: ";
        cin >> cs[i].lote;
        cout << "número da quadra: ";
        cin >> cs[i].quadra;
    }
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=\n";
    for (int i = 0; i <= 9; i++) 
    {
        cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=\n";
        cout << "Nome da " << i + 1 << "º pessoa: ";
        cin >> pess[i].nome;
        cout << "idade da " << i + 1 << "º pessoa: ";
        cin >> pess[i].idade;
        cout << "sexo[m/f]: ";
        cin >> pess[i].sexo;
        cout << "endereço: ";
        cin >> pess[i].ende;
    }
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=\n";
    for (int i = 0; i <= 9; i++) 
    {
        cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=\n";
        cout << "nome do " << i + 1 << "º animal: ";
        cin >> anl[i].nome;
        cout << "idade: ";
        cin >> anl[i].idade;
        cout << "nome do dono: ";
        cin >> anl[i].dono;
    }
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=\n";
    for (int i = 0; i <= 9; i++) 
    {
        cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=\n";
        cout << "nome do " << i + 1 << "º veiculo[carro, moto, etc.]: ";
        cin >> vel[i].nome;
        cout << "nome da marca: ";
        cin >> vel[i].marca;
        cout << "nome do modelo: ";
        cin >> vel[i].modelo;
        cout << i + 1 << "º placa: ";
        cin >> vel[i].placa;
    }
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=\n";
    for (int i = 0; i <= 9; i++) 
    {
        cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=\n";
        cout << "nome do " << i + 1 << "º professor: ";
        cin >> prof[i].nome;
        cout << "número da matricula: ";
        cin >> prof[i].matricula;
        cout << "nome da matéria: ";
        cin >> prof[i].materia;
        cout << "Salário que ganha: ";
        cin >> prof[i].salario;
    }
    cout << "Programa finalizado.";
    return 0;
}
