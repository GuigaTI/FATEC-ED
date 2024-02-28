#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    float vetor[100];
    int ultimoNumero, contador, contadorVetor;
    float numDigitado;

    contador = 0;
    ultimoNumero = 0;
    contadorVetor = 0;
    for (int i = 0; i < 100; i++)
    {
        cout << "Digite o numero da posicao " << i + 1 << " : ";
        cin >> numDigitado;
        if (numDigitado != 0)
        {
            vetor[i] = numDigitado;
            ultimoNumero = numDigitado;
            contadorVetor++;
        }
        else
        {
            break;
        }
    }
    for (int i = 0; i < contadorVetor; i++)
    {
        if (vetor[i - 1] == ultimoNumero)
        {
            contador++;
        }
    }
    cout << "O numero de vezes que o ultimo numero digitado esta presente no vetor foi de: " << contador;
    return 0;
}