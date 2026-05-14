#include <iostream>
using namespace std;

int main()
{
    int A[4][5], B[4][5], C[4][5];

    cout << "Insira os elementos da matriz A (apenas valores divisiveis por 3 E 4)" << endl;

    for (int l=0; l<4; l++)
    {
        for (int c=0; c<5; c++)
        {
            do
            {
                cin >> A[l][c];
                if (A[l][c] % 3 != 0 || A[l][c] % 4 != 0)
                {
                    cout << "Valor invalido. Digite novamente: ";
                }
            } while (A[l][c] % 3 != 0 || A[l][c] % 4 != 0); //rejeita se NÃO for divisivel por 3 OU NÃO for divisivel por 4
            
        }
    }

    cout << "Insira os elementos da matriz B (apenas valores divisiveis por 5 OU 6)" << endl;

    for (int l=0; l<4; l++)
    {
        for (int c=0; c<5; c++)
        {
            do
            {
                cin >> B[l][c];
                if (B[l][c] % 5 != 0 && B[l][c] % 6 != 0)
                {
                    cout << "Valor invalido. Digite novamente: ";
                }
            } while (B[l][c] % 5 != 0 && A[l][c] % 6 != 0); //rejeita quem não for divisível por nenhum dos dois
            //basta um dos dois ser verdadeiro para aceitar, logo rejeita só quando os dois são falsos
            
        }
    }

    //Matriz C
    for (int l=0; l<4; l++)
    {
        for (int c=0; c<5; c++)
        {
            C[l][c] = A[l][c] - B[l][c];
        }
    }

    cout << "\n\nMatriz C: " << endl;
    for (int l=0; l<4; l++)
    {
        for (int c=0; c<5; c++)
        {
           cout << C[l][c] << " ";
        }

        cout << endl;
    }
    return 0;
}