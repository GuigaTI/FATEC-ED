#include <cstdlib>
#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    int num[10];
    int numDigitado;
    int i;
    for (i = 0; i < 10; i++)
    {
        cout << "Digite o numero da posicao " << i + 1 << ": ";
        cin >> numDigitado;
        if (numDigitado < 0)
        {
            break;
        }
        else
        {
            num[i] = numDigitado;
        }
    }
    for (int y = 0; y < i; y++)
    {
        cout << "O vetor inverso do original na posicao " << y + 1 << " eh: " << num[y] * (-1) << "\n";
    }
    return 0;
}
