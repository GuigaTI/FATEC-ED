#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    int num;
    cout << "Digite um numero: ";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "O numero digitado e par!";
    }
    else
    {
        cout << "O numero digitado e impar!";
    }

    return 0;
}
