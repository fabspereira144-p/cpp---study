#include <iostream>
using namespace std;

int main()
{
    int A[5][5];
    int soma = 0;

    cout << "Elementos da matriz A: " << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> A[i][j];
        }
    }

    //Calculo da soma dos elementos da diagonal principal
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
            {
                soma += A[i][j];
            }
        }
    }

    cout << "Soma dos elementos da diagonal principal: " << soma << endl;

    return 0;
}