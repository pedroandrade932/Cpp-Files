#include <iostream>
#include <string>
using namespace std;

void print(string msg, bool end = true)
{
    if(end == true)
        cout << msg << endl;
    else
        cout << msg;
}

int input(string msg)
{
    int res;
    cout << msg;
    cin >> res;
    return res;
}


int main()
{
    int vetor[100];
    for (int i = 0; i < 100; i++)
    {
        
    }
    
    return 0;
}
