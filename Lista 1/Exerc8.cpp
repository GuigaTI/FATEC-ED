#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    int angA, angB, angC, verTr;
    cout << "Digite o valor do primeiro angulo: ";
    cin >> angA;
    cout << "Digite o valor do segundo angulo: ";
    cin >> angB;
    cout << "Digite o valor do terceiro angulo: ";
    cin >> angC;
    verTr = angA + angB + angC;
    if (verTr > 180)
    {
        cout << "A soma dos angulos nao gera um triangulo";
    }
    else if (angA == angB && angA == angC)
    {
        cout << "O triangulo e equilatero";
    }
    else if (angA == angB || angA == angC || angB == angC)
    {
        cout << "O triangulo e isosceles";
    }
    else if (angA != angB && angA != angC && angB != angC)
    {
        cout << "O triangulo e escaleno";
    }
    return 0;
}