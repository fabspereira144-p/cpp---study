#include <iostream>
using namespace std;

int main() 
{
    int A[10][7];
    int elemenPar = 0;
    int elementImp = 0;

    cout << "Insira os elementos da matria A: " << endl;
    for (int l=0; l<10; l++)
    {
        for (int c=0; c<7; c++)
        {
            cin >> A[l][c];
        }
    }

    for (int l=0; l<10; l++)
    {
        for (int c=0; c<7; c++)
        {
           if (A[l][c] % 2 == 0)
           {
                elemenPar++;
           }
           else
           {
                elementImp++;
           }
        }
    }

    int elemenTotal = 70;
    double porcenPares = ((double)elemenPar / elemenTotal) * 100;  
    double porcenImpar = ((double)elementImp / elemenTotal) * 100; 

    cout << "Porcentagem de elementos pares: " << porcenPares << "%" << endl;
    cout << "Porcentagem de elementos impares: " << porcenImpar << "%" << endl;

    return 0;
}