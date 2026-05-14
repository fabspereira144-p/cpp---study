#include <iostream>
using namespace std;

int main()
{
    int A[4], B[4], C[4], D[4], E[4][4];

    for (int l=0; l<4; l++)
    {
        cin >> A[l];
        cin >> B[l];
        cin >> C[l];
        cin >> D[l];
    }

    //Matriz E
    for (int l=0; l<4; l++)
    {
        int fatorial = 1;
        for (int i=1; i <= D[l]; i++)
        {
            fatorial *= i;
        }
        
        E[0][l] = A[l] * 2; 
        E[1][l] = B[l] * 3; 
        E[2][l] = C[l] * 4; 
        E[3][l] = fatorial;
    }

    for (int l=0; l<4; l++)
    {
        for (int c=0; c<4; c++)
        {
            cout << E[l][c] << " ";
        }
        cout << endl;
    }
    return 0;
}