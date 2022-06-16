#include <iostream>
#include <unistd.h>
#include <cstdlib>
using namespace std;


struct Dados
{
    int id;
    char s;
    float sal;
    int f;
};



string nad(int idade)
{
    string classe;
    if(idade >= 5 and idade <= 7)
    {
        classe = "Infantil A";
    }
    else if(idade >= 8 and idade <= 10)
    {
        classe = "Infantil B";
    }
    else if(idade >= 11 and idade <= 13)
    {
        classe = "Juvenil A";
    }
    else if(idade >= 14 and idade <= 17)
    {
        classe = "Juvenil B";
    }
    else if(idade >= 18)
    {
        classe = "Adulto";
    }
    else if(idade <= 4)
    {
        classe = "Não participa";

    }
    return classe;
}

void val(double x,double y,double z)
{
    if(x < y + z and y < x + z and z < x + y )
    {
        if(x == y and y == z)
        {
            cout << "Triangulo equilátero.\n";
        }
        else if((x != y and y == z) or (y != x and x == z) or (z != x and x == y))
        {
            cout << "Triangulo isósceles.\n";
        }
        else
        {
            cout << "Triangulo escaleno.\n";
        }
    }
    else
    {
        cout << "não forma um trangulo.\n";
    }
}

string vet()
{
    int num[20];
    int numr;
    string res;
    bool en = false;
    for(int i = 0; i <= 19; i++)
    {
        num[i] = rand() % 10;
    }
    cout << "Digite um número de 0 a 10: ";
    cin >> numr;
    int i = 0;
    while(i <= 19)
    {
        if(numr == num[i])
        {
            res = "Número encontrado.\n";
            en = true;
        }
        i++;
    }
    if(en == false)
    {
        res = "Número não encontrado.\n";
    }
    return res;
    
}


void mame(int x,int y,int z)
{
    if(x > z)
    {
        if(x > y)
        {
            cout << x << "é o maior valor\n";
            if(y > z)
            {
                cout << z << "é o menor valor\n";
            }
            else
            {
                cout << y << "é o menor valor\n";
            }
        }
        else
        {
            cout << y << "é o maior valor\n";
            if(x > z)
            {
                cout << z << "é o menor valor\n";
            }
            else
            {
                cout << x << "é o menor valor\n";
            }

        }
    }
    else if(y > z)
    {
        if(y > x)
        {
            cout << y << "é o maior valor\n";
            if(x > z)
            {
                cout << z << "é o menor valor\n";
            }
            else
            {
                cout << x << "é o menor valor\n";
            }

        }
        else
        {
            cout << x << "é o maior valor\n";
            if(y > z)
            {
                cout << z << "é o menor valor\n";
            }
            else
            {
                cout << y << "é o menor valor\n";
            }

        }
    }
    else if(z > x)
    {
        if(z > y)
        {
            cout << z << "é o maior valor\n";
            if(y > x)
            {
                cout << x << "é o menor valor\n";
            }
            else
            {
                cout << y << "é o menor valor\n";
            }

        }
        else
        {
            cout << y << "é o maior valor\n";
            if(z > x)
            {
                cout << x << "é o menor valor\n";
            }
            else
            {
                cout << z << "é o menor valor\n";
            }

        }
    }

}
Dados dados[500];
void pes(int tam)
{
    for (int i = 0; i <= tam; i++)
    {
        cout << "=-=-=-=-=- " << i + 1 << "ª pessoa =-=-=-=-=-\n";
        cout << "Idade: " << dados[i].id << endl;
        cout << "Sexo: " << dados[i].s << endl;
        cout << "Salário: " << dados[i].sal << endl;
        cout << "Filhos: " << dados[i].f << endl;
    }
    
}

int main()
{
    int res;
    while(true)
    {
        cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
        cout << " EXERCICIO SOBRE FUNÇÕES EM C++\n";
        cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
        cout << "[ 1 ] Questão 1\n[ 2 ] Questão 2\n[ 3 ] questão 3\n[ 4 ] Questão 4\n[ 5 ] Questão 5\n";
        cout << "Digite sua escolha: ";
        cin >> res;
        cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
        if(res == 1)
        {
            string cat;
            int id;
            cout << "Idade do nadador: ";
            cin >> id;
            cat = nad(id);
            cout << "Classe: " << cat << endl;
        }
        else if(res == 2)
        {
            double x;
            double y;
            double z;
            cout << "Digite um número: ";
            cin >> x;
            cout << "Digite um número: ";
            cin >> y;
            cout << "Digite um número: ";
            cin >> z;
            val(x, y, z);
        }
        else if(res == 3)
        {
            string val = vet();
            cout << val << endl;
        }
        else if(res == 4)
        {
            int i = 0;
            char resp;
            while(i <= 499 and resp != 'n')
            {
                cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
                cout << "digite a idade: ";
                cin >> dados[i].id;
                cout << "digite o sexo: ";
                cin >> dados[i].s;
                cout << "digite o salario: ";
                cin >> dados[i].sal;
                cout << "digite quantidade de filhos: ";
                cin >> dados[i].f;
                cout << "Continua[s/n]? ";
                cin >> resp;
                if(res == 's')
                {
                    i++;
                }
                
            }
            pes(i);
        }
        else if(res == 5)
        {
            int x;
            int y;
            int z;
            cout << "Digite um número: ";
            cin >> x;
            cout << "Digite um número: ";
            cin >> y;
            cout << "Digite um número: ";
            cin >> z;
            mame(x, y, z);
        }
        else
        {
            cout << "ERRO: Opção invalida.\n";
        }
    }

    return 0;
}