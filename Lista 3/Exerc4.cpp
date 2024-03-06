#include <cstdlib>
#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

int main()
{
    int matriz[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Digite o valor da posicao de linha " << i + 1 << " e da coluna " << j + 1 << " ";
            cin >> matriz[i][j];
        }
    }
    cout << "Os numeros que estao em posicoes onde a soma dos indices eh impar sao: \n";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if ((i + j) % 2 != 0)
            {
                cout << matriz[i][j] << "\n ";
            }
        }
    }

    return 0;
}