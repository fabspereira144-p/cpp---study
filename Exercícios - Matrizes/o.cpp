#include <iostream>
using namespace std;

int main()
{
    double A[8][6], B[8];

    for (int l=0; l<8; l++)
    {
        for (int c=0; c<6; c++)
        {
            cin >> A[l][c];
        }
    }

    for (int l=0; l<8; l++)
    {
        int soma = 0;
        for (int c=0; c<6; c++)
        {
            soma += A[l][c];
        }
        B[l] = soma;
    }

    int somaTotal = 0;
    for (int l=0; l<8; l++)
    {
        somaTotal += B[l];
    }

    cout << "Soma total dos elementos da matriz B: " << somaTotal << endl;

    return 0;
}