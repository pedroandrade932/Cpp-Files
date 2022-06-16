#include <iostream>
using namespace std;

int input(string msg)//---- Lê um número inteiro. ----//
{
    int num;//--- Aqui ficará o número digitado. ---//
    cout << msg;
    cin >> num;
    return num;
}


int menu(string msg)//---- Cria um menu de opções rapidamente. ----//
{
    int resp;//--- Aqui é quardada a RESPosta do usuario. ---//
    cout << msg << "\n";
    resp = input("Digite sua resposta: ");
    return resp;
}

