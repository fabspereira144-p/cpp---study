#include <iostream>
using namespace std;

int main()
{
    float A[5][4], B[5][4];

    cout << "Digite os valores da matriz A (Celsius): " << endl;
    for (int l=0; l<5; l++)
    {
        for (int c=0; c<4; c++)
        {
            cin >> A[l][c];
        }
    }

    for (int l=0; l<5; l++)
    {
        for (int c=0; c<4; c++)
        {
            B[l][c] = A[l][c] * 1.8 + 32;
        }
    }

    cout << "Matriz A: " << endl;
    for (int l=0; l<5; l++)
    {
        for (int c=0; c<4; c++)
        {
            cout << A[l][c] << " ";
        }

        cout << endl;
    }

    cout << "\n\nMatriz B: " << endl;
    for (int l=0; l<5; l++)
    {
        for (int c=0; c<4; c++)
        {
            cout << B[l][c] << " ";
        }

        cout << endl;
    }
    return 0;
}