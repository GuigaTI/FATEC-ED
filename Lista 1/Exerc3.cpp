#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    float b, h, area;
    cout << "Digite a base do triangulo: ";
    cin >> b;
    if (b <= 0)
    {
        cout << "Tamanho invalido para a base do triangulo";
        return 0;
    }
    cout << "Digite o tamanho da altura do triangulo: ";
    cin >> h;
    if (h <= 0)
    {
        cout << "Tamanho invalido para a altura do triangulo";
        return 0;
    }
    area = (b * h) / 2;
    cout << "A area do triangulo eh: " << area;
    return 0;
}