#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num[10];
    for(int i = 1; i <= 10; i++)
    {
        cout << "digite o " << i << "º número: ";
        cin >> num[i - 1];
    }
    
    return 0;
}


