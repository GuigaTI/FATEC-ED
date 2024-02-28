#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
    int vetV[10], vetW[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Digite o numero da posicao " << i + 1 << ": ";
        cin >> vetV[i];
    }
    for (int i = 0; i < 10; i++)
    {
        int valor = vetV[i];
        int fat = valor;
        if (valor > 0 && valor <= 1)
        {
            vetW[i] = valor;
        }
        else if (valor < 0)
        {
            cout << "Numero negativo não eh permitido";
        }
        else
        {
            while (valor > 1)
            {
                fat = fat * (valor - 1);
                valor--;
            }
            vetW[i] = fat;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << "Vetor V posicao " << i + 1 << " " << vetV[i] << endl;
        cout << "Vetor W posicao " << i + 1 << " " << vetW[i] << endl;
    }
    return 0;
}