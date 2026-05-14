#include <iostream>
using namespace std;

int main()
{
    int A[5][5], B[5][5];

    cout << "Insira os elementos da matriz A: " << endl;

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
            if (l + c == 4) //a condição l + c == 4 identifica exatamente a diagonal inversa em qualquer matriz 5x5
            {
                B[l][c] = A[l][c] * 3;
            }
            else
            {
                B[l][c] = A[l][c] * 2;
            }
        }
    }

    cout << "\nMatriz B: " << endl;
    for (int l=0; l<5; l++)
    {
        for (int c=0; c<5; c++)
        {
            cout << B[l][c] << " ";
        }

        cout << endl;
    }
    return 0;
}