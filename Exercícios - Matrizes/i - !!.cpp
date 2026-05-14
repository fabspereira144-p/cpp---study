#include <iostream>
using namespace std;

int main()
{
    int A[7][7], B[7][7];

    cout << "Digite os valores da matria A: " << endl;
    for (int l=0; l<7; l++)
    {
        for (int c=0; c<7; c++)
        {
            cin >> A[l][c];
        }
    }

    for (int l=0; l<7; l++)
    {
        for (int c=0; c<7; c++)
        {
            // Verifica se o elemento está na diagonal principal e se o índice é ímpar
            if (l == c && l % 2 != 0)
            {
                int fatorial = 1;

                for (int i = 1; i <= A[l][c]; i++)
                {
                    fatorial *= i;
                }

                B[l][c] = fatorial;
            }
            // Caso contrário, calcula a soma dos números de 1 até o valor do elemento
            else
            {
                //O valor da soma é resetado para cada elemento, para evitar que os valores anteriores sejam acumulados
                int soma = 0;
                    
                for (int i=1; i<=A[l][c]; i++)
                {
                    soma += i;
                }

                B[l][c] = soma;
            }
        }
    }

    for (int l=0; l<7; l++)
    {
        for (int c=0; c<7; c++)
        {
            cout << B[l][c] << " ";
        }

        cout << endl;
    }
    return 0;
}