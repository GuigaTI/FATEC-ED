#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    int a, b, c;
    float delta, x1, x2;
    cout << "Informe o valor de a: ";
    cin >> a;
    cout << "Informe o valor de b: ";
    cin >> b;
    cout << "Informe o valor de c: ";
    cin >> c;

    delta = (b * b) - (4 * a * c);
    if (delta > 0)
    {
        x1 = -b + sqrt(delta) / (2 * a);
        x2 = -b - sqrt(delta) / (2 * a);
        cout << "A raiz x1 é: " << x1 << "A raiz x2 é: " << x2;
    }
    else if (delta == 0)
    {
        x1 = -b / (2 * a);
        cout << "A raiz é: " << x1 << "\n";
    }
    else
    {
        cout << "A raiz não existe\n";
    }
    return 0;
}