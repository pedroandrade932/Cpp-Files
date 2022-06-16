#include <iostream>

using namespace std;

int main()
{
    int num[10];
    for(int i = 0; i <= 9; i++)
    {
        cout << "Digite um número: ";
        cin >> num[i];
    }
    for(int i = 9; i >= 0; i = i - 1)
    {
        cout << num[i] << ", ";
    }
    
    return 0;
}
