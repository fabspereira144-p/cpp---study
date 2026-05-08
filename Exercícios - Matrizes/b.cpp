#include <iostream>
using namespace std;

int main()
{
    int A[7], B[7], C[7][2];
    
    for (int l=0; l<7; l++)
    {
        cout << "Digite os valores da matriz A: " << endl;
        cin >> A[l];
    }

    for (int l=0; l<7; l++)
    {
        cout << "Digite os valores da matriz B: " << endl;
        cin >> B[l];
    }

    for (int l=0; l<7; l++){
         C[l][0] = A[l]; //Primeira coluna
         C[l][1] = B[l]; //Segunda coluna
    }

    for (int l=0; l<7; l++)
    {
        for (int c=0; c<2; c++)
        {
            cout << C[l][c] << " ";
        }

        cout << endl;
    }
    return 0;
}