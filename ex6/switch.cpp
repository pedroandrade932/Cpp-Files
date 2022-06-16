#include <iostream>
using namespace std;

int main ()
{
    int num = 10;
    switch (num)
    {
        case 9:
            cout << "o número é 9";
            break;
        case 10:
            cout << "o número é 10";
            break;
        default:
            cout << "número não é 10 nem 9";
            break;
    }
    return 0;
}