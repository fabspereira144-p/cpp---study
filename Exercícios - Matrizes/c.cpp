#include <iostream>
using namespace std;

int main()
{
    int matriz[4][5];

    //Insere os elementos
    for (int l=0; l<4; l++)
    {
        for (int c=0; c<5; c++)
        {
            cin >> matriz[l][c];
        }
    }

    //Imprime os elementos
    for (int l=0; l<4; l++)
    {
        for (int c=0; c<5; c++)
        {
            cout << matriz[l][c] << " ";
        }

        cout << endl;
    }
    return 0;
}