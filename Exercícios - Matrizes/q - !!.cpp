#include <iostream>
using namespace std;

int main()
{
    int A[4][5], B[4], C[5];

    cout << "Digite os elementos da matriz A: " << endl;
    for (int l=0; l<4; l++)
    {
        for (int c=0; c<5; c++)
        {
            cin >> A[l][c];
        }
    }

    //Matriz B
    for (int l=0; l<4; l++)
    {
        int soma = 0;
        for (int c=0; c<5; c++)
        {
            soma += A[l][c];
        }
        
        B[l] = soma; //cada posição de B recebe a soma da linha 1
    }

    //Matriz C
    for (int c=0; c<5; c++)
    {
        int soma = 0;
        for (int l=0; l<4; l++)
        {
            soma += A[l][c]; 
        }

        C[c] = soma; //cada posição de C recebe a soma da coluan c
    }

    //Somatório da matriz B e C
    int somaTotal = 0;
    for (int l=0; l<4; l++)
    {
        somaTotal += B[l];
    }
    for (int c=0; c<5; c++)
    {
        somaTotal += C[c]; //o valor acumulado de B fica guardado e C vai somando em cima
    }

    cout << "Soma total: " << somaTotal;
    return 0;
}