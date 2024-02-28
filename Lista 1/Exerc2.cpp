#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    float l, h, area;
    cout << "Digite o tamanho do lado: ";
    cin >> l;
    if (l <= 0)
    {
        cout << "Tamanho invalido para o lado do retangulo";
        return 0;
    }
    cout << "Digite o tamanho da altura: ";
    cin >> h;
    if (h <= 0)
    {
        cout << "Tamanho invalido para a altura do retangulo";
        return 0;
    }
    area = l * h;
    cout << "A area do retangulo eh: " << area;
    return 0;
}