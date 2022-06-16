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
    conta cnt;
    livro lv;
    aluno al;
    casa cs;
    pessoa pess;
    animal anl;
    veiculo vel;
    professor prof;
    
    cout << "Digite os dados pedidos abaixo: \n";
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=\n";
    cout << "número da agencia de banco: ";
    cin >> cnt.num_ag;
    cout << "número da conta de banco: ";
    cin >> cnt.num_conta;
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=\n";
    cout << "nome do um livro: ";
    cin >> lv.nome;
    cout << "nome do autor do livro: ";
    cin >> lv.autor;
    cout << "número do volume: ";
    cin >> lv.vol;
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=\n";
    cout << "nome do aluno: ";
    cin >> al.nome;
    cout << "Idade do aluno: ";
    cin >> al.idade;
    cout << "matricula: ";
    cin >> al.matri;
    cout << "Serie que estuda: ";
    cin >> al.serie;
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=\n";
    cout << "Número da casa: ";
    cin >> cs.num;
    cout << "número do lote: ";
    cin >> cs.lote;
    cout << "número da quadra: ";
    cin >> cs.quadra;
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=\n";
    cout << "Nome da pessoa: ";
    cin >> pess.nome;
    cout << "idade da pessoa: ";
    cin >> pess.idade;
    cout << "sexo[m/f]: ";
    cin >> pess.sexo;
    cout << "endereço: ";
    cin >> pess.ende;
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=\n";
    cout << "nome do animal: ";
    cin >> anl.nome;
    cout << "idade: ";
    cin >> anl.idade;
    cout << "nome do dono: ";
    cin >> anl.dono;
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=\n";
    cout << "nome do veiculo[carro, moto, etc.]: ";
    cin >> vel.nome;
    cout << "nome da marca: ";
    cin >> vel.marca;
    cout << "nome do modelo: ";
    cin >> vel.modelo;
    cout << "placa: ";
    cin >> vel.placa;
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=\n";
    cout << "nome do professor: ";
    cin >> prof.nome;
    cout << "número da matricula: ";
    cin >> prof.matricula;
    cout << "nome da matéria: ";
    cin >> prof.materia;
    cout << "Salário que ganha: ";
    cin >> prof.salario;
    cout << "Programa finalizado.";
    return 0;
}



