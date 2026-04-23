#include <iostream>
using namespace std;

int main() {

    int soma = 0;
    float media;

    for(int i=50; i<=70; i++)
    {
        if (i % 2 == 0)
        {
            soma += i;
        }
    }

    media = soma / 10.0;

    cout << "Soma dos valores: " << soma << endl;
    cout << "Media dos valores: " << media;
    return 0;
}