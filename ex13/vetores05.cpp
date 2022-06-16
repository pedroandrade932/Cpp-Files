#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num[10];
    int par;
    for(int i = 1; i <= 10; i++)
    {
        cout << "Digite o " << i << "º número: ";
        cin >> num[i - 1];
    }
    for(int i = 1; i <= 10; i++)
    {
        if(num[i - 1] % 2 == 0)
        {
            par = par + 1;
        }
    }
    cout << "Total de números pares: " << par;
    
    return 0;
}


