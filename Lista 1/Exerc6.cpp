#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    int idade;
    cout << "Digite sua idade: ";
    cin >> idade;
    if (idade >= 0 && idade <= 11)
    {
        cout << "Voce e uma crianca!";
    }
    else if (idade >= 12 && idade <= 17)
    {
        cout << "Voce e um adolescente!";
    }
    else if (idade >= 18 && idade <= 49)
    {
        cout << "Voce e um adulto!";
    }
    else if (idade >= 50)
    {
        cout << "Voce e um idoso!";
    }
    return 0;
}