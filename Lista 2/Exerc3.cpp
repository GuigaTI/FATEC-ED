#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
    char vet[10];
    int tam;
    cout << "Digite o tamanho da palavra: ";
    cin >> tam;
    cout << "\nDigite uma palavra \n";
    for (int i = 0; i < tam; i++)
    {
        cin >> vet[i];
    }
    for (int i = tam - 1; i >= 0; i--)
    {
        cout << vet[i];
    }
    return 0;
}