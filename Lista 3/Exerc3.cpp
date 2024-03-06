#include <cstdlib>
#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

int main()
{
    string matriz[2][3];
    string matrizT[3][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Digite o valor da posicao de linha " << i + 1 << " e da coluna " << j + 1 << " ";
            cin >> matriz[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matrizT[i][j] = matriz[j][i];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matrizT[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}
