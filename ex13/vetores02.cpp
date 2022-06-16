#include <string>
#include <iostream>

using namespace std;

int main()
{
    int num[10];
    for(int i = 1; i <= 10; i++)
    {
        cout << "Digite o " << i << "º número: ";
        cin >> num[i - 1];
    }
    for(int i = 1; i <= 10; i++)
    {
        cout << "O " << i << "º número digitado foi: " << num[i - 1] << "\n";
    }

    return 0;
}

