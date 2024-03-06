#include <cstdlib>
#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

int main()
{
    int matriz[6][6];
    int mult = 1;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << "Digite o valor da posicao de linha " << i + 1 << " e da coluna " << j + 1 << " ";
            cin >> matriz[i][j];
        }
    }
    for (int i = 1; i < 6; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            mult = mult * matriz[i][j];
        }
    }
    cout << "O produto dos valores abaixo da diagonal principal e: " << mult;

    return 0;
}