#include <iostream>
using namespace std;

int main()
{
    int A[5][3];
    int B[5][3];
    int C[5][3];

    //Matriz A
    for (int l=0; l<5; l++)
    {
        for (int c=0; c<3; c++)
        {
            cout << "Digite os valores da matriz A: " << endl;
            cin >> A[l][c];
        }
    }

    //Matriz B
    for (int l=0; l<5; l++)
    {
        for (int c=0; c<3; c++)
        {
            cout << "Digite os valores da matriz B: " << endl;
            cin >> B[l][c];
        }
    }

    //Matriz C
    for (int l=0; l<5; l++)
    {
        for (int c=0; c<3; c++)
        {
            C[l][c] = A[l][c] + B[l][c];
        }
    }

    //Mostrar Matriz C
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