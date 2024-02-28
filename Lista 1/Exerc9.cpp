#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    double a, b, c, d, maiorNum, menorNum, soma, media;
    cout << "Digite o primeiro numero: ";
    cin >> a;
    cout << "Digite o segundo numero: ";
    cin >> b;
    cout << "Digite o terceiro numero: ";
    cin >> c;
    cout << "Digite o quarto numero: ";
    cin >> d;
    soma = a + b + c + d;
    media = soma / 4;
    if (a > b && a > c && a > d)
    {
        maiorNum = a;
        if (b < c && b < d)
        {
            menorNum = b;
        }
        else if (c < b && c < d)
        {
            menorNum = c;
        }
        else if (d < b && d < c)
        {
            menorNum = d;
        }
    }
    else if (b > a && b > c && b > d)
    {
        maiorNum = b;
        if (a < c && a < d)
        {
            menorNum = a;
        }
        else if (c < a && c < d)
        {
            menorNum = c;
        }
        else if (d < a && d < c)
        {
            menorNum = d;
        }
    }
    else if (c > a && c > b && c > d)
    {
        maiorNum = c;
        if (b < a && b < d)
        {
            menorNum = b;
        }
        else if (a < b && a < d)
        {
            menorNum = a;
        }
        else if (d < a && d < b)
        {
            menorNum = d;
        }
    }
    else if (d > a && d > b && d > c)
    {
        maiorNum = d;
        if (a < c && a < b)
        {
            menorNum = b;
        }
        else if (c < b && c < a)
        {
            menorNum = c;
        }
        else if (b < a && b < c)
        {
            menorNum = b;
        }
    }
    cout << "O maior numero digitado foi: " << maiorNum << endl;
    cout << "O menor numero digitado foi: " << menorNum << endl;
    cout << "A media dos numeros digitados foi de: " << media;
    return 0;
}