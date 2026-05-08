#include <iostream>
using namespace std;

int main()
{
    int A[5], C[5][3];

    for (int l=0; l<5; l++)
    {
        cout << "Elementos de A: " << endl; 
        cin >> A[l];
    }

    //Matriz C
    for (int l=0; l<5; l++)
    {
        int fatorial = 1; //o valor da fatorial precisa ser reiniciado

        for (int i=1 ; i <= A[l]; i++)
        {
            fatorial *= i;
        }
        C[l][0] = A[l] + 5;
        C[l][1] = fatorial;
        C[l][2] = A[l] * A[l];
    }

    for (int l=0; l<5; l++)
    {
        for (int c=0; c<3; c++)
        {
            cout << C[l][c] << " ";
        }

        cout << endl;
    }
    return 0;
}