#include <iostream>
using namespace std;

int main()
{
    int A[5][6], B[5][6], C[5][6];

    cout << "Digite os elementos da matriz A. Apenas numero pares: " << endl;
    
    for (int l=0; l<5; l++)
    {
        for (int c=0; c<6; c++)
        {
            do
            {
                cin >> A[l][c];
                if (A[l][c] % 2 !=0)
                {
                    cout << "Valor invalido. Digite numeros pares: ";
                }
            } while (A[l][c] % 2 != 0); //loop equanto o valor digitado for ímpar;
            
        }
    }

    cout << "Digite os elementos da matriz B. Apenas numero impares: " << endl;

    for (int l=0; l<5; l++)
    {
        for (int c=0; c<6; c++)
        {
            do
            {
                cin >> B[l][c];
                if (B[l][c] % 2 ==0)
                {
                    cout << "Valor invalido. Digite numeros impares: ";
                }
            } while (B[l][c] % 2 == 0); //loop equanto o valor digitado for par;
            
        }
    }

    //Matriz C
    for (int l=0; l<5; l++)
    {
        for (int c=0; c<6; c++)
        {
            C[l][c] = A[l][c] + B[l][c];
        }
    }

    cout << "\n\nMatriz C: " << endl;

    for (int l=0; l<5; l++)
    {
        for (int c=0; c<6; c++)
        {
            cout << C[l][c] << " ";
        }

        cout << endl;
    }

    return 0;
}