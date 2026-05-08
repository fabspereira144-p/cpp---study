#include <iostream>
using namespace std;

int main()
{
    int A[12], B[12], C[12][2];

    cout << "DIgite os valores da matriz A: " << endl;
    for (int l=0; l<12; l++)
    {
        cin >> A[l];
    }

    cout << "DIgite os valores da matriz B: " << endl;
    for (int l=0; l<12; l++)
    {
        cin >> B[l];
    }

    //Matriz C
    for (int l=0; l<12; l++)
    {
        C[l][0] = A[l] * 2;
        C[l][1] = B[l] - 5;
    }

   
    // Exibição da matriz A
    cout << "\nMatriz A:" << endl;

    for (int l=0; l<12; l++)
    {
        cout << A[l] << " ";
    }

    // Exibição da matriz B
    cout << "\n\nMatriz B:" << endl;

    for (int l=0; l<12; l++)
    {
        cout << B[l] << " ";
    }

    // Exibição da matriz C
    cout << "\n\nMatriz C:" << endl;

    for (int l=0; l<12; l++)
    {
        for (int c=0; c<2; c++)
        {
            cout << C[l][c] << "\t";
        }

        cout << endl;
    }

    return 0;
}