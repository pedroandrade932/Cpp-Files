#include <iostream>
#include <string>
using namespace std;

bool par(int num)
{
    if(num % 2 == 0)
        return true;
    else
        return false;
}

void print(string msg)
{
    cout << msg << endl;
}

int input(string msg)
{
    int res;
    cout << msg;
    cin >> res;
    return res;

}

int main ()
{
    int n;
    n = input("Digite um número: ");
    if(par(n) == true)
        print("O número é par.");
    else
        print("O número é impar.");
    return 0;
}