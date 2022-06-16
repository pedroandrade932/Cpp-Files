#include <iostream>
using namespace std;

int main ()
{
    int money = 20;
    if(money > 10)
    {
        cout << "Número é maior que 10.";
    }
    else if(money == 10)
    {
        cout << "Número é iqual a 10.";
    }
    else
    {
        cout << "Número é menor que 10.";
    }
    return 0;
}