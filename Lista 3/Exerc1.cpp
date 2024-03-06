#include <cstdlib>
#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

int main()
{
    int matriz[4][4];
    int soma = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Digite o valor da posicao de linha " << i + 1 << " e da coluna " << j + 1 << " ";
            cin >> matriz[i][j];
        }
    }
    cout << "A matriz é: \n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << "\n";
    }
    for (int i = 0; i < 4; i++)
    {
        soma = soma + matriz[i][i];
    }
    cout << "A soma da diagonal principal eh: " << soma;

    return 0;
}