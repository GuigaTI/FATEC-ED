#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
    double vetA[7], vetB[7], vetRes[7];
    char vetOp[7];
    for (int i = 0; i < 7; i++)
    {
        cout << "Digite o " << i + 1 << "numero do primeiro vetor: ";
        cin >> vetA[i];
        cout << "Digite o " << i + 1 << "numero do segundo vetor: ";
        cin >> vetB[i];
        cout << "Digite a " << i + 1 << "operacao que sera realizada,  +  -  /  * : ";
        cin >> vetOp[i];
    }
    for (int i = 0; i < 7; i++)
    {
        if (vetOp[i] == '+')
        {
            vetRes[i] = vetA[i] + vetB[i];
        }
        else if (vetOp[i] == '-')
        {
            vetRes[i] = vetA[i] - vetB[i];
        }
        else if (vetOp[i] == '/')
        {
            vetRes[i] = vetA[i] / vetB[i];
        }
        else if (vetOp[i] == '*')
        {
            vetRes[i] = vetA[i] * vetB[i];
        }
    }
    for (int i = 0; i < 7; i++)
    {
        if (vetOp[i] == '+')
        {
            cout << vetA[i] << " + " << vetB[i] << " = " << vetRes[i] << endl;
        }
        else if (vetOp[i] == '-')
        {
            cout << vetA[i] << " - " << vetB[i] << " = " << vetRes[i] << endl;
        }
        else if (vetOp[i] == '/')
        {
            cout << vetA[i] << " / " << vetB[i] << " = " << vetRes[i] << endl;
        }
        else if (vetOp[i] == '*')
        {
            cout << vetA[i] << " * " << vetB[i] << " = " << vetRes[i] << endl;
        }
    }
    return 0;
}