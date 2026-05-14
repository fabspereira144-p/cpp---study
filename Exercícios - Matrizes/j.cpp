#include <iostream>
using namespace std;

int main()
{
    int A[6][5], B[6][5];

    cout << "Digite os elementos da matriz A: " << endl;
    for (int l = 0; l < 6; l++)
    {
        for (int c = 0; c < 5; c++)
        {
            cin >> A[l][c];
        }
    }

    for(int l = 0; l < 6; l++)
    {
        for (int c = 0; c < 5; c++)
        {
            if (A[l][c] % 2 == 0)
            {
                B[l][c] = A[l][c] + 5;
            }
            else
            {
                B[l][c] = A[l][c] - 4;
            }
        }
    }

    cout << "Matriz A: " << endl;
    for (int l = 0; l < 6; l++)
    {
        for (int c = 0; c < 5; c++)
        {
            cout << A[l][c] << " ";
        }
        cout << endl;
    }

    cout << "Matriz B: " << endl;
    for (int l = 0; l < 6; l++)
    {
        for (int c = 0; c < 5; c++)
        {
            cout << B[l][c] << " ";
        }
        cout << endl;
    }

    return 0;
}