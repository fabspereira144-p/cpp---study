#include <iostream>
using namespace std;

int main()
{
    int A[15][15];
    int soma = 0;

    cout << "Digite os valores da matria A: " << endl;
    for (int l=0; l<15; l++)
    {
        for (int c=0; c<15; c++)
        {
            cin >> A[l][c];
        }
    }

    for (int l=0; l<15; l++)
    {
        for (int c=0; c<15; c++)
        {
            if (l == c && A[l][c] % 2 == 0)
            {
                soma += A[l][c];
            }
        }
    }

    cout << "Soma dos elementos da diagonal principal (elementos pares): " << soma << endl;

    return 0;
}