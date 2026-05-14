#include <iostream>
using namespace std;

int main()
{
    int A[7][7];
    int numPares = 0;

    cout << "Digite os valores da matria A: " << endl;
    for(int l=0; l<7; l++)
    {
        for (int c=0; c<7; c++)
        {
            cin >> A[l][c];
        }
    }

    for(int l=0; l<7; l++)
    {
        for (int c=0; c<7; c++)
        {
            if (A[l][c] % 2 == 0)
            {
                numPares++;
            }
        }
    }

    cout << "Número de elementos pares na matriz A: " << numPares << endl;

    return 0;
}