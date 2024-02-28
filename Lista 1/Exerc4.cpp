#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    float baseMenor, baseMaior, h, area;
    cout << "Digite a base maior do trapezio: ";
    cin >> baseMaior;
    if (baseMaior <= 0)
    {
        cout << "Tamanho invalido para a base maior do trapezio";
        return 0;
    }
    cout << "Digite o tamanho da base menor do trapezio: ";
    cin >> baseMenor;
    if (baseMenor <= 0)
    {
        cout << "Tamanho invalido para a base menor do trapezio";
        return 0;
    }
    else if (baseMenor > baseMaior)
    {
        cout << "A base menor não pode ser maior que a base maior";
        return 0;
    }
    cout << "Digite o tamanho da altura do trapezio: ";
    cin >> h;
    if (h <= 0)
    {
        cout << "Altura invalida para a altura do trapezio";
        return 0;
    }
    area = (baseMenor + baseMaior) * h / 2;
    cout << "A area do trapezio eh: " << area;
    return 0;
