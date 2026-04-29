#include <iostream>
using namespace std;

int main()
{
    int num[10];
    int achou = 0;
    int numAchou;

    for (int i=0; i<10; i++)
    {
        cin >> num[i];
    }

    cout << "Digite o numero que voce quer achar: " << endl;
    cin>> numAchou;

    for (int i=0; i<10; i++)
    {
        if (numAchou == num[i])
        {
            achou++;
        }
    }

    cout << "O numero " << numAchou << " aparece " << achou << " vezes" << endl;
    
    return 0;
}