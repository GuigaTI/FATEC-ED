#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
    double vetA[7], vetB[7], vetRes[7];
    string vetOp[7];
    for (int i = 0; i < 7; i++)
    {
        cout << "Digite o " << i + 1 << " do primeiro vetor: ";
        cin >> vetA[i];
        cout << "Digite o " << i + 1 << " do segundo vetor: ";
        cin >> vetB[i];
        cout << "Digite a " << i + 1 << "operacao que sera realizada, sendo soma para SOMA,sub para SUBTRACAO,div para DIVISAO e mult para MULTIPLICACAO ";
        cin >> vetOp[i];
    }
    for (int i = 0; i < 7; i++)
    {
        if (vetOp[i] == "soma")
        {
            vetRes[i] = vetA[i] + vetB[i];
        }
        else if (vetOp[i] == "sub")
        {
            vetRes[i] = vetA[i] - vetB[i];
        }
        else if (vetOp[i] == "div")
        {
            vetRes[i] = vetA[i] / vetB[i];
        }
        else if (vetOp[i] == "mult")
        {
            vetRes[i] = vetA[i] * vetB[i];
        }
    }
    for (int i = 0; i < 7; i++)
    {
        if (vetOp[i] == "soma")
        {
            cout << vetA[i] << " + " << vetB[i] << " = " << vetRes[i] << endl;
        }
        else if (vetOp[i] == "sub")
        {
            cout << vetA[i] << " - " << vetB[i] << " = " << vetRes[i] << endl;
        }
        else if (vetOp[i] == "div")
        {
            cout << vetA[i] << " / " << vetB[i] << " = " << vetRes[i] << endl;
        }
        else if (vetOp[i] == "mult")
        {
            cout << vetA[i] << " * " << vetB[i] << " = " << vetRes[i] << endl;
        }
    }
    return 0;
}