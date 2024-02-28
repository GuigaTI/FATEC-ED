#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
    int vet[8], vetOrdenado[8];
    int aux;
    for (int i = 0; i < 8; i++)
    {
        cout << "Digite o numero da " << i + 1 << " posicao: ";
        cin >> vet[i];
        vetOrdenado[i] = vet[i];
    }
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (vetOrdenado[i] < vetOrdenado[j])
            {
                aux = vetOrdenado[i];
                vetOrdenado[i] = vetOrdenado[j];
                vetOrdenado[j] = aux;
            }
        }
    }
    cout << "Vetor nao ordenado: ";
    for (int i = 0; i < 8; i++)
    {
        cout << vet[i] << " ";
    }
    cout << "\nVetor ordenado: ";
    for (int i = 0; i < 8; i++)
    {
        cout << vetOrdenado[i] << " ";
    }

    return 0;
}