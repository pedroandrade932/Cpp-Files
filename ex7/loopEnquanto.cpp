#include <iostream>
using namespace std;

int main ()
{
    int c = 1;
    while(c <= 100)
    {
        if(c % 2 != 0)
        {
            c++;
            continue;
        }
        if(c > 50)
        {
            break;
        }
        cout << c << endl;
        c++;
    }
    return 0;
}