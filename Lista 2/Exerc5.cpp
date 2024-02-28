#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
    int vet[12];
    int i = 0;
    int numMax, numMenor, qtdPar = 0, somaVet = 0, porcPar = 0;
    double media = 0;
    while (i < 12)
    {
        cout << "Digite o numero da posicao " << i + 1 << ": ";
        cin >> vet[i];
        if (i == 0)
        {
            numMax = vet[i];
            numMenor = vet[i];
        }
        if (vet[i] > numMax)
        {
            numMax = vet[i];
        }
        if (vet[i] < numMenor)
        {
            numMenor = vet[i];
        }
        if (vet[i] % 2 == 0)
        {
            qtdPar++;
        }
        somaVet = somaVet + vet[i];
        i++;
    }
    porcPar = (qtdPar * 100) / 12;
    media = somaVet / 12;

    cout << "O maior numero digitado foi: " << numMax << endl;
    cout << "O menor numero digitado foi: " << numMenor << endl;
    cout << "A porcentagem de numeros pares dentro do vetor eh de: " << porcPar << "% \n";
    cout << "A media dos valores do vetor foi de: " << media << endl;
    return 0;
}