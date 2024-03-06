#include <cstdlib>
#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

int main()
{
    int matriz[3][5];
    int soma_linha[3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Digite o valor da posicao de linha " << i + 1 << " e da coluna " << j + 1 << " ";
            cin >> matriz[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        soma_linha[i] = matriz[i][0];
        for (int j = 1; j < 5; j++)
        {
            soma_linha[i] = soma_linha[i] + matriz[i][j];
        }
    }
    cout << "A matriz é: \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << "\n";
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "\n O vet com a soma de cada linha da matriz eh " << soma_linha[i] << "\n ";
    }

    return 0;
}
