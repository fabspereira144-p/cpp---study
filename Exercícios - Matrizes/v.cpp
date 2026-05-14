#include <iostream>
using namespace std;

int main()
{
    int A[5][5], B[5][5], C[5][5];

    cout << "Insira os elementos da matriz A (valores que nao sejam divisiveis por 3): " << endl;

    for (int l=0; l<5; l++)
    {
        for (int c=0; c<5; c++)
        {
            do
            {
                cin >> A[l][c];
                if (A[l][c] % 3 == 0)
                {
                    cout << "Valor invalido. Digite outro valor: ";
                }
            } while (A[l][c] % 3 == 0);
            
        }
    }

    cout << "\nInsira os elementos da matriz B (valores que nao sejam divisiveis por 6): " << endl;

    for (int l=0; l<5; l++)
    {
        for (int c=0; c<5; c++)
        {
            do
            {
                cin >> B[l][c];
                if (B[l][c] % 6 == 0)
                {
                    cout << "Valor invalido. Digite outro valor: ";
                }
            } while (B[l][c] % 6 == 0);
            
        }
    }

    //Matriz C
    for (int l=0; l<5; l++)
    {
        for (int c=0; c<5; c++)
        {
            C[l][c] = A[l][c] + B[l][c];
        }
    }

    cout << "\nMatriz C: " << endl;
    for (int l=0; l<5; l++)
    {
        for (int c=0; c<5; c++)
        {
            cout << C[l][c] << " ";
        }

        cout << endl;
    }
    return 0;
}