#include <iostream>
using namespace std;

int main()
{
    int A[5][5];
    int soma = 0;

    cout << "Digite os valores da matria A: " << endl;
    for (int l=0; l<5; l++)
    {
        for (int c=0; c<5; c++)
        {
            cin >> A[l][c];
        }
    }

    for (int l=0; l<5; l++)
    {
        for (int c=0; c<5; c++)
        {
            if (l == c && A[l][c] % 2 != 0)
            {
                soma += A[l][c];
            }
        }
    }

    cout << "Soma dos elementos da diagonal principal (elementos impares): " << soma << endl;

    return 0;
}